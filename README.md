# ESP8266-OTA-SoftAP-Templates

Easily upload firmware to your **ESP8266** over Wi-Fi — no router required.  
This repository contains **two ready-to-use OTA (Over-The-Air) SoftAP templates**:

1. **Basic OTA SoftAP**  
   → Simple and lightweight. Ideal for quick testing or demos.  
2. **Secure OTA SoftAP**  
   → Adds a **strong SoftAP password** and **OTA authentication password** for better security.


## ✨ Features
- Works **without** an external Wi-Fi router
- OTA updates remain active **after every upload**
- Reliable SoftAP reconnection handling
- Built-in LED indicator for OTA progress
- Simple setup — just upload once via USB, then go wireless


## 📂 Repository Structure
- **ESP8266-OTA-SoftAP-Templates/**
  - **Basic_OTA_SoftAP/** – Basic OTA SoftAP version (no authentication)  
    - `Basic_OTA_SoftAP.ino`  
    - `README.md`
  - **Secure_OTA_SoftAP/** – Secure OTA SoftAP version (password protected)  
    - `Secure_OTA_SoftAP.ino`  
    - `README.md`
  - `LICENSE` – MIT License  
  - `README.md` – Main documentation


## 🛠 Requirements
- **Arduino IDE** (or PlatformIO)
- ESP8266 Board Package installed  
  *(Arduino IDE → Preferences → Add Boards URL → `http://arduino.esp8266.com/stable/package_esp8266com_index.json`)*
- An ESP8266 development board:
  - NodeMCU
  - Wemos D1 mini
  - ESP-12E module  
- USB cable for the **first upload only**


## 🚀 Quick Start Guide

### 1️⃣ Choose a Template
- `Basic_OTA_SoftAP` — Quick & simple (no password)
- `Secure_OTA_SoftAP` — Protected SoftAP & OTA passwords

### 2️⃣ Upload via USB
1. Open the `.ino` file in Arduino IDE.
2. Connect your ESP8266 via USB.
3. Select **Board** & **Port** in Arduino IDE.
4. Click **Upload**.

### 3️⃣ Connect to ESP's Wi-Fi
- **Basic Version**  
  - SSID: `ESP_OTA`  
  - Password: *(none)*  
- **Secure Version**  
  - SSID: `ESP_OTA`  
  - Password: `ESP8266_S3cur3@Key!`

### 4️⃣ Upload Over-The-Air
1. In Arduino IDE, go to:  
   `Tools → Port → Network Ports`  
   and select your ESP (`ESP8266_OTA`).
2. Click **Upload**.
3. For Secure OTA, enter the password:  
   `Majid123!`


## 💡 LED Status (Both Versions)
- **ON during OTA** → Upload in progress  
- **OFF normally** → Idle state


## 🔒 Security Notes
- The **Basic version** has no authentication — avoid using it in public spaces.
- The **Secure version** uses:
  - Strong SoftAP password
  - OTA authentication password


## 📜 License
This project is licensed under the **MIT License** — you’re free to use, modify, and share with attribution.


## 🤝 Contributing
Pull requests are welcome!  
If you find a bug or want to add a feature, open an issue.


## ✍️ Author
**Muhammad Majid**  
📧 Contact: *(optional: your email or GitHub profile link)*  
💼 [GitHub Profile](https://github.com/majid-3)

---
