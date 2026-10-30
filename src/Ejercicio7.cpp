#include <Arduino.h>
#include <TM1637.h>
#define PIN_CLK 4
#define PIN_DIO 5
#define PIN_DERECHA 19
#define PIN_IZQUIERDA 14
#define tiempopaquenorebote 80
TM1637 tm(PIN_CLK, PIN_DIO);
void setup() {
  Serial.begin(115200);
  pinMode(PIN_DERECHA, INPUT_PULLUP);
  pinMode(PIN_IZQUIERDA, INPUT_PULLUP);
  tm.init();
  tm.set(BRIGHT_TYPICAL);
  tm.display(0, 5);
  tm.display(1, 0);
  tm.display(2, 0);
  tm.display(3, 0);
}
int t = 0;
int contador = 5000;
void loop() {
  if (millis() - t > tiempopaquenorebote) {
    t = millis();
    if (digitalRead(PIN_DERECHA) == LOW) {
      contador++;
      if (contador > 9999) {
        contador = 0;
      }
      tm.display(0, contador / 1000);
      tm.display(1, (contador % 1000) / 100);
      tm.display(2, (contador % 100) / 10);
      tm.display(3, contador % 10);
    }
    if (digitalRead(PIN_IZQUIERDA) == LOW) {
      contador--;
      if (contador < 0) {
        contador = 9999;
      }
      tm.display(0, contador / 1000);
      tm.display(1, (contador % 1000) / 100);
      tm.display(2, (contador % 100) / 10);
      tm.display(3, contador % 10);
    }
  }
}
