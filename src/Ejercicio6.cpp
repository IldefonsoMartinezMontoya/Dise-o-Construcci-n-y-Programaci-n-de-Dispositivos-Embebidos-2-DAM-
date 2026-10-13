#include <Arduino.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
}
int contador = 0;
void loop() {
  if (digitalRead(13) == LOW) {
    contador++;
    delay(50);
  } else if (digitalRead(14) == LOW) {
    contador--;
    delay(50);
  }
  if (contador == 0) {
    diigitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 1) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, HIGH);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, HIGH);
    digitalWrite(37, LOW);
  } else if (contador == 2) {
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(42, HIGH);
    digitalWrite(41, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 3) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 4) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 5) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 6) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 7) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 8) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  } else if (contador == 9) {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
  }
}
