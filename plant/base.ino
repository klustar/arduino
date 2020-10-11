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
#define _lux A0     //조도감지

void dhtSet();
void dhtGet();

SoftwareSerial bluetooth(TX,RX);  //블루투스 객체
DHT dht(DHTPIN,DHTTYPE);            //온습도 객체

void setup(){
    Serial.begin(9600);
    while(!Serial){
        Serial.println("Connect Fail!");
    }
    Serial.println("Connect Success!");
    bluetooth.begin(9600);

    dht.begin();
    pinMode(_fan,OUTPUT);
    pinMode(_light1,OUTPUT);
    pinMode(_light2,OUTPUT);
    pinMode(_light3,OUTPUT);
}

void loop(){
    if(bluetooth.available()){
        Serial.write(bluetooth.read());
    }

    if(Serial.available()){
        bluetooth.write(Serial.read());
    }

    dhtSet();
    dhtGet();
}

void dhtSet(){
    float humidity=dht.readHumidity();
    float temperature=dht.readTemperature();

    if(isnan(humidity)||isnan(temperature)){
        Serial.println("Failed to read from DHT sensor!");
        return;
    }

    Serial.print((int)temperature);
    Serial.print("*C,");
    Serial.print((int)humidity);
    Serial.println("%");
}

void dhtGet(){
    String humi="Humi : ";
    humi+=(String)humidity;
    humi+="%";
    Serial.println(humi);

    String temp="Temp : ";
    temp+=(String)temperature;
    temp+="C";
    Serial.println(temp);
}