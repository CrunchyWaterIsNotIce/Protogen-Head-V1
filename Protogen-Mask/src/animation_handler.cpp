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