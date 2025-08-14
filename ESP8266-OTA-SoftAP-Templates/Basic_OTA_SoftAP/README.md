# Basic OTA SoftAP (No Authentication)

This template allows you to perform **OTA (Over-The-Air)** updates on your ESP8266 without connecting to an external Wi-Fi router.  
It creates a **SoftAP** (Wi-Fi hotspot) so you can upload new firmware directly from the Arduino IDE.


## ✨ Features
- Works **without** an external Wi-Fi router
- No password required (open network)
- Permanent OTA support in every sketch
- LED indicator during OTA upload


## 🚀 How to Use
1. Upload `Basic_OTA_SoftAP.ino` to your ESP8266 via USB.
2. After reboot, connect your PC to:
   - **SSID:** ESP_OTA
3. In Arduino IDE:
   - Go to **Tools → Port → Network Ports → ESP8266_OTA**
4. Upload your new code wirelessly.


## 💡 Notes
- Since there is no password, **anyone within range** can connect and upload firmware.
- Use the **Secure_OTA_SoftAP** version for protected access.
- Works with all ESP8266 boards.


## 📜 License
This example is licensed under the **MIT License**.

