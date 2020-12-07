/*  프로그램 설명
    1. 햇빛 대신 LED로 조명을 대체
    2. 조명은 강중약 3단으로 하되, PWM으로 조절하지 않고 LED갯수로 조절
    3.
*/
#include<SoftwareSerial.h>
#include"DHT.h"

#define TX 2       //블루투스 통신
#define RX 3       //블루투스 통신
#define _fan 7      //공기순환
#define DHTPIN 8    //온습도 제어  
#define DHTTYPE DHT11
#define _light1 9   //밝기1
#define _light2 10  //밝기2
#define _light3 11  //밝기3
#define _lux A2     //조도감지
#define tempPin1 A0
#define humiPin1 A1
#define hitPin1 4
#define waterPump 5

void dhtSet();
void dhtGet();
float tempSensing(int);
int humiSensing(int);

SoftwareSerial bluetooth(TX, RX); //블루투스 객체
DHT dht(DHTPIN, DHTTYPE);           //온습도 객체

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    Serial.println("Connect Fail!");
  }
  Serial.println("Connect Success!");
  bluetooth.begin(9600);

  dht.begin();
  pinMode(_fan, OUTPUT);
  pinMode(_light1, OUTPUT);
  pinMode(_light2, OUTPUT);
  pinMode(_light3, OUTPUT);
  pinMode(hitPin1, OUTPUT);
  pinMode(waterPump, OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if (bluetooth.available()) {
    Serial.write(bluetooth.read());
  }

  if (Serial.available()) {
    bluetooth.write(Serial.read());
  }

  dhtSet();
  dhtGet();

  if (tempSensing(tempPin1) < 21) {
    digitalWrite(hitPin1, HIGH);
  }
  else if (tempSensing(tempPin1) > 23) {
    digitalWrite(hitPin1, LOW);
  }
  else {
    delay(10);
  }

  if (humiSensing(humiPin1) < 350) {
    digitalWrite(waterPump, HIGH);
  }
  else if (humiSending(humiPin1) > 650) {
    digitalWrite(waterPump, LOW);
  }
  else {
    delay(10);
  }
}

void dhtSet() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print((int)temperature);
  Serial.print("*C,");
  Serial.print((int)humidity);
  Serial.println("%");
}

void dhtGet() {
  String humi = "Humi : ";
  humi += (String)humidity;
  humi += "%";
  Serial.println(humi);

  String temp = "Temp : ";
  temp += (String)temperature;
  temp += "C";
  Serial.println(temp);
}

float tempSensing(int _pin) {
  int reading = analogRead(_pin);
  float voltage = reading * 5.0 / 1024.0;
  float celTemp = (voltage - 0.5) * 100;

  return celTemp;
}

int humiSensing(int _pin) {
  /*
     토양수분센서 변수범위
     건조한토양 : 0~300
     습한토양 : 301~700
     물속 : 701~950
  */
  int reading = analogRead(_pin);

  return reading;
}