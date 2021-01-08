#define green 6
#define red 7
#define water A0

unsigned short level;
unsigned short wet;

void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  level = analogRead(water);
  level = (level / 1023) * 100;
  wet = 40;
  
  if (level < wet) {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    // 물을 줘야하는 상황
  }
  else {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    // 물을 주지않아야하는 상황
  }
  delay(100);
}
