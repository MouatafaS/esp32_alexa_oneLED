ESP32 Wi-Fi Controlled LED with SinricPro

This project demonstrates how to control an LED connected to an ESP32 microcontroller using the SinricPro platform and Wi-Fi. It allows remote control of the LED via the internet, making it perfect for IoT beginners looking to explore smart home automation.

Features:

Connects ESP32 to Wi-Fi for remote control access.
Uses SinricPro to handle power state commands to turn the LED on or off.
Provides real-time feedback on the device state via serial output.
How It Works:

The ESP32 connects to a specified Wi-Fi network.
SinricPro handles incoming commands to control the LED's state (on/off).
The onPowerState function is triggered when a command is received, updating the LED accordingly.
Setup Instructions:

Update the Wi-Fi credentials (ssid and password) to match your network.
Add your SinricPro credentials (APP_KEY, APP_SECRET, and SWITCH_ID).
Upload the code to your ESP32 using the Arduino IDE or any compatible environment.
Monitor the serial output for connection status and control feedback.
This project is ideal for IoT enthusiasts and developers interested in building basic smart home devices with ESP32 and SinricPro.
