#define btn 7

void btnOn(int);

int state;
int flag = 0;

void setup()
{
    Serial.begin(9600);

    pinMode(btn, INPUT_PULLUP);
}

void loop()
{
    state = digitalRead(btn);
    btnOn(state);
}

void btnOn(int a)
{
    if (state == 0)
    {
        flag++;
        flag %= 2;

        if (flag == 0)
        {
            Serial.println("On");
        }
    }
    delay(300);
}