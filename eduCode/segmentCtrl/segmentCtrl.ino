#define latchPin 12
#define clockPin 11
#define dataPin 10

char data;
char num0 = 0b00000001;
char num1 = 0b01001111;
char num2 = 0b00010010;
char num3 = 0b00000110;
char num4 = 0b01001100;
char num5 = 0b00100100;
char num6 = 0b00100000;
char num7 = 0b00001101;
char num8 = 0b00000000;
char num9 = 0b00000100;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  data = num0;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num1;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num2;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num3;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num4;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num5;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num6;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num7;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num8;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  data = num9;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, data);
  digitalWrite(latchPin, HIGH);
  delay(1000);
}
