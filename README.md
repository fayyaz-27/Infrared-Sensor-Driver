[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# ESP32 IR Sensor Obstacle Detection

This project reads an IR sensor input on ESP32 using ESP-IDF. When the IR sensor detects a wall, the sensor sends logic low.

## Features
- IR sensor input reading via GPIO
- Simple obstacle avoidance logic
- Logging with ESP_LOGI for debugging

## Hardware Setup
- IR sensor VCC to 3.3V
- IR sensor GND to ESP32 GND
- IR sensor OUT to GPIO (e.g., GPIO4)
