#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN     25
#define NUM_LEDS    256   
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB

#define BRIGHTNESS  20 

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
  Serial.println("Booting up...");

  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
  delay(500);
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(40);
    leds[i] = CRGB::Black; // turns the led after off
  }
}