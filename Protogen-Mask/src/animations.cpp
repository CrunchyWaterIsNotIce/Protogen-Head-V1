
#include <FastLED.h>
#include "animation_handler.h"


// ### CONNECT ANIMATION DEFINITIONS ###

// LINK_NOSECONNECT Animation
// Frames: 9, Size: 12x4
const CRGB link_noseConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 2
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 3
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 6
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 7
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// LINK_MOUTHCONNECT Animation
// Frames: 9, Size: 32x8
const CRGB link_mouthConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 2
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 3
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 6
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 7
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// LINK_RIGHTEYECONNECT Animation
// Frames: 9, Size: 8x8
const CRGB link_righteyeConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 2
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 3
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 6
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 7
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// LINK_LEFTEYECONNECT Animation
// Frames: 9, Size: 8x8
const CRGB link_lefteyeConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  // Frame 2
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 3
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 6
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  // Frame 7
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// LINK_RIGHTEARCONNECT Animation
// Frames: 9, Size: 1x30
const CRGB link_rightearConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 2
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 3
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 6
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 7
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 8
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
};

// LINK_LEFTEARCONNECT Animation
// Frames: 9, Size: 1x30
const CRGB link_leftearConnectFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), 
  // Frame 1
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 2
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 3
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 4
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 6
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 7
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
  // Frame 8
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), 
};

// ### PRIORITY ANIMATIONS DEFINITION ###

// NORMAL_NOSEIDLE Animation
// Frames: 1, Size: 12x4
const CRGB normal_noseIdleFrames[] PROGMEM = {
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

// NORMAL_RIGHTEARIDLE Animation
// Frames: 9, Size: 1x30
const CRGB normal_rightearIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 1
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 2
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 3
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 4
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 6
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  // Frame 7
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// NORMAL_LEFTEARIDLE Animation
// Frames: 9, Size: 1x30
const CRGB normal_leftearIdleFrames[] PROGMEM = {
  // Frame 0
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 1
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 2
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 3
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 4
  CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), 
  // Frame 5
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 6
  CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), 
  // Frame 7
  CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), 
  // Frame 8
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(97, 211, 227), CRGB(0, 0, 0), CRGB(0, 0, 0), 
};

// ### ALL EMOTE ANIIMATION DEFINITIONS ###

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

extern const Animation link_noseConnect PROGMEM = {link_noseConnectFrames, 9, 48, 10};
extern const Animation link_mouthConnect PROGMEM = {link_mouthConnectFrames, 9, 256, 10};
extern const Animation link_righteyeConnect PROGMEM = {link_righteyeConnectFrames, 9, 64, 10};
extern const Animation link_lefteyeConnect PROGMEM = {link_lefteyeConnectFrames, 9, 64, 10};
extern const Animation link_rightearConnect PROGMEM = {link_rightearConnectFrames, 9, 30, 10};
extern const Animation link_leftearConnect PROGMEM = {link_leftearConnectFrames, 9, 30, 10};

extern const Animation normal_noseIdle PROGMEM = {normal_noseIdleFrames, 1, 48, 10};
extern const Animation normal_mouthTalk PROGMEM = {normal_mouthTalkFrames, 1, 256, 10};
extern const Animation normal_righteyeBlink PROGMEM = {normal_righteyeBlinkFrames, 1, 64, 10};
extern const Animation normal_lefteyeBlink PROGMEM = {normal_lefteyeBlinkFrames, 1, 64, 10};
extern const Animation normal_rightearIdle PROGMEM = {normal_rightearIdleFrames, 9, 30, 10};
extern const Animation normal_leftearIdle PROGMEM = {normal_leftearIdleFrames, 9, 30, 10};

extern const Animation normal_mouthIdle PROGMEM = {normal_mouthIdleFrames, 1, 256, 10};
extern const Animation normal_righteyeIdle PROGMEM = {normal_righteyeIdleFrames, 1, 64, 10};
extern const Animation normal_lefteyeIdle PROGMEM = {normal_lefteyeIdleFrames, 1, 64, 10};
extern const Animation sad_mouthIdle PROGMEM = {sad_mouthIdleFrames, 1, 256, 10};
extern const Animation sad_righteyeIdle PROGMEM = {sad_righteyeIdleFrames, 1, 64, 10};
extern const Animation sad_lefteyeIdle PROGMEM = {sad_lefteyeIdleFrames, 1, 64, 10};
extern const Animation huh_mouthIdle PROGMEM = {huh_mouthIdleFrames, 1, 256, 10};
extern const Animation huh_righteyeIdle PROGMEM = {huh_righteyeIdleFrames, 1, 64, 10};
extern const Animation huh_lefteyeIdle PROGMEM = {huh_lefteyeIdleFrames, 1, 64, 10};
extern const Animation mad_mouthIdle PROGMEM = {mad_mouthIdleFrames, 1, 256, 10};
extern const Animation mad_righteyeIdle PROGMEM = {mad_righteyeIdleFrames, 1, 64, 10};
extern const Animation mad_lefteyeIdle PROGMEM = {mad_lefteyeIdleFrames, 1, 64, 10};
extern const Animation uwu_mouthIdle PROGMEM = {uwu_mouthIdleFrames, 1, 256, 10};
extern const Animation uwu_righteyeIdle PROGMEM = {uwu_righteyeIdleFrames, 1, 64, 10};
extern const Animation uwu_lefteyeIdle PROGMEM = {uwu_lefteyeIdleFrames, 1, 64, 10};

extern const Animation mouthIdle = normal_mouthIdle;
extern const Animation noseIdle = normal_noseIdle;
extern const Animation eyeRightIdle = normal_righteyeIdle;
extern const Animation eyeLeftIdle = normal_lefteyeIdle;
extern const Animation rightEarIdle = normal_rightearIdle;
extern const Animation leftEarIdle = normal_leftearIdle;

extern const Animation eyeRight_blinkAction = normal_righteyeBlink;
extern const Animation eyeLeft_blinkAction = normal_lefteyeBlink;
extern const Animation mouth_talkAction = normal_mouthTalk;

extern const Animation eyeLeft_connectAction = link_lefteyeConnect;
extern const Animation eyeRight_connectAction = link_righteyeConnect;
extern const Animation mouth_connectAction = link_mouthConnect;
extern const Animation nose_connectAction = link_noseConnect;
extern const Animation rightEar_connectAction = link_rightearConnect;
extern const Animation leftEar_connectAction = link_leftearConnect;

extern const VisorLayout visorLayout = {
  0,    // mouthStart
  320,  // noseStart
  368,  // rightEyeStart
  256,  // leftEyeStart
  432   // totalPixels
};