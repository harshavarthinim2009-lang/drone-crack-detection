# drone-crack-detection
Software for drone-based crack detection using ESP32, sensors, and cameras
## Features

- Connects drone camera and ESP32-based micro robot to software
- Streams live video and sensor data (ultrasonic, thermal, etc.)
- Detects cracks and measures their dimensions
- Classifies crack types (e.g., vertical, horizontal, structural cracks, compromising strength, and non-structural cracks etc.)
- Plots growth graph of cracks over time
- Displays dimension and position of detected cracks
## Hardware Requirements

- DJI drone (model: dji mini 2)
- ESP32 microcontroller (ESP32 DevKit or similar)
- ESP32-CAM module
- Ultrasonic sensor (HC-SR04 or similar)
- Thermal sensor (e.g., MLX90614)
- Onboard/inbuilt camera (drone and/or ESP32-CAM)
- Micro robot attachment (with mounting hardware)
- Power supply (battery packs, cables, etc.)
## Setup

### 1. Hardware Connections
- Mount the micro robot to the DJI drone securely.
- Connect the ESP32 to the ESP32-CAM, ultrasonic sensor, and thermal sensor according to their pin diagrams.
- Ensure power is supplied to all modules.

### 2. Software Preparation
- Install [Arduino IDE](https://www.arduino.cc/en/software) (or PlatformIO).
- Add the ESP32 board to the Arduino IDE (via Board Manager).
- Install required libraries for ESP32, camera, ultrasonic, and thermal sensors.
- Clone this repository to your computer using:
  ```
  git clone https://github.com/harshavarthinim2009-lang/drone-crack-detection.git
  ```

### 3. Flashing the Code
- Open the provided `.ino` or source files in Arduino IDE.
- Select the correct ESP32 board and port.
- Upload the code to your ESP32.

### 4. Connecting the Software
- Ensure your computer and ESP32 are on the same WiFi network.
- Run the desktop or web app (to be developed) to connect to the ESP32/ESP32-CAM stream.
