
#include <FastLED.h>
#include "animation_handler.h"

// NOSEIDLE Animation
// Frames: 1, Size: 12x4
const CRGB noseIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_MOUTHTALK Animation
// Frames: 1, Size: 32x8
const CRGB normal_mouthTalkFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_RIGHTEYEBLINK Animation
// Frames: 1, Size: 8x8
const CRGB normal_righteyeBlinkFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_LEFTEYEBLINK Animation
// Frames: 1, Size: 8x8
const CRGB normal_lefteyeBlinkFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_MOUTHIDLE Animation
// Frames: 1, Size: 32x8
const CRGB normal_mouthIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_RIGHTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB normal_righteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
};

// NORMAL_LEFTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB normal_lefteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
};

// SAD_MOUTHIDLE Animation
// Frames: 1, Size: 32x8
const CRGB sad_mouthIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// SAD_RIGHTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB sad_righteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// SAD_LEFTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB sad_lefteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
};

// HUH_MOUTHIDLE Animation
// Frames: 1, Size: 32x8
const CRGB huh_mouthIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// HUH_RIGHTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB huh_righteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// HUH_LEFTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB huh_lefteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// MAD_MOUTHIDLE Animation
// Frames: 1, Size: 32x8
const CRGB mad_mouthIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// MAD_RIGHTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB mad_righteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
};

// MAD_LEFTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB mad_lefteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
};

// UWU_MOUTHIDLE Animation
// Frames: 1, Size: 32x8
const CRGB uwu_mouthIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
};

// UWU_RIGHTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB uwu_righteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
};

// UWU_LEFTEYEIDLE Animation
// Frames: 1, Size: 8x8
const CRGB uwu_lefteyeIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

const Animation noseIdle PROGMEM = {noseIdleFrames, 1, 48, 10};
const Animation normal_mouthTalk PROGMEM = {normal_mouthTalkFrames, 1, 256, 10};
const Animation normal_righteyeBlink PROGMEM = {normal_righteyeBlinkFrames, 1, 64, 10};
const Animation normal_lefteyeBlink PROGMEM = {normal_lefteyeBlinkFrames, 1, 64, 10};

const Animation normal_mouthIdle PROGMEM = {normal_mouthIdleFrames, 1, 256, 10};
const Animation normal_righteyeIdle PROGMEM = {normal_righteyeIdleFrames, 1, 64, 10};
const Animation normal_lefteyeIdle PROGMEM = {normal_lefteyeIdleFrames, 1, 64, 10};
const Animation sad_mouthIdle PROGMEM = {sad_mouthIdleFrames, 1, 256, 10};
const Animation sad_righteyeIdle PROGMEM = {sad_righteyeIdleFrames, 1, 64, 10};
const Animation sad_lefteyeIdle PROGMEM = {sad_lefteyeIdleFrames, 1, 64, 10};
const Animation huh_mouthIdle PROGMEM = {huh_mouthIdleFrames, 1, 256, 10};
const Animation huh_righteyeIdle PROGMEM = {huh_righteyeIdleFrames, 1, 64, 10};
const Animation huh_lefteyeIdle PROGMEM = {huh_lefteyeIdleFrames, 1, 64, 10};
const Animation mad_mouthIdle PROGMEM = {mad_mouthIdleFrames, 1, 256, 10};
const Animation mad_righteyeIdle PROGMEM = {mad_righteyeIdleFrames, 1, 64, 10};
const Animation mad_lefteyeIdle PROGMEM = {mad_lefteyeIdleFrames, 1, 64, 10};
const Animation uwu_mouthIdle PROGMEM = {uwu_mouthIdleFrames, 1, 256, 10};
const Animation uwu_righteyeIdle PROGMEM = {uwu_righteyeIdleFrames, 1, 64, 10};
const Animation uwu_lefteyeIdle PROGMEM = {uwu_lefteyeIdleFrames, 1, 64, 10};

extern const VisorLayout visorLayout = {
  0,    // mouthStart
  320,  // noseStart
  368,  // rightEyeStart
  256,  // leftEyeStart
  432   // totalPixels
};