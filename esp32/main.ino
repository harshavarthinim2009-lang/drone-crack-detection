#include "esp_camera.h"
#include <WiFi.h>

// Replace with your WiFi network credentials
const char* ssid = "Airtel-E5573-38E8";
const char* password = "9jn2214n";

// Camera configuration (for AI-Thinker ESP32-CAM)
camera_config_t config = {
  .pin_pwdn = 32,
  .pin_reset = -1,
  .pin_xclk = 0,
  .pin_sscb_sda = 26,
  .pin_sscb_scl = 27,
  .pin_d7 = 35,
  .pin_d6 = 34,
  .pin_d5 = 39,
  .pin_d4 = 36,
  .pin_d3 = 21,
  .pin_d2 = 19,
  .pin_d1 = 18,
  .pin_d0 = 5,
  .pin_vsync = 25,
  .pin_href = 23,
  .pin_pclk = 22,
  .xclk_freq_hz = 20000000,
  .ledc_timer = LEDC_TIMER_0,
  .ledc_channel = LEDC_CHANNEL_0,
  .pixel_format = PIXFORMAT_JPEG,
  .frame_size = FRAMESIZE_QVGA,
  .jpeg_quality = 12,
  .fb_count = 1,
};

void startCameraServer();

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  Serial.print("Camera Stream Ready! Go to: http://");
  Serial.print(WiFi.localIP());
  Serial.println(":81/stream");

  // Initialize the camera
  if (!esp_camera_init(&config)) {
    Serial.println("Camera init failed");
    return;
  }

  // Start streaming server
  startCameraServer();
}

void loop() {
  delay(1);
}

// Camera streaming server code (use ESP32-CAM example code or libraries)
void startCameraServer() {
  // Placeholder for camera server function
  // You can use the ESP32 CameraWebServer example or a library function here
}
