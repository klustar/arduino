#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int lightRed = 7;
int lightBlue = 6;
int lightGreen = 5;

int increLight = 9;
int decreLight = 10;
int increDelay = 11;
int decreDelay = 12;

int valueLight = 10;
int valueDelay = 10;

void light(int, int);
void show(int, int);

void setup() {
  lcd.begin();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HIGH: ");
  lcd.setCursor(0, 1);
  lcd.print("LOW: ");

  pinMode(lightRed, OUTPUT);
  pinMode(lightBlue, OUTPUT);
  pinMode(lightGreen, OUTPUT);

  pinMode(increLight, INPUT);
  pinMode(decreLight, INPUT);
  pinMode(increDelay, INPUT);
  pinMode(decreDelay, INPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(increLight) != LOW) {
    valueLight++;
  }
  if (digitalRead(decreLight) != LOW) {
    if (valueLight > 1) {
      valueLight--;
    }
  }
  if (digitalRead(increDelay) != LOW) {
    valueDelay++;
  }
  if (digitalRead(decreDelay) != LOW) {
    if (valueDelay > 1) {
      valueDelay--;
    }
  }
  light(valueLight, valueDelay);
  show(valueLight, valueDelay);
}

void light(int valueLight, int valueDelay) {
  digitalWrite(lightRed, HIGH);
  digitalWrite(lightBlue, HIGH);
  digitalWrite(lightGreen, HIGH);
  delay(valueLight);

  digitalWrite(lightRed, LOW);
  digitalWrite(lightBlue, LOW);
  digitalWrite(lightGreen, LOW);
  delay(valueDelay);
}

void show(int valueLight, int valueDelay) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HIGH: ");
  lcd.setCursor(0, 1);
  lcd.print("LOW: ");
  lcd.setCursor(6, 0);
  lcd.print(valueLight);
  lcd.setCursor(6, 1);
  lcd.print(valueDelay);
}
