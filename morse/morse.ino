#include <morse.h>

morse morse(LED_BUILTIN);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  morse.signal_S();
  morse.signal_O();
  morse.signal_S();
  break;
}
