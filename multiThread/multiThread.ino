#include<FreeRTOS_AVR.h>

const uint8_t LED_PIN1 = 13;
const uint8_t LED_PIN2 = 12;

SemaphoreHandle_t sem1;
SemaphoreHandle_t sem2;

static void Thread1(void* arg) {
  pinMode(LED_PIN2, OUTPUT);

  while (1) {
    xSemaphoreTake(sem2, portMAX_DELAY);  // 세마포어를 받을 때까지 기다린다.

    for (int i = 0; i < 10; i++) {
      digitalWrite(LED_PIN2, LOW);
      digitalWrite(LED_PIN1, HIGH);
      vTaskDelay((200L * configTICK_RATE_HZ) / 1000L); //200밀리세컨드 대기한다.
      digitalWrite(LED_PIN1, LOW);
      vTaskDelay((200L * configTICK_RATE_HZ) / 1000L);
    }

    xSemaphoreGive(sem1); //세마포어를 주어서 Thread2의 동작을 수행할 수 있게한다.
  }
}

//------------------------------------------------------------------------------
static void Thread2(void* arg) {
  pinMode(LED_PIN1, OUTPUT);

  while (1) {
    xSemaphoreTake(sem1, portMAX_DELAY); //세마포어를 받을 때 까지 기다린다.

    for (int j = 0; j < 10; j++) {
      digitalWrite(LED_PIN1, LOW);
      digitalWrite(LED_PIN2, HIGH);
      vTaskDelay((200L * configTICK_RATE_HZ) / 1000L); //200밀리세컨드 대기한다.
      digitalWrite(LED_PIN2, LOW);
      vTaskDelay((200L * configTICK_RATE_HZ) / 1000L);
    }

    xSemaphoreGive(sem2);   // 세마포어를 주어서 Thread1의 동작을 수행할 수 있게한다.
  }
}

//------------------------------------------------------------------------------
void setup() {
  portBASE_TYPE s1, s2;

  Serial.begin(9600);

  //카운팅 세마포어를 생성한다.
  sem1 = xSemaphoreCreateCounting(1, 1);  // 세마포어를 주고 시작함
  sem2 = xSemaphoreCreateCounting(1, 0);

  //우선순위 1로 LED끄는 태스크를 생성한다.
  s1 = xTaskCreate(Thread1, NULL, configMINIMAL_STACK_SIZE, NULL, 1, NULL);

  //우선순위 1로 LED켜는 태스크를 생성한다.
  s2 = xTaskCreate(Thread2, NULL, configMINIMAL_STACK_SIZE, NULL, 1, NULL);

  //생성중 에러 발생했는지 체크
  if ((sem1 == NULL || sem2 == NULL) || (s1 != pdPASS || s2 != pdPASS )) {
    Serial.println(F("Creation problem"));
    while (1);
  }

  //스케줄러를 시작한다.
  vTaskStartScheduler();

  //여기가 실행된다면 메모리 부족 상태
  Serial.println(F("Insufficient RAM"));

  while (1);
}

void loop() {
  // Not used.
}
