#include <morse.h>
#include <string.h>

morse morse(LED_BUILTIN);
#define sign 12

void setup() {
  Serial.begin(9600);

  pinMode(sign, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char word = Serial.read();
    digitalWrite(sign,HIGH);
    if(word=='A'){
      morse.signal_A();
    }
    else if(word=='B'){
      morse.signal_B();
    }
    else if(word=='C'){
      morse.signal_C();
    }
    else if(word=='D'){
      morse.signal_D();
    }
    else if(word=='E'){
      morse.signal_E();
    }
    else if(word=='F'){
      morse.signal_F();
    }
    else if(word=='G'){
      morse.signal_G();
    }
    else if(word=='H'){
      morse.signal_H();
    }
    else if(word=='I'){
      morse.signal_I();
    }
    else if(word=='J'){
      morse.signal_J();
    }
    else if(word=='J'){
      morse.signal_J();
    }
    else if(word=='L'){
      morse.signal_L();
    }
    else if(word=='M'){
      morse.signal_M();
    }
    else if(word=='N'){
      morse.signal_N();
    }
    else if(word=='O'){
      morse.signal_O();
    }
    else if(word=='P'){
      morse.signal_P();
    }
    else if(word=='Q'){
      morse.signal_Q();
    }
    else if(word=='R'){
      morse.signal_R();
    }
    else if(word=='S'){
      morse.signal_S();
    }
    else if(word=='T'){
      morse.signal_T();
    }
    else if(word=='U'){
      morse.signal_U();
    }
    else if(word=='V'){
      morse.signal_V();
    }
    else if(word=='W'){
      morse.signal_W();
    }
    else if(word=='X'){
      morse.signal_X();
    }
    else if(word=='Y'){
      morse.signal_Y();
    }
    else if(word=='Z'){
      morse.signal_Z();
    }
    else if(word=='1'){
      morse.signal_1();
    }
    else if(word=='2'){
      morse.signal_2();
    }
    else if(word=='3'){
      morse.signal_3();
    }
    else if(word=='4'){
      morse.signal_4();
    }
    else if(word=='5'){
      morse.signal_5();
    }
    else if(word=='6'){
      morse.signal_6();
    }
    else if(word=='7'){
      morse.signal_7();
    }
    else if(word=='8'){
      morse.signal_8();
    }
    else if(word=='9'){
      morse.signal_9();
    }
    else if(word=='0'){
      morse.signal_0();
    }
    else{
      Serial.println("Can`t read the signal!");
    }
    digitalWrite(sign,LOW);
    delay(500);
  }
}
