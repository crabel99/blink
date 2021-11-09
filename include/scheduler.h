
#ifndef SCHEDULER_H
#define SCHEDULER_H

#define _TASK_SLEEP_ON_IDLE_RUN // Enable 1 ms SLEEP_IDLE powerdowns between tasks if no callback methods were invoked during the pass
#define _TASK_STATUS_REQUEST    // Compile with support for StatusRequest functionality - triggering tasks on status change events in addition to time only

#include <Arduino.h>
#include <TaskSchedulerDeclarations.h>
#include "BlinkTask.h"
#include "debug.h"

// Scheduler
Scheduler scheduler;            // Task Scheduler object

// Task Classes
BlinkTask* tBlink = BlinkTask::getInstance();

void initTasks() {
  // Because of how the class is created the task needs to be added to the Scheduler and enabled.
  scheduler.addTask(tBlink->taskBlink);
  tBlink->taskBlink.enable();
}

#endif /* SCHEDULER_H */
