#include <Arduino.h>
#define LEDVerde 16
#define LEDRojo 15
#define LEDAzul 17
#define LEDAmarillo 16
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S3!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
