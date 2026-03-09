#include <Arduino.h>
#include <FastLED.h>
#include "animation_handler.h"
#include "animations.h"

#define LED_PIN     25
#define NUM_LEDS    432
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
#define BRIGHTNESS  240 
#define ONBOARD_LED 2 

CRGB leds[NUM_LEDS];

// LED index offsets for each body part
#define MOUTH_START 0
#define NOSE_START  256
#define RIGHT_EYE_START 304
#define LEFT_EYE_START  368

// Animation controllers for each body part
AnimationController mouthController;
AnimationController noseController;
AnimationController eyeRightController;
AnimationController eyeLeftController;

void setup() {
  Serial.begin(115200);
  pinMode(ONBOARD_LED, OUTPUT);
  
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 3000); 
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear(true);
  
  digitalWrite(ONBOARD_LED, HIGH);
  
  // Initialize animations
  mouthController.setAnimation(mouthIdle);
  noseController.setAnimation(noseIdle);
  eyeRightController.setAnimation(eyeRightIdle);
  eyeLeftController.setAnimation(eyeLeftIdle);
  
  Serial.println("Protogen Face Initialized!");
}

void loop() {
  // Update all animations
  mouthController.update(leds, MOUTH_START, mouthIdle);
  noseController.update(leds, NOSE_START, noseIdle);
  eyeRightController.update(leds, RIGHT_EYE_START, eyeRightIdle);
  eyeLeftController.update(leds, LEFT_EYE_START, eyeLeftIdle);
  
  FastLED.show();
}