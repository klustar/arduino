#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int increLight = 7;
int decreLight = 6;
int increDelay = 5;
int decreDelay = 4;

int red = 9;
int green = 8;
int blue = 10;

int valueLight = 50;
int valueDelay = 50;

void flash(int, int);

void setup() {
  //Serial.begin(9600);
  
  lcd.begin();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HIGH: ");
  lcd.setCursor(0, 1);
  lcd.print("LOW: ");

  pinMode(increLight, INPUT);
  pinMode(decreLight, INPUT);
  pinMode(increDelay, INPUT);
  pinMode(decreDelay, INPUT);

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
  
  /*if (valueLight > 9 && valueDelay > 9) {
    if (digitalRead(increLight) != 0) {
      valueLight += 10;
      flash(valueLight, valueDelay);
    }
    if (digitalRead(decreLight) != 0) {
      valueLight -= 10;
      flash(valueLight, valueDelay);
    }
    if (digitalRead(increDelay) != 0) {
      valueDelay += 10;
      flash(valueLight, valueDelay);
    }
    if (digitalRead(decreDelay) != 0) {
      valueDelay -= 10;
      flash(valueLight, valueDelay);
    }
  }*/
}

void flash(int valueLight, int valueDelay) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HIGH: ");
  lcd.setCursor(0, 1);
  lcd.print("LOW: ");
  lcd.setCursor(6, 0);
  lcd.print(valueLight);
  lcd.setCursor(6, 1);
  lcd.print(valueDelay);

  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(valueLight);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(valueDelay);
}
