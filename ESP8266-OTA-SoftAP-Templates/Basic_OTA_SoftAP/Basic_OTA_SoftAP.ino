/****************************************************
 *  ESP8266 Permanent OTA SoftAP Template (No Password)
 *  ---------------------------------------------------
 *  Features:
 *   - Works without an external Wi-Fi router
 *   - Creates an open SoftAP (no password)
 *   - OTA (Over-The-Air) firmware updates via Arduino IDE
 *   - LED status indicator during OTA
 *
 *  How to Use:
 *   1. Upload this sketch via USB once.
 *   2. Connect your PC to the ESP's Wi-Fi:
 *        SSID: ESP_OTA
 *        (No password required)
 *   3. In Arduino IDE, go to:
 *        Tools → Port → Network Ports → ESP8266_OTA
 *   4. Upload sketches wirelessly anytime — no USB needed.
 *
 *  Author: Muhammad Majid
 *  License: MIT
 ****************************************************/
 
#include <ESP8266WiFi.h>
#include <ArduinoOTA.h>

// ===== SoftAP Config =====
const char* AP_SSID     = "ESP_OTA";       // SoftAP Name
const char* AP_PASSWORD = "";             // No password

// ===== OTA Hostname =====
const char* OTA_HOSTNAME = "ESP8266_OTA";  // Shown in Arduino IDE

// ===== Optional: LED Indicator (built-in LED on most boards) =====
#define LED_PIN LED_BUILTIN

void setupOTA() 
{
  // Start SoftAP mode
  WiFi.mode(WIFI_AP);
  WiFi.softAP(AP_SSID, AP_PASSWORD);

  // OTA setup
  ArduinoOTA.setHostname(OTA_HOSTNAME);

  ArduinoOTA.onStart([]() 
  {
    digitalWrite(LED_PIN, LOW); // Turn LED ON during OTA
  });

  ArduinoOTA.onEnd([]() 
  {
    delay(5000); // Give PC time to reconnect before reboot
    digitalWrite(LED_PIN, HIGH); // Turn LED OFF
    ESP.restart();
  });

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) 
  {
    // No Serial prints for progress
  });

  ArduinoOTA.onError([](ota_error_t error) 
  {
    digitalWrite(LED_PIN, HIGH); // Turn LED OFF on error
  });

  ArduinoOTA.begin();
}

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // LED OFF (active LOW)
  // Initialize OTA in SoftAP mode
  setupOTA();
  // ===== Your project setup code here =====
  
}

void loop() 
{
  // Always handle OTA
  ArduinoOTA.handle();
  // ===== Your main project code here =====
  
}
