#define green 6
#define red 7
#define water A0

float level;

void setup() {
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  level = analogRead(water);
  level = (level / 1023) * 100;
  if(level<60){
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
  }
  else{
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
  }
  delay(100);
}
