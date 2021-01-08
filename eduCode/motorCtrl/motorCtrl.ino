#include <Servo.h>
#define motor1Pin 9
#define move1Pin A0

Servo motor1;
unsigned short pos=0;

void setup() {
  motor1.attach(motor1Pin);
}

void loop() {
  pos=analogRead(A0);
  pos=map(pos,0,1023,0,150);
  motor1.write(pos);
}
