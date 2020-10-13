#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
    // I2C LCD를 초기화 합니다..
    lcd.init();
    // I2C LCD의 백라이트를 켜줍니다.
    lcd.backlight();
}

void loop(){
    // random 함수를 사용하여 0부터 2까지의 숫자중 랜덤하게 값을 받습니다.
    int value = random(0, 3);
    // 랜덤 값이 0이라면 아래의 조건을 실행합니다.
    if (value == 0){
        // 0번째 줄 0번째 셀부터 입력하게 합니다.
        lcd.setCursor(0, 0);          // 0번째 줄 0번째 셀부터 입력하게 합니다.
        lcd.print("  KocoaFab.cc  "); // 문구를 출력합니다.
    }
    // 랜덤 값이 1이라면 아래의 조건을 실행합니다.
    else if (value == 1){
        lcd.setCursor(0, 1);            // 1번째 줄 0번째 셀부터 입력하게 합니다.
        lcd.print("  Hello World!!  "); // 문구를 출력합니다.
    }
    // 랜덤 값이 2이라면 아래의 조건을 실행합니다.
    else if (value == 2){
        // 0번째 줄 0번째 셀부터 입력하게 합니다.
        lcd.setCursor(0, 0);
        // 아래의 문장을 출력합니다.
        lcd.print("  KocoaFab.cc  ");
        // 1번째 줄 0번째 셀부터 입력하게 합니다.
        lcd.setCursor(0, 1);
        // 아래의 문장을 출력합니다.
        lcd.print("  Hello World!!  ");
    }
    // 1초간 대기합니다.
    delay(1000);
    // LCD의 모든 내용을 삭제합니다.
    lcd.clear();
}