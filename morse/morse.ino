#include "morse.h"
#include <string.h>

morse morse(LED_BUILTIN);
#define sign 12
#define button 7

void yin();
void yang();
void signO();
void signS();

void setup() {
  Serial.begin(9600);

  pinMode(sign, OUTPUT);
}

void loop() {
  signS();
  signO();
  signS();
  delay(2000);
}

void yin() {
  int _pin = sign;
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void yang() {
  int _pin = sign;
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(500);
}

void signO() {
  yang();
  yang();
  yang();
}

void signS() {
  yin();
  yin();
  yin();
}
