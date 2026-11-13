#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

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
#define LCD_ADDRESS 0x27
#define MAX_NIVEL 5

LiquidCrystal_I2C Pantalla_lcd(LCD_ADDRESS, 16, 2);

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
  Wire.begin(PIN_SDA, PIN_SCL);
  Pantalla_lcd.init();
  Pantalla_lcd.backlight();
  Pantalla_lcd.setCursor(0, 0);
  Pantalla_lcd.print("Juego de Simon");
  Pantalla_lcd.setCursor(0, 1);
  Pantalla_lcd.print("Nivel 1/5");
}

int orden[5];
int aciertos[5];
int nivel = 1;
bool correcto = true;

int esperarBoton() {
  const int pinesBoton[] = {Boton1, Boton2, Boton3, Boton4};
  const int pinesLed[] = {LEDVerde, LEDRojo, LEDAzul, LEDAmarillo};

  while (true) {
    for (int i = 0; i < 4; i++) {
      if (digitalRead(pinesBoton[i]) == LOW) {
        delay(25);

        if (digitalRead(pinesBoton[i]) == LOW) {
          digitalWrite(pinesLed[i], HIGH);

          while (digitalRead(pinesBoton[i]) == LOW) {
            delay(25);
          }

          digitalWrite(pinesLed[i], LOW);
          return i;
        }
      }
    }
  }
}

void loop() {
  correcto = true;

  switch (nivel) {
    case 1:
      orden[0] = random(0, 4);
      switch (orden[0]) {
        case 0:
          digitalWrite(LEDVerde, HIGH);
          delay(800);
          digitalWrite(LEDVerde, LOW);
          delay(250);
          break;
        case 1:
          digitalWrite(LEDRojo, HIGH);
          delay(800);
          digitalWrite(LEDRojo, LOW);
          delay(250);
          break;
        case 2:
          digitalWrite(LEDAzul, HIGH);
          delay(800);
          digitalWrite(LEDAzul, LOW);
          delay(250);
          break;
        case 3:
          digitalWrite(LEDAmarillo, HIGH);
          delay(800);
          digitalWrite(LEDAmarillo, LOW);
          delay(250);
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
            delay(800);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(800);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(800);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(800);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
        delay(250);
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
            delay(800);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(800);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(800);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(800);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
        delay(250);
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
            delay(800);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(800);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(800);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(800);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
        delay(250);
      }
      break;

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
            delay(800);
            digitalWrite(LEDVerde, LOW);
            break;
          case 1:
            digitalWrite(LEDRojo, HIGH);
            delay(800);
            digitalWrite(LEDRojo, LOW);
            break;
          case 2:
            digitalWrite(LEDAzul, HIGH);
            delay(800);
            digitalWrite(LEDAzul, LOW);
            break;
          case 3:
            digitalWrite(LEDAmarillo, HIGH);
            delay(800);
            digitalWrite(LEDAmarillo, LOW);
            break;
        }
        delay(250);
      }
      break;
  }

  delay(500);

  for (int i = 0; i < nivel; i++) {
    aciertos[i] = esperarBoton();
  }

  for (int i = 0; i < nivel; i++) {
    if (orden[i] != aciertos[i]) {
      correcto = false;
      break;
    }
  }

  if (correcto) {
    nivel++;
  } else {
    Pantalla_lcd.setCursor(0, 0);
    Pantalla_lcd.clear();
    Pantalla_lcd.print("Has Perdido!");
    for (int i = 0; i < 3; i++) {
      digitalWrite(LEDVerde, HIGH);
      digitalWrite(LEDRojo, HIGH);
      digitalWrite(LEDAzul, HIGH);
      digitalWrite(LEDAmarillo, HIGH);
      delay(250);

      digitalWrite(LEDVerde, LOW);
      digitalWrite(LEDRojo, LOW);
      digitalWrite(LEDAzul, LOW);
      digitalWrite(LEDAmarillo, LOW);
      delay(250);
    }
    Pantalla_lcd.setCursor(0, 0);
    Pantalla_lcd.clear();
    Pantalla_lcd.print("IES Oretania");
    nivel = 1;
  }

  switch (nivel) {
    case 1:
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 1/5");
      break;
    case 2:
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 2/5");
      break;
    case 3:
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 3/5");
      break;
    case 4:
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 4/5");
      break;
    case 5:
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 5/5");
      break;
    default:
      Pantalla_lcd.setCursor(0, 0);
      Pantalla_lcd.clear();
      Pantalla_lcd.print("Has Ganado!");
      Pantalla_lcd.setCursor(0, 1);
      Pantalla_lcd.print("Nivel 5/5");
      while (true) {
        digitalWrite(LEDVerde, HIGH);
        delay(180);
        digitalWrite(LEDVerde, LOW);

        digitalWrite(LEDRojo, HIGH);
        delay(180);
        digitalWrite(LEDRojo, LOW);

        digitalWrite(LEDAzul, HIGH);
        delay(180);
        digitalWrite(LEDAzul, LOW);

        digitalWrite(LEDAmarillo, HIGH);
        delay(180);
        digitalWrite(LEDAmarillo, LOW);
      }
      break;
  }
  delay(1000);
}

