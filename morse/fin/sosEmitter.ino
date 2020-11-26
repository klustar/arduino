#define sign 12

void yin();
void yang();
void signO();
void signS();

void setup(){
  pinMode(sign, OUTPUT);
}

void loop(){
  signS();
  signO();
  signS();
  delay(2000);
}

void yin(){
  //짧은 신호
  digitalWrite(sign, HIGH);
  delay(500);
  digitalWrite(sign, LOW);
  delay(500);
}

void yang(){
  //긴 신호
  digitalWrite(sign, HIGH);
  delay(1000);
  digitalWrite(sign, LOW);
  delay(500);
}

void signO(){
  yang();
  yang();
  yang();
}

void signS(){
  yin();
  yin();
  yin();
}