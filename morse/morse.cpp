#include "Arduino.h"
#include "morse.h"

morse::morse(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

/*void morse::yin() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  }

  void morse::yang() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  }*/

void morse::signal_A() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_B() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_C() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_D() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_E() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_F() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_G() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_H() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_I() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_J() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_K() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_L() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_M() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_N() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_O() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_P() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_Q() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_R() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_S() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_T() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_U() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_V() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_W() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_X() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_Y() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_Z() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}


//아라비아숫자 메소드
void morse::signal_1() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_2() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_3() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_4() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_5() {
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_6() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_7() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_8() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_9() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //짧은 신호
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);
}

void morse::signal_0() {
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
  //긴 신호
  digitalWrite(_pin, HIGH);
  delay(1500);
  digitalWrite(_pin, LOW);
  delay(500);
}
