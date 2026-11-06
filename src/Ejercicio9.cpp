#include <Arduino.h>
#define PIN 4
void setup() {
  Serial.begin(115200);
  pinMode(PIN, OUTPUT);
}

void loop() {
  tone(PIN, 262); 
  delay(200);
  noTone(PIN);

  tone(PIN, 330);  
  delay(200);
  noTone(PIN);

  tone(PIN, 392);  
  delay(200);
  noTone(PIN);

  delay(440);      
}
