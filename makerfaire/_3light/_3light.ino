int lightRed = 7;
int lightBlue = 6;
int lightGreen = 5;

int bottonRed = 10;
int bottonBlue = 11;
int bottonGreen = 12;

int valueRed = 0;
int valueBlue = 0;
int valueGreen = 0;
int stateRed = 0;
int stateBlue = 0;
int stateGreen = 0;

void setup() {
  pinMode(lightRed, OUTPUT);
  pinMode(lightBlue, OUTPUT);
  pinMode(lightGreen, OUTPUT);

  pinMode(bottonRed, INPUT);
  pinMode(bottonBlue, INPUT);
  pinMode(bottonGreen, INPUT);
}

void loop() {
  if (digitalRead(bottonRed) == 0) {
    valueRed++;
    valueRed = valueRed % 2;
    stateRed = valueRed;
    digitalWrite(lightRed, stateRed);
    delay(200);
  }
  if (digitalRead(bottonBlue) == 0) {
    valueBlue++;
    valueBlue = valueBlue % 2;
    stateBlue = valueBlue;
    digitalWrite(lightBlue, stateBlue);
    delay(200);
  }
  if (digitalRead(bottonGreen) == 0) {
    valueGreen++;
    valueGreen = valueGreen % 2;
    stateGreen = valueGreen;
    digitalWrite(lightGreen, stateGreen);
    delay(200);
  }
}
