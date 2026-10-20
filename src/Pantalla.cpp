#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>
#define PIN_SDQ 18
#define PIN_SCL 17

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
    Wire.begin(PIN_SDQ, PIN_SCL);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Hola");
    lcd.setCursor(0, 1);
    lcd.print("2DAM");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
