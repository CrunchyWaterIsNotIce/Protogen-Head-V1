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

// Pipeline for eye blinking; overrides only eye segments.
class BlinkPipeline {
private:
  AnimationController leftController;
  AnimationController rightController;
  const Animation* leftAnim;
  const Animation* rightAnim;
  unsigned long minIntervalMs;
  unsigned long maxIntervalMs;
  unsigned long durationMs;
  unsigned long nextBlinkTime;
  unsigned long blinkStartTime;
  bool active;

  void scheduleNext(unsigned long now);
  void applyFrame(CRGB* leds, uint16_t startIndex, const Animation& anim, uint8_t frameIndex);

public:
  BlinkPipeline();
  void setAnimations(const Animation& left, const Animation& right);
  void setTiming(unsigned long minMs, unsigned long maxMs, unsigned long blinkDurationMs);
  void update(CRGB* leds, const VisorLayout& layout);
  void reset();
};

// Connection pipeline that runs once when the mask connects.
class ConnectionPipeline {
private:
  AnimationController visorController;
  AnimationController leftEarController;
  AnimationController rightEarController;
  const Animation* visorAnim;
  const Animation* mouthAnim;
  const Animation* noseAnim;
  const Animation* rightEyeAnim;
  const Animation* leftEyeAnim;
  const VisorLayout* visorLayout;
  const Animation* leftEarAnim;
  const Animation* rightEarAnim;
  unsigned long startTime;
  unsigned long durationMs;
  CRGB color;
  bool active;
  bool solidMode;
  bool segmentMode;

  void applyFrame(CRGB* leds, uint16_t startIndex, const Animation& anim, uint8_t frameIndex);
  uint8_t frameForElapsed(const Animation& anim, unsigned long elapsed) const;
  unsigned long animDurationMs(const Animation& anim) const;

public:
  ConnectionPipeline();
  void setTiming(unsigned long durationMs);
  void setSolidColor(const CRGB& newColor);
  void setAnimations(const Animation& visor, const Animation& leftEar, const Animation& rightEar);
  void setSegmentAnimations(const Animation& mouth, const Animation& nose,
                            const Animation& rightEye, const Animation& leftEye,
                            const Animation& leftEar, const Animation& rightEar,
                            const VisorLayout& layout);
  bool update(CRGB* visorLeds, uint16_t visorCount,
              CRGB* leftEarLeds, CRGB* rightEarLeds, uint16_t earCount);
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
extern const Animation mouthIdle;
extern const Animation noseIdle;
extern const Animation eyeRightIdle;
extern const Animation eyeLeftIdle;
extern const Animation eyeRightBlink;
extern const Animation eyeLeftBlink;

#endif