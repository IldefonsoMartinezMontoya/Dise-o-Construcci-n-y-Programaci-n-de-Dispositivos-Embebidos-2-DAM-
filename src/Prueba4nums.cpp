#include <Arduino.h>
#include <TM1637.h>
#define PIN_CLK 17
#define PIN_DIO 18
TM1637 tm(PIN_CLK, PIN_DIO);
void setup() {
  tm.init();
  tm.set(BRIGHT_TYPICAL);
}

void loop() {
  tm.display(0, 1);
  tm.display(1, 3);
  tm.display(2, 5);
  delay(1000);
}
