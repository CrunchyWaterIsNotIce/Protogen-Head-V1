#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <ESPmDNS.h> // REQUIRED FOR "visor.local"
#include "wifi_portal.h"

namespace {
// --- SECURITY & NETWORK SETTINGS ---
const char* kApSsid = "Protogen_Visor";
const char* kApPassword = "protogen-visor"; // Must be 8+ characters
const byte kDnsPort = 53;
const IPAddress kApIp(192, 168, 4, 1);
const IPAddress kApNetmask(255, 255, 255, 0);

DNSServer dnsServer;
WebServer webServer(80);

// --- THE WEB APP UI ---
void handleRoot() {
  const char html[] PROGMEM =
      "<!doctype html>"
      "<html><head>"
      // 1. Mobile & App Meta Tags
      "<meta name='viewport' content='width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no'>"
      "<meta name='apple-mobile-web-app-capable' content='yes'>"
      "<meta name='apple-mobile-web-app-status-bar-style' content='black-translucent'>"
      "<meta name='apple-mobile-web-app-title' content='Protogen'>"
      "<title>Visor Control</title>"
      // 2. CSS Styling (2x2 Grid, No Text Highlighting)
      "<style>"
      "html,body{margin:0;padding:0;height:100%;font-family:sans-serif;background:#000;user-select:none;-webkit-user-select:none;}"
      ".grid{display:grid;grid-template-columns:1fr 1fr;grid-template-rows:1fr 1fr;height:100%;}"
      ".btn{display:flex;align-items:center;justify-content:center;font-size:2.5rem;color:#fff;font-weight:bold;cursor:pointer;}"
      ".btn:active{opacity:0.6;}" // Gives a nice visual "click" effect
      ".normal{background:#3498db;}" // Blue
      ".mad{background:#e74c3c;}"    // Red
      ".sad{background:#9b59b6;}"    // Purple
      ".happy{background:#2ecc71;}"  // Green
      "</style>"
      // 3. JavaScript (Sends the command invisibly without reloading the page)
      "<script>"
      "function set(e) { fetch('/' + e); }"
      "</script>"
      "</head><body>"
      // 4. The Massive Paw-Proof Buttons
      "<div class='grid'>"
      "<div class='btn normal' onclick=\"set('normal')\">NORMAL</div>"
      "<div class='btn mad' onclick=\"set('mad')\">MAD</div>"
      "<div class='btn sad' onclick=\"set('sad')\">SAD</div>"
      "<div class='btn happy' onclick=\"set('happy')\">HAPPY</div>"
      "</div>"
      "</body></html>";

  webServer.send(200, "text/html", html);
}

// --- EMOTION ENDPOINTS ---
void handleNormal() {
  Serial.println("Web Command: NORMAL");
  // currentEmotion = EMOTION_NORMAL; <-- Link this to your state machine!
  webServer.send(200, "text/plain", "OK");
}

void handleMad() {
  Serial.println("Web Command: MAD");
  // currentEmotion = EMOTION_MAD; 
  webServer.send(200, "text/plain", "OK");
}

void handleSad() {
  Serial.println("Web Command: SAD");
  // currentEmotion = EMOTION_SAD; 
  webServer.send(200, "text/plain", "OK");
}

void handleHappy() {
  Serial.println("Web Command: HAPPY");
  // currentEmotion = EMOTION_HAPPY; 
  webServer.send(200, "text/plain", "OK");
}

void handleNotFound() {
  webServer.sendHeader("Location", "/");
  webServer.send(302, "text/plain", "");
}
} // End namespace

// --- SETUP ROUTINE ---
void wifiPortalSetup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(kApIp, kApIp, kApNetmask);
  
  // SECURE AP START: (SSID, Password, Channel 1, Not Hidden, Max 1 Connection)
  WiFi.softAP(kApSsid, kApPassword, 1, 0, 1);

  // START mDNS (Allows user to type http://visor.local)
  if (!MDNS.begin("visor")) {
      Serial.println("Error setting up mDNS");
  } else {
      Serial.println("mDNS started: http://visor.local");
  }

  dnsServer.start(kDnsPort, "*", kApIp);

  // Route URL paths to their specifPic C++ functions
  webServer.on("/", handleRoot);
  webServer.on("/normal", handleNormal);
  webServer.on("/mad", handleMad);
  webServer.on("/sad", handleSad);
  webServer.on("/happy", handleHappy);
  webServer.onNotFound(handleNotFound);
  webServer.begin();

  Serial.print("AP ready: ");
  Serial.println(WiFi.softAPIP());
}

// --- UPDATE ROUTINE ---
void wifiPortalUpdate() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}