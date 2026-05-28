#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <FastLED.h>
#include "animation_handler.h"

extern const CRGB mouthFrames[];
extern const CRGB noseFrames[];
extern const CRGB eyeRightFrames[];
extern const CRGB eyeLeftFrames[];
extern const CRGB eyeRightBlinkFrames[];
extern const CRGB eyeLeftBlinkFrames[];
extern const CRGB rightEarFrames[];
extern const CRGB leftEarFrames[];

extern const VisorLayout visorLayout;

extern Animation mouthIdle;
extern Animation noseIdle;
extern Animation eyeRightIdle;
extern Animation eyeLeftIdle;
extern Animation rightEarIdle;
extern Animation leftEarIdle;

extern Animation eyeRight_blinkAction;
extern Animation eyeLeft_blinkAction;
extern Animation mouth_talkAction;

extern Animation eyeLeft_connectAction;
extern Animation eyeRight_connectAction;
extern Animation mouth_connectAction;
extern Animation nose_connectAction;
extern Animation rightEar_connectAction;
extern Animation leftEar_connectAction;

#endif