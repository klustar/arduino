// 라이브러리 선언부
#include”DHT.h”

// 센서 선언부
#define DHTPIN1 2	// 토양온도감지
#define DHTPIN2 3	// 대기온도감지
#define DHTTYPE DHT11
#define hitGround 5	// 토양 열선
#define hitAir 6		// 대기순환팬 열선

// 객체 선언부
DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);

// 최초 실행 코드부
void setup(){
	pinMode(hitGround, OUTPUT);
	pinMode(hitAir, OUTPUT);
}

// 루프 실행 코드부
void loop(){
	int groundT=dht1.readTemperature();
	int airT= dht2.readTemperature();

	if(groundT
}
