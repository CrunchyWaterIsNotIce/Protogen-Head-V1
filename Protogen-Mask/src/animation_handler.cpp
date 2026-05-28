#include "animation_handler.h"
#include "animations.h"

AnimationController::AnimationController() {
  currentFrame = 0;
  lastFrameTime = 0;
  frameDelay = 100; // Default 100ms
}

void AnimationController::setAnimation(const Animation& anim) {
  currentFrame = 0;
  frameDelay = 1000 / anim.fps;
  lastFrameTime = millis();
}

void AnimationController::update(CRGB* leds, uint16_t startIndex, const Animation& anim) {
  unsigned long currentTime = millis();
  
  if (currentTime - lastFrameTime >= frameDelay) {
    // Calculate offset into frame data
    uint16_t frameOffset = currentFrame * anim.pixelsPerFrame;
    
    // Copy current frame to LED array
    for (uint16_t i = 0; i < anim.pixelsPerFrame; i++) {
      leds[startIndex + i] = anim.frames[frameOffset + i];
    }
    
    // Advance to next frame
    currentFrame = (currentFrame + 1) % anim.numFrames;
    lastFrameTime = currentTime;
  }
}

void AnimationController::reset() {
  currentFrame = 0;
  lastFrameTime = millis();
}

VisorPipeline::VisorPipeline()
    : mouthAnim(nullptr), noseAnim(nullptr), rightEyeAnim(nullptr), leftEyeAnim(nullptr) {}

void VisorPipeline::setAnimations(const Animation& mouth, const Animation& nose,
                                  const Animation& rightEye, const Animation& leftEye) {
  mouthAnim = &mouth;
  noseAnim = &nose;
  rightEyeAnim = &rightEye;
  leftEyeAnim = &leftEye;

  mouthController.setAnimation(mouth);
  noseController.setAnimation(nose);
  rightEyeController.setAnimation(rightEye);
  leftEyeController.setAnimation(leftEye);
}

void VisorPipeline::update(CRGB* leds, const VisorLayout& layout) {
  if (mouthAnim) {
    mouthController.update(leds, layout.mouthStart, *mouthAnim);
  }
  if (noseAnim) {
    noseController.update(leds, layout.noseStart, *noseAnim);
  }
  if (rightEyeAnim) {
    rightEyeController.update(leds, layout.rightEyeStart, *rightEyeAnim);
  }
  if (leftEyeAnim) {
    leftEyeController.update(leds, layout.leftEyeStart, *leftEyeAnim);
  }
}

void VisorPipeline::reset() {
  mouthController.reset();
  noseController.reset();
  rightEyeController.reset();
  leftEyeController.reset();
}

EarPipeline::EarPipeline()
    : anim(nullptr), ledCount(0), solidMode(false), solidColor(CRGB::Black) {}

void EarPipeline::setAnimation(const Animation& animation, uint16_t numLeds) {
  anim = &animation;
  ledCount = numLeds;
  solidMode = false;
  controller.setAnimation(animation);
}

void EarPipeline::setSolid(const CRGB& color, uint16_t numLeds) {
  anim = nullptr;
  ledCount = numLeds;
  solidMode = true;
  solidColor = color;
}

void EarPipeline::update(CRGB* leds) {
  if (solidMode) {
    fill_solid(leds, ledCount, solidColor);
    return;
  }

  if (anim) {
    controller.update(leds, 0, *anim);
  }
}

void EarPipeline::reset() {
  controller.reset();
}

BlinkPipeline::BlinkPipeline()
    : leftAnim(nullptr), rightAnim(nullptr), minIntervalMs(10000), maxIntervalMs(15000),
      durationMs(150), nextBlinkTime(0), blinkStartTime(0), active(false) {}

void BlinkPipeline::setAnimations(const Animation& left, const Animation& right) {
  leftAnim = &left;
  rightAnim = &right;
  leftController.setAnimation(left);
  rightController.setAnimation(right);
}

void BlinkPipeline::setTiming(unsigned long minMs, unsigned long maxMs, unsigned long blinkDurationMs) {
  minIntervalMs = minMs;
  maxIntervalMs = maxMs;
  durationMs = blinkDurationMs;
}

void BlinkPipeline::scheduleNext(unsigned long now) {
  if (minIntervalMs > maxIntervalMs) {
    unsigned long temp = minIntervalMs;
    minIntervalMs = maxIntervalMs;
    maxIntervalMs = temp;
  }

  nextBlinkTime = now + random(minIntervalMs, maxIntervalMs + 1);
}

void BlinkPipeline::applyFrame(CRGB* leds, uint16_t startIndex, const Animation& anim, uint8_t frameIndex) {
  uint16_t frameOffset = frameIndex * anim.pixelsPerFrame;
  for (uint16_t i = 0; i < anim.pixelsPerFrame; i++) {
    leds[startIndex + i] = anim.frames[frameOffset + i];
  }
}

void BlinkPipeline::update(CRGB* leds, const VisorLayout& layout) {
  if (!leftAnim || !rightAnim) {
    return;
  }

  unsigned long now = millis();

  if (nextBlinkTime == 0) {
    scheduleNext(now);
  }

  if (!active && now >= nextBlinkTime) {
    active = true;
    blinkStartTime = now;
  }

  if (active) {
    unsigned long elapsed = now - blinkStartTime;
    if (elapsed >= durationMs) {
      active = false;
      scheduleNext(now);
      return;
    }

    uint16_t leftDelay = (leftAnim->fps == 0) ? durationMs : static_cast<uint16_t>(1000 / leftAnim->fps);
    uint16_t rightDelay = (rightAnim->fps == 0) ? durationMs : static_cast<uint16_t>(1000 / rightAnim->fps);

    uint8_t leftFrame = 0;
    uint8_t rightFrame = 0;
    if (leftAnim->numFrames > 1 && leftDelay > 0) {
      leftFrame = static_cast<uint8_t>(elapsed / leftDelay);
      if (leftFrame >= leftAnim->numFrames) {
        leftFrame = leftAnim->numFrames - 1;
      }
    }
    if (rightAnim->numFrames > 1 && rightDelay > 0) {
      rightFrame = static_cast<uint8_t>(elapsed / rightDelay);
      if (rightFrame >= rightAnim->numFrames) {
        rightFrame = rightAnim->numFrames - 1;
      }
    }

    applyFrame(leds, layout.leftEyeStart, *leftAnim, leftFrame);
    applyFrame(leds, layout.rightEyeStart, *rightAnim, rightFrame);
  }
}

void BlinkPipeline::reset() {
  active = false;
  nextBlinkTime = 0;
  blinkStartTime = 0;
  leftController.reset();
  rightController.reset();
}

ConnectionPipeline::ConnectionPipeline()
    : visorAnim(nullptr), mouthAnim(nullptr), noseAnim(nullptr), rightEyeAnim(nullptr), leftEyeAnim(nullptr),
      visorLayout(nullptr), leftEarAnim(nullptr), rightEarAnim(nullptr), startTime(0), durationMs(800),
      color(CRGB(0, 160, 120)), active(false), solidMode(true), segmentMode(false) {}

void ConnectionPipeline::setTiming(unsigned long durationMsValue) {
  durationMs = durationMsValue;
}

void ConnectionPipeline::setSolidColor(const CRGB& newColor) {
  color = newColor;
  solidMode = true;
  segmentMode = false;
}

void ConnectionPipeline::setAnimations(const Animation& visor, const Animation& leftEar, const Animation& rightEar) {
  visorAnim = &visor;
  mouthAnim = nullptr;
  noseAnim = nullptr;
  rightEyeAnim = nullptr;
  leftEyeAnim = nullptr;
  visorLayout = nullptr;
  leftEarAnim = &leftEar;
  rightEarAnim = &rightEar;
  visorController.setAnimation(visor);
  leftEarController.setAnimation(leftEar);
  rightEarController.setAnimation(rightEar);
  solidMode = false;
  segmentMode = false;
}

void ConnectionPipeline::setSegmentAnimations(const Animation& mouth, const Animation& nose,
                                              const Animation& rightEye, const Animation& leftEye,
                                              const Animation& leftEar, const Animation& rightEar,
                                              const VisorLayout& layout) {
  visorAnim = nullptr;
  mouthAnim = &mouth;
  noseAnim = &nose;
  rightEyeAnim = &rightEye;
  leftEyeAnim = &leftEye;
  visorLayout = &layout;
  leftEarAnim = &leftEar;
  rightEarAnim = &rightEar;
  leftEarController.setAnimation(leftEar);
  rightEarController.setAnimation(rightEar);
  solidMode = false;
  segmentMode = true;
}

void ConnectionPipeline::applyFrame(CRGB* leds, uint16_t startIndex, const Animation& anim, uint8_t frameIndex) {
  uint16_t frameOffset = frameIndex * anim.pixelsPerFrame;
  for (uint16_t i = 0; i < anim.pixelsPerFrame; i++) {
    leds[startIndex + i] = anim.frames[frameOffset + i];
  }
}

uint8_t ConnectionPipeline::frameForElapsed(const Animation& anim, unsigned long elapsed) const {
  if (anim.numFrames <= 1 || anim.fps == 0) {
    return 0;
  }
  unsigned long frameDelay = 1000UL / anim.fps;
  if (frameDelay == 0) {
    return anim.numFrames - 1;
  }
  unsigned long frameIndex = elapsed / frameDelay;
  if (frameIndex >= anim.numFrames) {
    frameIndex = anim.numFrames - 1;
  }
  return static_cast<uint8_t>(frameIndex);
}

unsigned long ConnectionPipeline::animDurationMs(const Animation& anim) const {
  if (anim.fps == 0 || anim.numFrames == 0) {
    return 0;
  }
  return static_cast<unsigned long>(anim.numFrames) * (1000UL / anim.fps);
}

bool ConnectionPipeline::update(CRGB* visorLeds, uint16_t visorCount,
                                CRGB* leftEarLeds, CRGB* rightEarLeds, uint16_t earCount) {
  unsigned long now = millis();
  if (!active) {
    startTime = now;
    active = true;
  }

  unsigned long elapsed = now - startTime;
  if (solidMode) {
    uint8_t level = 255;
    if (durationMs > 0 && elapsed < durationMs) {
      level = static_cast<uint8_t>((elapsed * 255UL) / durationMs);
    }

    fill_solid(visorLeds, visorCount, color);
    nscale8_video(visorLeds, visorCount, level);
    fill_solid(leftEarLeds, earCount, color);
    nscale8_video(leftEarLeds, earCount, level);
    fill_solid(rightEarLeds, earCount, color);
    nscale8_video(rightEarLeds, earCount, level);

    if (durationMs == 0 || elapsed >= durationMs) {
      active = false;
      return true;
    }

    return false;
  }

  if (segmentMode) {
    if (!visorLayout || !mouthAnim || !noseAnim || !rightEyeAnim || !leftEyeAnim || !leftEarAnim || !rightEarAnim) {
      solidMode = true;
      return false;
    }

    uint8_t mouthFrame = frameForElapsed(*mouthAnim, elapsed);
    uint8_t noseFrame = frameForElapsed(*noseAnim, elapsed);
    uint8_t rightEyeFrame = frameForElapsed(*rightEyeAnim, elapsed);
    uint8_t leftEyeFrame = frameForElapsed(*leftEyeAnim, elapsed);
    uint8_t leftFrame = frameForElapsed(*leftEarAnim, elapsed);
    uint8_t rightFrame = frameForElapsed(*rightEarAnim, elapsed);

    applyFrame(visorLeds, visorLayout->mouthStart, *mouthAnim, mouthFrame);
    applyFrame(visorLeds, visorLayout->noseStart, *noseAnim, noseFrame);
    applyFrame(visorLeds, visorLayout->rightEyeStart, *rightEyeAnim, rightEyeFrame);
    applyFrame(visorLeds, visorLayout->leftEyeStart, *leftEyeAnim, leftEyeFrame);
    applyFrame(leftEarLeds, 0, *leftEarAnim, leftFrame);
    applyFrame(rightEarLeds, 0, *rightEarAnim, rightFrame);

    unsigned long autoDuration = animDurationMs(*mouthAnim);
    unsigned long noseDuration = animDurationMs(*noseAnim);
    unsigned long rightEyeDuration = animDurationMs(*rightEyeAnim);
    unsigned long leftEyeDuration = animDurationMs(*leftEyeAnim);
    unsigned long leftDuration = animDurationMs(*leftEarAnim);
    unsigned long rightDuration = animDurationMs(*rightEarAnim);

    if (noseDuration > autoDuration) {
      autoDuration = noseDuration;
    }
    if (rightEyeDuration > autoDuration) {
      autoDuration = rightEyeDuration;
    }
    if (leftEyeDuration > autoDuration) {
      autoDuration = leftEyeDuration;
    }
    if (leftDuration > autoDuration) {
      autoDuration = leftDuration;
    }
    if (rightDuration > autoDuration) {
      autoDuration = rightDuration;
    }

    unsigned long endDuration = (durationMs > 0) ? durationMs : autoDuration;
    if (endDuration == 0 || elapsed >= endDuration) {
      active = false;
      return true;
    }

    return false;
  }

  if (!visorAnim || !leftEarAnim || !rightEarAnim) {
    solidMode = true;
    return false;
  }

  uint8_t visorFrame = frameForElapsed(*visorAnim, elapsed);
  uint8_t leftFrame = frameForElapsed(*leftEarAnim, elapsed);
  uint8_t rightFrame = frameForElapsed(*rightEarAnim, elapsed);

  applyFrame(visorLeds, 0, *visorAnim, visorFrame);
  applyFrame(leftEarLeds, 0, *leftEarAnim, leftFrame);
  applyFrame(rightEarLeds, 0, *rightEarAnim, rightFrame);

  unsigned long autoDuration = animDurationMs(*visorAnim);
  unsigned long leftDuration = animDurationMs(*leftEarAnim);
  unsigned long rightDuration = animDurationMs(*rightEarAnim);
  if (leftDuration > autoDuration) {
    autoDuration = leftDuration;
  }
  if (rightDuration > autoDuration) {
    autoDuration = rightDuration;
  }

  unsigned long endDuration = (durationMs > 0) ? durationMs : autoDuration;
  if (endDuration == 0 || elapsed >= endDuration) {
    active = false;
    return true;
  }

  return false;
}

void ConnectionPipeline::reset() {
  active = false;
  startTime = 0;
  visorController.reset();
  leftEarController.reset();
  rightEarController.reset();
}

SoundTrigger::SoundTrigger(uint16_t triggerThreshold, uint16_t holdDurationMs)
    : threshold(triggerThreshold), holdMs(holdDurationMs), active(false), lastTriggerTime(0) {}

bool SoundTrigger::update(uint16_t peakToPeak) {
  unsigned long now = millis();
  if (peakToPeak > threshold) {
    active = true;
    lastTriggerTime = now;
  } else if (holdMs == 0) {
    active = false;
  } else if (active && (now - lastTriggerTime >= holdMs)) {
    active = false;
  }

  return active;
}