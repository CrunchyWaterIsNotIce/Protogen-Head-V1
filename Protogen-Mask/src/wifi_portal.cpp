#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include "esp_wifi.h" 
#include "wifi_portal.h"
#include "svg_assets.h" // <-- NEW: All your SVGs are cleanly imported here!

// Link to the emotion variable in your main .ino file
int currentEmotion = 0;

namespace {
// --- SECURITY & NETWORK SETTINGS ---
const char* kApSsid = "Protogen_Visor";
const char* kApPassword = "protogen-visor"; // Must be 8+ characters
const byte kDnsPort = 53;
const IPAddress kApIp(192, 168, 4, 1);
const IPAddress kApNetmask(255, 255, 255, 0);

DNSServer dnsServer;
WebServer webServer(80);

// =================================================================================
// 1. THE WEB APP UI (HTML & CSS)
// =================================================================================

void handleRoot() {
  static const char html[] PROGMEM = R"=====(
<!doctype html>
<html><head>
<meta charset="UTF-8">
<meta name='viewport' content='width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no'>
<meta name='apple-mobile-web-app-capable' content='yes'>
<meta name='apple-mobile-web-app-status-bar-style' content='black-translucent'>
<meta name='apple-mobile-web-app-title' content='Protogen'>
<title>Visor Control</title>
<style>
/* --- THE IOS HEIGHT FIX --- */
html, body {
    height: 100%;
    height: -webkit-fill-available; /* Stops iOS from pushing the footer off screen! */
    margin: 0;
    overflow: hidden;
}

body { 
    background: linear-gradient(180deg, #292733 0%, #111 100%); 
    color: #555; 
    display: flex; 
    flex-direction: column; 
    font-family: monospace; 
    user-select: none; 
    -webkit-user-select: none; 
}

/* --- HEADER ALIGNMENT --- */
.header { 
    flex-shrink: 0; 
    display: flex; 
    justify-content: space-between; 
    padding: 25px 25px 10px 25px; 
    font-size: 1.05rem; 
    color: #666; 
    font-weight: bold; 
    line-height: 1.2; 
}

.header-left, .header-right {
    display: flex;
    flex-direction: column;
    justify-content: center;
    gap: 8px; 
}

.header-right {
    align-items: flex-end;
}

/* Locks the text and icons to the exact middle axis */
.header-row {
    display: flex;
    align-items: center;
    height: 1.2rem;
}

.signal-wrapper { gap: 6px; }

/* Centers the shrinking signal icon dynamically */
.icon-container {
    width: 22px; 
    height: 100%;
    display: flex;
    justify-content: center; 
    align-items: center;   
}

#signal-icon { 
    width: auto;
    cursor: pointer; 
    transition: transform 0.1s, height 0.2s ease; 
    transform-origin: center center; 
}

#signal-icon:active { transform: scale(0.85); }

/* --- CAROUSEL LAYOUT --- */
/* Fills available vertical space without pushing footer off screen */
.carousel-wrapper {
    flex-grow: 1;
    position: relative;
    width: 100%;
    margin: auto;
    display: flex;
    align-items: center;
    justify-content: center;
}

.nav-arrow {
    position: absolute; 
    top: 50%; 
    transform: translateY(-50%); 
    width: 32px; 
    height: auto;
    cursor: pointer;
    z-index: 20;
    opacity: 0.5;
    transition: transform 0.1s, opacity 0.2s;
}

.nav-arrow:active { 
    transform: translateY(-50%) scale(0.85); 
    opacity: 1; 
}

#prev-arrow { left: 10px; }
#next-arrow { right: 10px; }

/* 50px padding creates a safe gutter for the arrows, 50vh stops it from crushing the footer! */
.container { 
    position: relative; 
    display: grid; 
    grid-template-columns: 1fr 1fr; 
    gap: 12px; 
    padding: 0 50px; 
    width: 100%; 
    max-width: min(500px, 50vh); 
    box-sizing: border-box; 
}

.btn { 
    width: 100%; 
    height: auto; 
    display: block;
    cursor: pointer; 
    opacity: 0.4; 
    transition: opacity 0.3s, transform 0.1s, filter 0.3s; 
    filter: drop-shadow(0 4px 6px rgba(0,0,0,0.5)); 
}

.btn.selected {
    opacity: 1;
    filter: drop-shadow(0 0 15px rgba(255, 255, 255, 0.3));
}

.btn:active { 
    transform: scale(0.96); 
    filter: brightness(0.8); 
}

/* --- CENTER BUTTON --- */
/* Dialed down to 45% to create a clean gap that accommodates all screen sizes */
.center-btn { 
    position: absolute; 
    top: 50%; 
    left: 50%; 
    transform: translate(-50%, -50%); 
    width: 42%; 
    height: auto;
    z-index: 10; 
}

.center-btn:active { 
    transform: translate(-50%, -50%) scale(0.96); 
}

.footer { 
    flex-shrink: 0;
    text-align: center; 
    padding: 10px 15px 25px 15px; 
    font-size: 0.75rem; 
    color: #555; 
    margin-top: auto; 
}
</style>
<script>
let currentEmote = 'normal';
let currentPage = 1;

// --- PAGE DATA ---
const page1 = {
    topLeft: { id: 'sad', file: '/sad.svg', name: 'SAD' },
    topRight: { id: 'mad', file: '/mad.svg', name: 'MAD' },
    bottomLeft: { id: 'huh', file: '/huh.svg', name: 'HUH' },
    bottomRight: { id: 'uwu', file: '/uwu.svg', name: 'UWU' },
    center: { id: 'normal', file: '/normal.svg', name: 'NORMAL' }
};

const page2 = {
    topLeft: { id: 'em2', file: '/custom-emote-2.svg', name: 'CUSTOM 2' },
    topRight: { id: 'em3', file: '/custom-emote-3.svg', name: 'CUSTOM 3' },
    bottomLeft: { id: 'em4', file: '/custom-emote-4.svg', name: 'CUSTOM 4' },
    bottomRight: { id: 'em5', file: '/custom-emote-5.svg', name: 'CUSTOM 5' },
    center: { id: 'em1', file: '/custom-emote-1.svg', name: 'CUSTOM 1' }
};

function set(buttonPosition) { 
    const activePage = (currentPage === 1) ? page1 : page2;
    const emoteData = activePage[buttonPosition];
    
    // Ping ESP32
    fetch('/set?emote=' + emoteData.id);
    
    const allBtns = document.querySelectorAll('.btn');
    allBtns.forEach(btn => btn.classList.remove('selected'));
    document.getElementById('btn-' + buttonPosition).classList.add('selected');
    
    currentEmote = emoteData.id;
    document.getElementById('emotion-text').innerText = emoteData.name;
    document.getElementById('emotion-text').style.color = "#FFF";
}

function togglePage() {
    currentPage = (currentPage === 1) ? 2 : 1;
    const activePage = (currentPage === 1) ? page1 : page2;
    
    document.getElementById('btn-topLeft').src = activePage.topLeft.file;
    document.getElementById('btn-topRight').src = activePage.topRight.file;
    document.getElementById('btn-bottomLeft').src = activePage.bottomLeft.file;
    document.getElementById('btn-bottomRight').src = activePage.bottomRight.file;
    document.getElementById('btn-center').src = activePage.center.file;
    
    const allBtns = document.querySelectorAll('.btn');
    allBtns.forEach(btn => btn.classList.remove('selected'));
    
    for (const position in activePage) {
        if (activePage[position].id === currentEmote) {
             document.getElementById('btn-' + position).classList.add('selected');
        }
    }
}

// --- SIGNAL LOGIC ---
const signalStates = [
    { file: '/signal-empty.svg', size: '1.1rem' },
    { file: '/signal-green.svg', size: '1.1rem' },
    { file: '/signal-orange.svg', size: '0.85rem' }, 
    { file: '/signal-red.svg', size: '0.55rem' }     
];

function pollSignal() {
    fetch('/signal')
        .then(r => r.text())
        .then(val => {
            let rssi = parseInt(val);
            let s = 0;
            if (rssi > -60) s = 1;
            else if (rssi > -80) s = 2;
            else if (rssi > -99) s = 3;
            else s = 0;
            const icon = document.getElementById('signal-icon');
            icon.src = signalStates[s].file;
            icon.style.height = signalStates[s].size;
        }).catch(e => console.log('Signal poll error'));
}
setInterval(pollSignal, 3000);
window.onload = pollSignal;
</script>
</head><body>
    
<div class='header'>
  <div class='header-left'>
    <div class='header-row'>Type: [P-V01\\]</div>
    <div class='header-row'>Name: [Test]</div>
  </div>
  
  <div class='header-right'>
    <div class='header-row signal-wrapper'>
      <div>Signal:</div>
      <div class='icon-container'>
        <img id='signal-icon' src='/signal-empty.svg' onclick='cycleSignal()'>
      </div>
    </div>
    
    <div class='header-row'>
      Emotion: <span id='emotion-text' style="color: #FFF; margin-left: 6px;">NORMAL</span>
    </div>
  </div>
</div>

<div class='carousel-wrapper'>
  <img id='prev-arrow' class='nav-arrow' src='/leftarrow.svg' onclick='togglePage()'>

  <div class='container'>
    <img id='btn-topLeft' class='btn' src='/sad.svg' onclick="set('topLeft')">
    <img id='btn-topRight' class='btn' src='/mad.svg' onclick="set('topRight')">
    <img id='btn-bottomLeft' class='btn' src='/huh.svg' onclick="set('bottomLeft')">
    <img id='btn-bottomRight' class='btn' src='/uwu.svg' onclick="set('bottomRight')">
    <img id='btn-center' class='btn center-btn selected' src='/normal.svg' onclick="set('center')">
  </div>

  <img id='next-arrow' class='nav-arrow' src='/rightarrow.svg' onclick='togglePage()'>
</div>

<div class='footer'>&copy; 2026 SleepyPibbleCo. All rights reserved.</div>
</body></html>
)=====";

  webServer.send(200, "text/html", html);
}

// =================================================================================
// 2. UNIFIED HANDLERS
// =================================================================================

void serveSVG(const char* svgData) {
  webServer.sendHeader("Cache-Control", "max-age=86400"); 
  webServer.send(200, "image/svg+xml", svgData);
}

void handleEmotionSet() {
  if (webServer.hasArg("emote")) {
    String emote = webServer.arg("emote");
    Serial.println("Web Command Received: " + emote);
    
    if (emote == "normal") currentEmotion = 0;
    else if (emote == "mad") currentEmotion = 1;
    else if (emote == "sad") currentEmotion = 2;
    else if (emote == "huh") currentEmotion = 3;
    else if (emote == "uwu") currentEmotion = 4;
    else if (emote == "em1") currentEmotion = 5;
    else if (emote == "em2") currentEmotion = 6;
    else if (emote == "em3") currentEmotion = 7;
    else if (emote == "em4") currentEmotion = 8;
    else if (emote == "em5") currentEmotion = 9;
  }
  webServer.send(200, "text/plain", "OK");
}

void handleSignal() {
  wifi_sta_list_t wifi_sta_list;
  memset(&wifi_sta_list, 0, sizeof(wifi_sta_list));
  
  esp_err_t err = esp_wifi_ap_get_sta_list(&wifi_sta_list);
  int rssi = -100; 
  
  if (err == ESP_OK && wifi_sta_list.num > 0) {
    rssi = wifi_sta_list.sta[0].rssi;
  }
  
  webServer.send(200, "text/plain", String(rssi));
}

void handleNotFound() {
  webServer.sendHeader("Location", "/");
  webServer.send(302, "text/plain", "");
}
} // End namespace

// =================================================================================
// 3. SETUP & LOOP
// =================================================================================

void wifiPortalSetup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(kApIp, kApIp, kApNetmask);
  WiFi.softAP(kApSsid, kApPassword, 1, 0, 1); 

  if (!MDNS.begin("visor")) {
      Serial.println("Error setting up mDNS");
  } else {
      Serial.println("mDNS started: http://visor.local");
  }

  dnsServer.start(kDnsPort, "*", kApIp);

  webServer.on("/", handleRoot);
  webServer.on("/set", handleEmotionSet);
  webServer.on("/signal", handleSignal);
  
  // Registering imported SVGs from svg_assets.h
  webServer.on("/sad.svg", []() { serveSVG(svg_sad); });
  webServer.on("/mad.svg", []() { serveSVG(svg_mad); });
  webServer.on("/huh.svg", []() { serveSVG(svg_huh); });
  webServer.on("/uwu.svg", []() { serveSVG(svg_uwu); });
  webServer.on("/normal.svg", []() { serveSVG(svg_normal); });

  webServer.on("/custom-emote-1.svg", []() { serveSVG(svg_custom_1); });
  webServer.on("/custom-emote-2.svg", []() { serveSVG(svg_custom_2); });
  webServer.on("/custom-emote-3.svg", []() { serveSVG(svg_custom_3); });
  webServer.on("/custom-emote-4.svg", []() { serveSVG(svg_custom_4); });
  webServer.on("/custom-emote-5.svg", []() { serveSVG(svg_custom_5); });

  webServer.on("/leftarrow.svg", []() { serveSVG(svg_leftarrow); });
  webServer.on("/rightarrow.svg", []() { serveSVG(svg_rightarrow); });

  webServer.on("/signal-empty.svg", []() { serveSVG(svg_signal_empty); });
  webServer.on("/signal-green.svg", []() { serveSVG(svg_signal_green); });
  webServer.on("/signal-orange.svg", []() { serveSVG(svg_signal_orange); });
  webServer.on("/signal-red.svg", []() { serveSVG(svg_signal_red); });

  webServer.onNotFound(handleNotFound);
  webServer.begin();

  Serial.print("AP ready: ");
  Serial.println(WiFi.softAPIP());
}

void wifiPortalUpdate() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}