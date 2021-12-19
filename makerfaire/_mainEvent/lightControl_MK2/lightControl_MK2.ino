#include<Wire.h>

int red = 9;
int green = 8;
int blue = 10;

int valueLight = 50;
int valueDelay = 50;

void flash(int, int);

void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  valueLight=analogRead(A0);
  valueDelay=analogRead(A1);

  valueLight=map(valueLight,0,1023,0,100);
  valueDelay=map(valueDelay,0,1023,0,100);

  flash(valueLight, valueDelay);
}

void flash(int valueLight, int valueDelay) {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(valueLight);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(valueDelay);
}
