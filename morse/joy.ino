/*
   조이스틱 x축 : 다음/이전 문자
   조이스틱 y축 : 다음/이전 문자군
   조이스틱 z축 : 문자 선택
   버튼 : 문자열 리셋
*/

#define xPin A0
#define yPin A1
#define zPin 8
#define gap 200     // x,y축의 레버가 일정 범위에 들어와야 인식을 하는 기능

int invert(int);
void clear(char);

int x, y, z;
int count = 0;
char word = 'A';
char arr[16];
int n = 0;

void setup(){
    Serial.begin(9600);

    pinMode(zPin, INPUT_PULLUP);
}

void loop(){
    x = invert(analogRead(xPin));
    y = invert(analogRead(yPin));
    z = digitalRead(zPin);

    if (y == 0){
        count--;
        count += 3;
        count %= 3;
    }
    else if (y == 1){
        count++;
        count %= 3;
    }

    switch (count){
    case 0:
        word='A';
        break;
    case 1:
        word='a';
        break;
    case 2:
        word='0';
        break;
    default:
        break;
    }
    if (x == 0){
    }
    else if (x == 1){
    }
    else{
        if (z == 0){
            arr[n] = word;
            n++;
        }
    }

    Serial.print(x);
    Serial.print(", ");
    Serial.print(y);
    Serial.print(", ");
    Serial.println(z);
    delay(500);
}

int invert(int inNum){
    if (inNum >= 0 && inNum < 0 + gap){
        return 0;
    }
    else if (inNum > 1023 - gap && inNum <= 1023){
        return 1;
    }
    else{
        return -1;
    }
}

void clear(char arr[]){
    int i;
    for (i = 0; i < 16; i++){
        arr[i] = '\0';
    }
}