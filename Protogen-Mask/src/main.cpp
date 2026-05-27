#include <Arduino.h>
#include <FastLED.h>
#include "animations.h"
#include "animation_handler.h"

// --- PIN DEFINITIONS ---
#define VISOR_PIN 25
#define LEFT_EAR_PIN 18   
#define RIGHT_EAR_PIN 19  
#define MIC_PIN 33

// --- LED COUNTS ---
#define NUM_VISOR_LEDS 432
#define NUM_EAR_LEDS 30    

#define LED_TYPE WS2812B 
#define COLOR_ORDER GRB
#define BRIGHTNESS 10 // Baseline brightness; power limit keeps it safe

CRGB visorLeds[NUM_VISOR_LEDS];
CRGB leftEarLeds[NUM_EAR_LEDS];
CRGB rightEarLeds[NUM_EAR_LEDS];

// --- SOUND SENSITIVITY ---
// Change this number to make the mic more or less sensitive.
// 50 triggers on whispers. 800 requires a loud clap.
const int SOUND_THRESHOLD = 3000; 

VisorPipeline visorPipeline;
EarPipeline leftEarPipeline;
EarPipeline rightEarPipeline;
SoundTrigger soundTrigger(SOUND_THRESHOLD, 150);

void setup() {
    Serial.begin(115200);

    FastLED.addLeds<LED_TYPE, VISOR_PIN, COLOR_ORDER>(visorLeds, NUM_VISOR_LEDS);
    FastLED.addLeds<LED_TYPE, LEFT_EAR_PIN, COLOR_ORDER>(leftEarLeds, NUM_EAR_LEDS);
    FastLED.addLeds<LED_TYPE, RIGHT_EAR_PIN, COLOR_ORDER>(rightEarLeds, NUM_EAR_LEDS);
    
    FastLED.setMaxPowerInVoltsAndMilliamps(5, 3000);
    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear(true);
    FastLED.show();

    visorPipeline.setAnimations(mouthIdle, noseIdle, eyeRightIdle, eyeLeftIdle);
    leftEarPipeline.setSolid(CRGB::Black, NUM_EAR_LEDS);
    rightEarPipeline.setSolid(CRGB::Black, NUM_EAR_LEDS);
}

void loop() {
    // 1. Read the microphone for a tiny fraction of a second (50ms)
    unsigned long startMillis = millis();
    unsigned int signalMax = 0;
    unsigned int signalMin = 4095; 

    while (millis() - startMillis < 50) {
        unsigned int sample = analogRead(MIC_PIN);
        if (sample < 4095) { 
            if (sample > signalMax) {
                signalMax = sample;  
            } else if (sample < signalMin) {
                signalMin = sample;  
            }
        }
    }
    
    // 2. Calculate how loud the sound was
    unsigned int peakToPeak = signalMax - signalMin;
    
    // Print the volume to the computer so you can see the numbers
    Serial.println(peakToPeak);

    // --- 3. THE SIMPLE TRIGGER ---
    bool soundActive = soundTrigger.update(peakToPeak);
    if (soundActive) {
        // It heard a sound! Turn everything PURPLE.
        fill_solid(visorLeds, NUM_VISOR_LEDS, CRGB::Purple);
        fill_solid(leftEarLeds, NUM_EAR_LEDS, CRGB::Purple);
        fill_solid(rightEarLeds, NUM_EAR_LEDS, CRGB::Purple);
    } else {
        visorPipeline.update(visorLeds, visorLayout);
        leftEarPipeline.update(leftEarLeds);
        rightEarPipeline.update(rightEarLeds);
    }

    // Push the colors to the mask
    FastLED.show();
}