#include <Arduino.h>
#include <TM1637.h>
#define PIN_CLK 4
#define PIN_DIO 5
TM1637 tm(PIN_CLK, PIN_DIO);
int Ssegundos = 0;
int Psegundos = 0;
int Sminutos = 9;
int Pminutos = 0;
void setup() {
  Serial.begin(115200);
  tm.init();
  tm.set(BRIGHT_TYPICAL);
  tm.display(0, Pminutos);
  tm.display(1, Sminutos);
  tm.point(POINT_ON);
  tm.display(2, Psegundos);
  tm.display(3, Ssegundos);
}
 
void loop() {
    tm.display(0, Pminutos);
    tm.display(1, Sminutos);
    tm.point(POINT_ON);
    tm.display(2, Psegundos);
    tm.display(3, Ssegundos);
if (Ssegundos < 9) {
  Ssegundos++;
} else {
  Ssegundos = 0;
    if (Psegundos < 5) {
        Psegundos++;
    } else {
        Psegundos = 0;
        if (Sminutos < 9) {
            Sminutos++;
        } else {
            Sminutos = 0;
            if (Pminutos < 9) {
                Pminutos++;
            } else {
                Pminutos = 0;
            }
        }
        if (Pminutos > 9) {
            Pminutos = 0;
        }
    }
}
delay(1000);
}
