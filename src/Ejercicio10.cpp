#include <Arduino.h>
#define LEDVerde 16
#define LEDRojo 15
#define LEDAzul 7
#define LEDAmarillo 6
#define Boton1 19
#define Boton2 20
#define Boton3 21
#define Boton4 47
#define PIN_SCL 5
#define PIN_SDA 4
 #define MAX_NIVEL 5
void setup() {
  Serial.begin(115200);
  pinMode(LEDVerde, OUTPUT);
  pinMode(LEDRojo, OUTPUT);
  pinMode(LEDAzul, OUTPUT);
  pinMode(LEDAmarillo, OUTPUT);
  pinMode(Boton1, INPUT_PULLUP);
  pinMode(Boton2, INPUT_PULLUP);
  pinMode(Boton3, INPUT_PULLUP);
  pinMode(Boton4, INPUT_PULLUP);
}
int orden[5];
int aciertos[5];
int nivel = 1;
void loop() {
  switch (nivel) {
    case 1:
      orden[0] = random(0, 4);
      switch (orden[0]) {
        case 0:
          digitalWrite(LEDVerde, HIGH);
          delay(500);
          digitalWrite(LEDVerde, LOW);
          break;
        case 1:
          digitalWrite(LEDRojo, HIGH);
          delay(500);
          digitalWrite(LEDRojo, LOW);
          break;
        case 2:
          digitalWrite(LEDAzul, HIGH);
          delay(500);
          digitalWrite(LEDAzul, LOW);
          break;
        case 3:
          digitalWrite(LEDAmarillo, HIGH);
          delay(500);
          digitalWrite(LEDAmarillo, LOW);
          break;
      }
    break;
    case 2:
      orden[0] = random(0, 4);
      orden[1] = random(0, 4);
      for (int i = 0; i < 2; i++) {
        switch (orden[i]) {
          case 0:
            digitalWrite(LEDVerde, HIGH);
            delay(500);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(500);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(500);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(500);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
      }
    break;
    case 3:
      orden[0] = random(0, 4);
      orden[1] = random(0, 4);
      orden[2] = random(0, 4);
      for (int i = 0; i < 3; i++) {
        switch (orden[i]) {
          case 0:
            digitalWrite(LEDVerde, HIGH);
            delay(500);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(500);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(500);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(500);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
      }
      break;
    case 4:
      orden[0] = random(0, 4);
      orden[1] = random(0, 4);
      orden[2] = random(0, 4);
      orden[3] = random(0, 4);
      for (int i = 0; i < 4; i++) {
        switch (orden[i]) {
          case 0:
            digitalWrite(LEDVerde, HIGH);
            delay(500);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(500);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(500);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(500);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
      }
      case 5:
      orden[0] = random(0, 4);
      orden[1] = random(0, 4);
      orden[2] = random(0, 4);
      orden[3] = random(0, 4);
      orden[4] = random(0, 4);
      for (int i = 0; i < 5; i++) {
        switch (orden[i]) {
          case 0:
            digitalWrite(LEDVerde, HIGH);
            delay(500);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(500);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(500);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(500);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
      }
  }
  for (int i = 0; i < 5; i++) {
    if (orden[i] == aciertos[i]) {
      nivel++;
    } else {
      nivel = 1;
    }
  }
}
