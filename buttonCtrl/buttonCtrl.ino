int light = 0;

void setup() {
  Serial.begin(9600);

  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if (digitalRead(7) == 0) {
    Serial.print("up");
    Serial.print(", ");
    Serial.println(light);
    if (light < 255) {
      light++;
    }
    analogWrite(9, light);
    delay(100);
  }
  else if (digitalRead(8) == 0) {
    Serial.print("down");
    Serial.print(", ");
    Serial.println(light);
    if (light > 0) {
      light--;
    }
    analogWrite(9, light);
    delay(100);
  }
  else{
    Serial.print("stay");
    Serial.print(", ");
    Serial.println(light);
    analogWrite(9, light);
    delay(500);
  }
}
