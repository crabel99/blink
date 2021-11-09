#include "BlinkTask.h"

// Define static constants
uint8_t BlinkTask::_LED_PIN = LED_BUILTIN;
bool BlinkTask::state = false;

// Define the constructor
BlinkTask::BlinkTask() {
  pinMode(_LED_PIN, OUTPUT);
  taskBlink.setInterval(_BLINK_PERIOD);
  taskBlink.setIterations(TASK_FOREVER);
  taskBlink.setCallback(&callback);
}

// Define the static singleton pointer
BlinkTask* BlinkTask::inst_ = NULL;

BlinkTask* BlinkTask::getInstance() {
  if (inst_ == NULL)
    inst_ = new BlinkTask();
  return(inst_);
}

// Define the callback function
void BlinkTask::callback() {
    state = !state;
    digitalWrite(_LED_PIN, state);
    _PL(F("The light just flashed."));
}