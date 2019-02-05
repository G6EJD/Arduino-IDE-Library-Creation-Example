#ifndef LED_Controls_H
#define LED_Controls_H
#include "arduino.h"

class LED_Controls {
  public:
    LED_Controls(int pin, int delay);
    void ON();
    void OFF();
    int _pin;
    int _delay;
};

#endif
