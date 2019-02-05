#include "LED_Controls.h"

LED_Controls LED1(LED_BUILTIN, 300);
LED_Controls LED2(12, 30);

void setup() {
  Serial.begin(115200);
}

void loop() {
  LED1.ON();
  LED1.OFF();
  LED2.ON();
  LED2.OFF();
}
