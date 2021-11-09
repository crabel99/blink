
#ifndef BLINKTASK_H
#define BLINKTASK_H

#include <Arduino.h>
#include <TaskSchedulerDeclarations.h>
#include "debug.h"

class BlinkTask {

  private:
  static uint8_t _LED_PIN;
  static bool state;
  int16_t _BLINK_PERIOD = 1000; // msec
  static BlinkTask* inst_;
  BlinkTask();
  static void callback();
  
  public:
  static BlinkTask* getInstance();
  Task taskBlink;
  
};

#endif /* BLINK_H */
