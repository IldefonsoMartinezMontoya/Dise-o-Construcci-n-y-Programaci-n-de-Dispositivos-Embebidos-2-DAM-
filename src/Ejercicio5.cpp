#include <Arduino.h>
void setup() {
  Serial.begin(115200);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
}
int sumar0restar = 0;
int estadoAnteriorRestar = HIGH;
int estadoAnteriorSumar = HIGH;
void loop() {
    int estadoRestar = digitalRead(13);
    int estadoSumar = digitalRead(14);
    if (estadoAnteriorRestar == HIGH && estadoRestar == LOW) {
        sumar0restar--;
    } else if (estadoAnteriorSumar == HIGH && estadoSumar == LOW) {
        sumar0restar++;
    }

    if (sumar0restar == 0 && estadoRestar == LOW) {
        sumar0restar = 15;
    } else if (sumar0restar == 16 && estadoSumar == LOW) {
        sumar0restar = 0;
    } else {
        if (sumar0restar == 0) {
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            delay(100);
        } else if (sumar0restar == 1) {
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100); 
        } else if (sumar0restar == 2) {
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 3) {
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 4) {
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 5) {
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, LOW);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 6) {
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 7) {
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 8) {
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 9) {
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 10) {
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 11) {
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 12) {
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 13) {
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, LOW);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 14) {
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            // Serial.println(sumar0restar);
            delay(100);
        } else if (sumar0restar == 15) {
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            // Serial.println(sumar0restar);
            delay(100);
        }
    }

}
