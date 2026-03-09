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