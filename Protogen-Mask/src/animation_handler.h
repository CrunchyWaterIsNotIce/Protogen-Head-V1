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

// Visor layout mapping for the current LED matrix.
struct VisorLayout {
  uint16_t mouthStart;
  uint16_t noseStart;
  uint16_t rightEyeStart;
  uint16_t leftEyeStart;
  uint16_t totalPixels;
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

// Pipeline for visor segments (mouth, nose, eyes).
class VisorPipeline {
private:
  AnimationController mouthController;
  AnimationController noseController;
  AnimationController rightEyeController;
  AnimationController leftEyeController;
  const Animation* mouthAnim;
  const Animation* noseAnim;
  const Animation* rightEyeAnim;
  const Animation* leftEyeAnim;

public:
  VisorPipeline();
  void setAnimations(const Animation& mouth, const Animation& nose,
                     const Animation& rightEye, const Animation& leftEye);
  void update(CRGB* leds, const VisorLayout& layout);
  void reset();
};

// Pipeline for ear strips (left or right).
class EarPipeline {
private:
  AnimationController controller;
  const Animation* anim;
  uint16_t ledCount;
  bool solidMode;
  CRGB solidColor;

public:
  EarPipeline();
  void setAnimation(const Animation& animation, uint16_t numLeds);
  void setSolid(const CRGB& color, uint16_t numLeds);
  void update(CRGB* leds);
  void reset();
};

// Simple sound trigger to drive a separate animation event.
struct SoundTrigger {
  uint16_t threshold;
  uint16_t holdMs;
  bool active;
  unsigned long lastTriggerTime;

  SoundTrigger(uint16_t triggerThreshold, uint16_t holdDurationMs = 0);
  bool update(uint16_t peakToPeak);
};

// Global animation definitions
extern Animation mouthIdle;
extern Animation noseIdle;
extern Animation eyeRightIdle;
extern Animation eyeLeftIdle;

#endif