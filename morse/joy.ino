#define z 8

void setup() {
  Serial.begin(9600);

  pinMode(z, INPUT_PULLUP);
}

void loop() {
  Serial.print(analogRead(A0));
  Serial.print(", ");
  Serial.print(analogRead(A1));
  Serial.print(", ");
  Serial.println(digitalRead(z));
  delay(100);
}
