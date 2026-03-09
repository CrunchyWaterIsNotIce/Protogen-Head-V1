#ifndef ANIMATION_HANDLER_H
#define ANIMATION_HANDLER_H

#include <FastLED.h>

// Animation structure to hold frame data
struct Animation {
  const CRGB* frames;     // Pointer to frame data
  uint8_t numFrames;      // Number of frames in animation
  uint16_t pixelsPerFrame; // Pixels in each frame
  uint16_t fps;           // Frames per second
};

// Animation controller class
class AnimationController {
private:
  uint8_t currentFrame;
  unsigned long lastFrameTime;
  uint16_t frameDelay;
  
public:
  AnimationController();
  void setAnimation(const Animation& anim);
  void update(CRGB* leds, uint16_t startIndex, const Animation& anim);
  void reset();
};

// Global animation definitions
extern Animation mouthIdle;
extern Animation noseIdle;
extern Animation eyeRightIdle;
extern Animation eyeLeftIdle;

#endif