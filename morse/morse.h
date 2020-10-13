#ifndef morse_h
#define morse_h

#include "Arduino.h"

class morse {
  public:
    morse(int pin);
    //void yin();
    //void yang();

    //영문자 메소드
    void signal_A();
    void signal_B();
    void signal_C();
    void signal_D();
    void signal_E();
    void signal_F();
    void signal_G();
    void signal_H();
    void signal_I();
    void signal_J();
    void signal_K();
    void signal_L();
    void signal_M();
    void signal_N();
    void signal_O();
    void signal_P();
    void signal_Q();
    void signal_R();
    void signal_S();
    void signal_T();
    void signal_U();
    void signal_V();
    void signal_W();
    void signal_X();
    void signal_Y();
    void signal_Z();

    //아라비아숫자 메소드
    void signal_1();
    void signal_2();
    void signal_3();
    void signal_4();
    void signal_5();
    void signal_6();
    void signal_7();
    void signal_8();
    void signal_9();
    void signal_0();

  private:
    int _pin;
};

#endif
