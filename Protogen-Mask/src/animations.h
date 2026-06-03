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

extern const Animation mouthIdle;
extern const Animation noseIdle;
extern const Animation eyeRightIdle;
extern const Animation eyeLeftIdle;
extern const Animation rightEarIdle;
extern const Animation leftEarIdle;

extern const Animation eyeRight_blinkAction;
extern const Animation eyeLeft_blinkAction;
extern const Animation mouth_talkAction;

extern const Animation eyeLeft_connectAction;
extern const Animation eyeRight_connectAction;
extern const Animation mouth_connectAction;
extern const Animation nose_connectAction;
extern const Animation rightEar_connectAction;
extern const Animation leftEar_connectAction;

extern const Animation normal_mouthIdle;
extern const Animation normal_righteyeIdle;
extern const Animation normal_lefteyeIdle;
extern const Animation sad_mouthIdle;
extern const Animation sad_righteyeIdle;
extern const Animation sad_lefteyeIdle;
extern const Animation huh_mouthIdle;
extern const Animation huh_righteyeIdle;
extern const Animation huh_lefteyeIdle;
extern const Animation mad_mouthIdle;
extern const Animation mad_righteyeIdle;
extern const Animation mad_lefteyeIdle;
extern const Animation uwu_mouthIdle;
extern const Animation uwu_righteyeIdle;
extern const Animation uwu_lefteyeIdle;
extern const Animation normal_mouthTalk;
extern const Animation normal_righteyeBlink;
extern const Animation normal_lefteyeBlink;
extern const Animation normal_noseIdle;
extern const Animation normal_rightearIdle;
extern const Animation normal_leftearIdle;
extern const Animation link_noseConnect;
extern const Animation link_mouthConnect;
extern const Animation link_righteyeConnect;
extern const Animation link_lefteyeConnect;
extern const Animation link_rightearConnect;
extern const Animation link_leftearConnect;

#endif