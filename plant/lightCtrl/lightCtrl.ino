#define toggle 4    // 전원스위치
#define cluster 5   // 식물조명제어

boolean state = false;
z
void setup() {
  //pinMode(cluster, OUTPUT);
  pinMode(toggle, INPUT);
}

void loop() {
  /*
    // 2-state 스위치 상태제어
    if (digitalRead(toggle) == 1) {
    if (state == true) {
      state == false;
    }
    else {
      state == true;
    }
    }
  */

  state = true;
  if (state == true) {
    digitalWrite(cluster, LOW);
    delay(50);
    digitalWrite(cluster, HIGH);
    delay(50);
  }
  else {
    digitalWrite(cluster, LOW);
  }
}
