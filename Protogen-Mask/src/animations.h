#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <FastLED.h>
#include "animation_handler.h"

extern const CRGB mouthFrames[];
extern const CRGB noseFrames[];
extern const CRGB eyeRightFrames[];
extern const CRGB eyeLeftFrames[];

extern Animation mouthIdle;
extern Animation noseIdle;
extern Animation eyeRightIdle;
extern Animation eyeLeftIdle;

#endif