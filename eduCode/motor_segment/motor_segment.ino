#include <Servo.h>
#include "info.h"

void load(char);

Servo motor1;
unsigned short pos = 0;
char data;

char num0 = 0b00000001;
char num1 = 0b01001111;
char num2 = 0b00010010;
char num3 = 0b00000110;
char num4 = 0b01001100;
char num5 = 0b00100100;
char num6 = 0b00100000;
char num7 = 0b00001101;
char num8 = 0b00000000;
char num9 = 0b00000100;

void setup() {
  motor1.attach(motor1Pin);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  pos = analogRead(A0);
  pos = map(pos, 0, 1023, 0, 150);
  motor1.write(pos);
  if (pos == 0) {
    data = num0;
    load(data);
  }
  else if (pos > 0 && pos < 50) {
    data = num1;
    load(data);
  }
  else if (pos >= 50 && pos < 100) {
    data = num2;
    load(data);
  }
  else if (pos >= 100 && pos < 150) {
    data = num3;
    load(data);
  }
  else {
    data = num4;
    load(data);
  }
  delay(100);
}

void load(char data) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
}
