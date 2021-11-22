#define light 5     // 식물조명제어
#define green 6     // 녹색LED
#define red 7       // 적색LED
#define waterOUT 8  // 수분공급펌프
#define waterIN A0  // 수분감지센서
#define lux A1      // 조도센서

int level; // 수분감지센서 측정값
int wet = 15; // 식물마다 적절한 토양수분도
int lumi;
int sign;

void setup() {
  Serial.begin(9600);

  pinMode(light, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(waterOUT, OUTPUT);
}

void loop() {
  level = analogRead(waterIN);
  level = map(level, 0, 1023, 100, 0); // 수분도 퍼센트 변환
  lumi=analogRead(lux);
  lumi=map(lumi,0,1023,100,0);

  Serial.print("cell_1 ");
  Serial.print(level);
  Serial.print(" ");
  Serial.print(lumi);
  Serial.println("");

  if (level < wet) {
    // 물을 줘야하는 상황
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(waterOUT, HIGH);
    delay(1000);
    digitalWrite(waterOUT, LOW);
    delay(100);
  }
  else {
    // 물을 주지않아야하는 상황
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(waterOUT, LOW);
    delay(10);
  }

  if(sign==true){
    analogWrite(light,lumi);
    delay(10);
  }
  else{
    analogWrite(light,lumi);
    delay(10);
  }
  
  delay(9800);    // 10초에 한번씩 센서측정
}
