#include<Servo.h> //서보 라이브러리
#define Shock 3   //충격감지센서 - 3번 핀

Servo switcher;   //서보 객체

int pos = 30;      //서보 각도 변수
int val;          //충격감지센서 변수

void setup() {
  switcher.attach(9);   //9번 핀에 서보제어핀 연결
  pinMode(Shock, INPUT); //충격감지센서를 입력값으로 받음
}

void loop() {
  val =digitalRead(Shock);  //충격감지센서의 입력값을 변수값으로 지정

  if(val==HIGH){
    for(pos=30;pos<150;pos++){
      switcher.write(pos);
      delay(10);
    }
  }
  else{
    for(pos=150;pos>30;pos++){
      switcher.write(pos);
      delay(10);
    }
  }
}
