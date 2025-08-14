# Secure OTA SoftAP (Password Protected)

This template allows you to perform **OTA (Over-The-Air)** updates on your ESP8266 without an external Wi-Fi router, but with **password protection** for security.


## ✨ Features
- Works **without** an external Wi-Fi router
- SoftAP with **strong password**
- OTA uploads require **Arduino IDE authentication**
- Permanent OTA support in every sketch
- LED indicator during OTA upload


## 🚀 How to Use
1. Upload `Secure_OTA_SoftAP.ino` to your ESP8266 via USB.
2. After reboot, connect your PC to:
   - **SSID:** ESP_OTA
   - **Password:** ESP8266_S3cur3@Key!
3. In Arduino IDE:
   - Go to **Tools → Port → Network Ports → ESP8266_OTA**
4. When prompted for a password during upload, enter:
   - **Majid123!**


## 💡 Notes
- Use a **strong SoftAP password** to prevent unauthorized access.
- Change both the **Wi-Fi password** and **OTA password** in the code before deployment.
- Works with all ESP8266 boards.


## 📜 License
This example is licensed under the **MIT License**.
