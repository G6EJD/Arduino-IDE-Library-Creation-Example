#include "LED_Controls.h"

LED_Controls::LED_Controls(int pin,  int led_delay){
  pinMode(pin, OUTPUT);
  _pin   = pin;
  _delay = led_delay;
}

void LED_Controls::ON(){
  digitalWrite(_pin,HIGH);
  delay(_delay);
}

void LED_Controls::OFF(){
  digitalWrite(_pin,LOW);
  delay(_delay);
}
