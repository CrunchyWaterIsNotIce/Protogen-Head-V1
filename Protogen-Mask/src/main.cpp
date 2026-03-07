#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN     25
#define NUM_LEDS    688 
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB

// set brightness to max because FastLED's power management will override it to 3A
#define BRIGHTNESS  255 
#define ONBOARD_LED 2 

CRGB leds[NUM_LEDS];

// variable to smoothly animate the rainbow
uint8_t currentHue = 0; 

void setup() {
  Serial.begin(115200);
  pinMode(ONBOARD_LED, OUTPUT);

  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 3000); 
  FastLED.setBrightness(BRIGHTNESS);

  FastLED.clear(true);

  for(int i = 10; i > 0; i--) {
    Serial.print(i);
    Serial.println("...");
    digitalWrite(ONBOARD_LED, HIGH); 
    delay(500);                      
    digitalWrite(ONBOARD_LED, LOW);  
    delay(500);                      
  }
  
  digitalWrite(ONBOARD_LED, HIGH); // LED ON to indicate system is running
}

void loop() {
  fill_rainbow(leds, NUM_LEDS, currentHue, 7);
  
  FastLED.show();
  
  EVERY_N_MILLISECONDS(20) {
    currentHue++; 
  }
}