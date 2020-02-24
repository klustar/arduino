#include <Servo.h>    //서보모터 라이브러리
#include <SoftwareSerial.h> //블루투스 라이브러리

Servo servo;    //서보모터 사용을 위한 객체 생성
SoftwareSerial bluetooth(2, 3); //블루투스의 TX, RX핀을 각각 2번, 3번으로 설정

#define motor 7;  //서보모터의 핀
#define trig 8; //초음파센서 trig 핀
#define echo 9; //초음파센서 echo 핀
#define light 6; //LED 핀

int angle = 30; //서보모터 초기 각도 값
float range(); //초음파센서 거리측정 함수선언

void setup() {
  servo.attach(motor);  //서보모터 연결
  Serial.begin(9600);  //시리얼 모니터 시작
  while (!Serial) {
    Serial.println("No Signal!"); //시리얼통신이 연결되지 않았다면 코드 실행을 멈추고 무한 반복
  }
  Serial.println("Hello, Boss!"); //시리얼통신 성공 시 출력

  bluetooth.begin(9600);  //블루투스와 아두이노의 통신속도를 9600으로 설정

  pinMode(trig,OUTPUT); //8번 핀의 신호를 출력신호로 설정
  pinMode(echo,INPUT);  //9번 핀의 신호를 입력신호로 설정
  pinMode(light,OUTPUT);  //6번 핀의 신호를 출력신호로 설정
}

void loop() {
  if (mySerial.available()) { //블루투스에서 넘어온 데이터가 있다면
    string word = mySerial.read(); //반대편에서 넘어온 데이터를 문자열로 저장
    if(word=="good job!"){
      angle=90;
      while(1){
        digitalWrite(light,HIGH);
        delay(1000);
        digitalWrite(light,LOW);
        delay(1000);
      }
    }
  }
  if (Serial.available()) {    //시리얼모니터에 입력된 데이터가 있다면
    mySerial.write(Serial.read());  //블루투스를 통해 입력된 데이터 전달
  }

  for(angle=30;angle<=150;angle++){
    if(range()<100.0){
      
    }
  }
}

float range(){
  digitalWrite(trig,LOW);
  digitalWrite(echo,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  unsigned long duration=pulseIn(echo,HIGH);
  float distance=duration/29.0/2.0;

  return distance;
}
