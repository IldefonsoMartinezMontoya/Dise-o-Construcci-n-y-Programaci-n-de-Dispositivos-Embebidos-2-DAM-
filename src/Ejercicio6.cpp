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
    delay(500);
  } else if (digitalRead(14) == LOW) {
    contador--;
    delay(500);
  }
  switch (contador) {
  case 0:
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    if (digitalRead(14) == LOW) {
      contador = 9;
    }
    break;
  case 1:
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(42, HIGH);
    digitalWrite(41, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 2:
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, HIGH);
    digitalWrite(37, HIGH);
    break;
  case 3:
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 4:
    digitalWrite(2, LOW);
    digitalWrite(42, HIGH);
    digitalWrite(41, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 5:
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, HIGH);
    digitalWrite(40, HIGH);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 6:
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 7:
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    break;
  case 8:
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, LOW);
    digitalWrite(39, LOW);
    digitalWrite(38, LOW);
    digitalWrite(37, LOW);
    break;
  case 9:
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(42, LOW);
    digitalWrite(41, LOW);
    digitalWrite(40, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(38, LOW);
    digitalWrite(37, HIGH);
    if (digitalRead(13) == LOW) {
      contador = 0;
    }
    break;
    default:
    contador = 0;
  }
}
