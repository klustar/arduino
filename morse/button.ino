/*
    * 일반 푸시버튼을 2-state 상태의 버튼을 변환하는 코드
*/

#define btn 7

void btnOn(int);

int state;
int flag = 0;

void setup(){
    Serial.begin(9600);

    pinMode(btn, INPUT_PULLUP);
}

void loop(){
    state = digitalRead(btn);
    btnOn(state);
}

void btnOn(int a){
    if (state == 0){
        flag++;
        flag %= 2;

        if (flag == 0){
            Serial.println("On");
        }
        else{
            Serial.println("Off");
        }
    }
    delay(100);
}