#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN     25
#define NUM_LEDS    432
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
#define BRIGHTNESS  240 
#define ONBOARD_LED 2 

CRGB leds[NUM_LEDS];

// Mouth (right to left; top to bottom), Nose (left to right; top to bottom), Right Eye(right to left; bottom to top), Left Eye(right to left; top to bottom)

const CRGB mouthSprite[] = {
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),  
  CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(63, 63, 116),
  CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0),  
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0),
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255),
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), 
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),  
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116),
  CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),  
};

const CRGB noseSprite[] = {
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(48, 96, 130), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(203, 219, 252), CRGB(91, 110, 225),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(91, 110, 225), CRGB(203, 219, 252), CRGB(99, 155, 255), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(48, 96, 130),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0),
};

const CRGB eyeRightSprite[] = {
  CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(91, 110, 225),
  CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(203, 219, 252), CRGB(48, 96, 130), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(91, 110, 225),
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(203, 219, 252), CRGB(203, 219, 252), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0),
  CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(203, 219, 252), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0),      
  CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0),       
  CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255),
};

const CRGB eyeLeftSprite[] = {
  CRGB(99, 155, 255), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255),       
  CRGB(0, 0, 0), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(203, 219, 252), CRGB(91, 110, 225), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(63, 63, 116),      
  CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(203, 219, 252), CRGB(203, 219, 252), CRGB(99, 155, 255), CRGB(99, 155, 255),
  CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(203, 219, 252), CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(99, 155, 255), CRGB(91, 110, 225),
  CRGB(91, 110, 225), CRGB(91, 110, 225), CRGB(99, 155, 255), CRGB(91, 110, 225), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(48, 96, 130), CRGB(0, 0, 0),
  CRGB(0, 0, 0), CRGB(63, 63, 116), CRGB(0, 0, 0), CRGB(0, 0, 0), CRGB(48, 96, 130), CRGB(63, 63, 116), CRGB(63, 63, 116), CRGB(0, 0, 0),
};

void setup() {
  Serial.begin(115200);
  pinMode(ONBOARD_LED, OUTPUT);

  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 3000); 
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear(true);

  digitalWrite(ONBOARD_LED, HIGH);

  // Mouth (starts at LED 0)
  int mouthSize = sizeof(mouthSprite) / sizeof(mouthSprite[0]);
  for (int i = 0; i < mouthSize; i++) {
    leds[i] = mouthSprite[i];
  }
  
  // Nose (starts after mouth)
  int noseSize = sizeof(noseSprite) / sizeof(noseSprite[0]);
  for (int i = 0; i < noseSize; i++) {
    leds[mouthSize + i] = noseSprite[i];
  }
  
  // Right Eye (starts after nose)
  int eyeRightSize = sizeof(eyeRightSprite) / sizeof(eyeRightSprite[0]);
  for (int i = 0; i < eyeRightSize; i++) {
    leds[mouthSize + noseSize + i] = eyeRightSprite[i];
  }
  
  // Left Eye (starts after right eye)
  int eyeLeftSize = sizeof(eyeLeftSprite) / sizeof(eyeLeftSprite[0]);
  for (int i = 0; i < eyeLeftSize; i++) {
    leds[mouthSize + noseSize + eyeRightSize + i] = eyeLeftSprite[i];
  }

  FastLED.show();
  
  Serial.print("Mouth: 0-");
  Serial.println(mouthSize - 1);
  Serial.print("Nose: ");
  Serial.print(mouthSize);
  Serial.print("-");
  Serial.println(mouthSize + noseSize - 1);
  Serial.print("Right Eye: ");
  Serial.print(mouthSize + noseSize);
  Serial.print("-");
  Serial.println(mouthSize + noseSize + eyeRightSize - 1);
  Serial.print("Left Eye: ");
  Serial.print(mouthSize + noseSize + eyeRightSize);
  Serial.print("-");
  Serial.println(mouthSize + noseSize + eyeRightSize + eyeLeftSize - 1);
}

void loop() {

}