#include <Arduino.h>
#include <FastLED.h>
#include "animations.h"
#include "animation_handler.h"
#include "wifi_portal.h"

// --- PIN DEFINITIONS ---
#define VISOR_PIN 25
#define LEFT_EAR_PIN 18   
#define RIGHT_EAR_PIN 19  
#define MIC_PIN 33
#define SENSE_PIN 26

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
const unsigned long BLINK_MIN_MS = 5000;
const unsigned long BLINK_MAX_MS = 8000;
const unsigned long BLINK_DURATION_MS = 150;
const unsigned long CONNECT_ANIM_MS = 1200  ;
const unsigned long SENSE_DEBOUNCE_MS = 50;

VisorPipeline visorPipeline;
EarPipeline leftEarPipeline;
EarPipeline rightEarPipeline;
BlinkPipeline blinkPipeline;
ConnectionPipeline connectionPipeline;
SoundTrigger soundTrigger(SOUND_THRESHOLD, 1000);

namespace {
struct EmotionSet {
    const Animation* mouthIdle;
    const Animation* rightEyeIdle;
    const Animation* leftEyeIdle;
};

EmotionSet getEmotionSet(uint8_t emotionId) {
    switch (emotionId) {
        case 1:
            return {&mad_mouthIdle, &mad_righteyeIdle, &mad_lefteyeIdle};
        case 2:
            return {&sad_mouthIdle, &sad_righteyeIdle, &sad_lefteyeIdle};
        case 3:
            return {&huh_mouthIdle, &huh_righteyeIdle, &huh_lefteyeIdle};
        case 4:
            return {&uwu_mouthIdle, &uwu_righteyeIdle, &uwu_lefteyeIdle};
        case 0:
        default:
            return {&normal_mouthIdle, &normal_righteyeIdle, &normal_lefteyeIdle};
    }
}
}

void setup() {
    Serial.begin(115200);
    randomSeed(analogRead(MIC_PIN));
    pinMode(SENSE_PIN, INPUT_PULLUP);

    wifiPortalSetup();

    FastLED.addLeds<LED_TYPE, VISOR_PIN, COLOR_ORDER>(visorLeds, NUM_VISOR_LEDS);
    FastLED.addLeds<LED_TYPE, LEFT_EAR_PIN, COLOR_ORDER>(leftEarLeds, NUM_EAR_LEDS);
    FastLED.addLeds<LED_TYPE, RIGHT_EAR_PIN, COLOR_ORDER>(rightEarLeds, NUM_EAR_LEDS);
    
    FastLED.setMaxPowerInVoltsAndMilliamps(5, 3000);
    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear(true);
    FastLED.show();

    EmotionSet initialEmotion = getEmotionSet(wifiPortalGetEmotion());
    visorPipeline.setAnimations(*initialEmotion.mouthIdle, noseIdle, *initialEmotion.rightEyeIdle, *initialEmotion.leftEyeIdle);
    leftEarPipeline.setAnimation(leftEarIdle, NUM_EAR_LEDS);
    rightEarPipeline.setAnimation(rightEarIdle, NUM_EAR_LEDS);
    blinkPipeline.setAnimations(eyeLeft_blinkAction, eyeRight_blinkAction);
    blinkPipeline.setTiming(BLINK_MIN_MS, BLINK_MAX_MS, BLINK_DURATION_MS);
    connectionPipeline.setTiming(CONNECT_ANIM_MS);
    connectionPipeline.setSegmentAnimations(
        mouth_connectAction, nose_connectAction, eyeRight_connectAction, eyeLeft_connectAction,
        leftEar_connectAction, rightEar_connectAction, visorLayout);
}

void loop() {
    wifiPortalUpdate();
    unsigned long now = millis();
    static bool lastConnected = false;
    static bool connectSequenceDone = false;
    static bool postConnectInitDone = false;
    static bool talkMode = false;
    static bool lastSenseRaw = false;
    static bool debouncedConnected = false;
    static unsigned long senseChangeMs = 0;
    static uint8_t lastEmotion = 0;
    static EmotionSet activeEmotion = getEmotionSet(0);

    bool senseRaw = (digitalRead(SENSE_PIN) == LOW);
    if (senseRaw != lastSenseRaw) {
        lastSenseRaw = senseRaw;
        senseChangeMs = now;
    } else if (now - senseChangeMs >= SENSE_DEBOUNCE_MS) {
        debouncedConnected = senseRaw;
    }

    bool connected = debouncedConnected;
    if (!connected) {
        if (lastConnected) {
            Serial.println("Mask disconnected");
        }
        lastConnected = false;
        connectSequenceDone = false;
        postConnectInitDone = false;
        talkMode = false;
        fill_solid(visorLeds, NUM_VISOR_LEDS, CRGB::Black);
        visorPipeline.reset();
        blinkPipeline.reset();
        leftEarPipeline.update(leftEarLeds);
        rightEarPipeline.update(rightEarLeds);
        FastLED.show();
        return;
    }

    if (!lastConnected) {
        connectSequenceDone = false;
        postConnectInitDone = false;
        connectionPipeline.reset();
        lastConnected = true;
    }

    if (!connectSequenceDone) {
        connectSequenceDone = connectionPipeline.update(
            visorLeds, NUM_VISOR_LEDS, leftEarLeds, rightEarLeds, NUM_EAR_LEDS);
        FastLED.show();
        return;
    }

    uint8_t portalEmotion = wifiPortalGetEmotion();
    if (portalEmotion != lastEmotion) {
        activeEmotion = getEmotionSet(portalEmotion);
        lastEmotion = portalEmotion;
        if (talkMode) {
            visorPipeline.setAnimations(mouth_talkAction, noseIdle, *activeEmotion.rightEyeIdle, *activeEmotion.leftEyeIdle);
        } else {
            visorPipeline.setAnimations(*activeEmotion.mouthIdle, noseIdle, *activeEmotion.rightEyeIdle, *activeEmotion.leftEyeIdle);
        }
        visorPipeline.reset();
    }

    if (!postConnectInitDone) {
        activeEmotion = getEmotionSet(portalEmotion);
        visorPipeline.setAnimations(*activeEmotion.mouthIdle, noseIdle, *activeEmotion.rightEyeIdle, *activeEmotion.leftEyeIdle);
        visorPipeline.reset();
        blinkPipeline.reset();
        talkMode = false;
        postConnectInitDone = true;
        Serial.println("Mask connected, switching to idle");
    }
    // 1. Read the microphone for a tiny fraction of a second (50ms)
    unsigned long startMillis = now;
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
    // Serial.println(peakToPeak);

    // --- 3. THE SIMPLE TRIGGER ---
    bool soundActive = soundTrigger.update(peakToPeak);
    if (soundActive && !talkMode) {
        visorPipeline.setAnimations(mouth_talkAction, noseIdle, *activeEmotion.rightEyeIdle, *activeEmotion.leftEyeIdle);
        talkMode = true;
    } else if (!soundActive && talkMode) {
        visorPipeline.setAnimations(*activeEmotion.mouthIdle, noseIdle, *activeEmotion.rightEyeIdle, *activeEmotion.leftEyeIdle);
        talkMode = false;
    }

    visorPipeline.update(visorLeds, visorLayout);
    leftEarPipeline.update(leftEarLeds);
    rightEarPipeline.update(rightEarLeds);
    blinkPipeline.update(visorLeds, visorLayout);

    // Push the colors to the mask
    FastLED.show();
}