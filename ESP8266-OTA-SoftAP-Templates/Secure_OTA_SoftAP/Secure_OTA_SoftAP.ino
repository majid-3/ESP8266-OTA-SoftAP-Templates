/****************************************************
 *  ESP8266 Permanent OTA SoftAP Template (Secure)
 *  ------------------------------------------------
 *  Features:
 *   - Works without an external Wi-Fi router
 *   - Creates a secure SoftAP with a strong password
 *   - OTA (Over-The-Air) firmware updates via Arduino IDE
 *   - Requires OTA password authentication
 *   - LED status indicator during OTA
 *
 *  How to Use:
 *   1. Upload this sketch via USB once.
 *   2. Connect your PC to the ESP's Wi-Fi:
 *        SSID: ESP_OTA
 *        Password: ESP8266_S3cur3@Key!
 *   3. In Arduino IDE, go to:
 *        Tools → Port → Network Ports → ESP8266_OTA
 *   4. When uploading OTA, enter the password:
 *        Majid123!
 *
 *  Author: Muhammad Majid
 *  License: MIT
 ****************************************************/

#include <ESP8266WiFi.h>
#include <ArduinoOTA.h>

// ===== SoftAP Configuration =====
const char* AP_SSID     = "ESP_OTA";              // SoftAP Name
const char* AP_PASSWORD = "ESP8266_S3cur3@Key!";  // Strong SoftAP password

// ===== OTA Configuration =====
const char* OTA_HOSTNAME = "ESP8266_OTA";         // Shown in Arduino IDE
const char* OTA_PASSWORD = "Majid123!";           // OTA authentication password

// ===== LED Indicator (built-in LED on most boards) =====
#define LED_PIN LED_BUILTIN  // Active LOW

// ===== OTA Setup Function =====
void setupOTA()
{
  // Start in SoftAP mode
  WiFi.mode(WIFI_AP);
  WiFi.softAP(AP_SSID, AP_PASSWORD);

  // Configure OTA
  ArduinoOTA.setHostname(OTA_HOSTNAME);
  ArduinoOTA.setPassword(OTA_PASSWORD);

  // OTA Event Handlers
  ArduinoOTA.onStart([]() {
    digitalWrite(LED_PIN, LOW);  // LED ON during OTA
  });

  ArduinoOTA.onEnd([]() {
    delay(5000);                 // Allow time before reboot
    digitalWrite(LED_PIN, HIGH); // LED OFF
    ESP.restart();
  });

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) 
  {
    // No Serial output (silent OTA)
  });

  ArduinoOTA.onError([](ota_error_t error) {
    digitalWrite(LED_PIN, HIGH); // LED OFF on error
  });

  // Start OTA Service
  ArduinoOTA.begin();
}

// ===== Main Setup =====
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // LED OFF initially
  setupOTA();
  // ===== Your project setup code here =====
}

// ===== Main Loop =====
void loop()
{
  ArduinoOTA.handle(); // Always check for OTA updates
  // ===== Your main project code here =====
  
}
