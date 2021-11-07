# Adaptation on the Arduino Blink Sketch

This program adapts the basic arduino sketch to provide a basic program template in PlatformIO for a SAMD21 processor using On Chip Debugging with the Atmel-ICE.
This program implements the Blink sketch using class based implementation of TaskScheduler.
While this implementation is a little complex for the simple blink sketch, it is intended to provide an extensible framework to build much larger projects.

TaskScheduler provides a fairly light weight way of executing tasks in a non blocking manner.
This is not parallel processing.
It creates a task que and adds and removes those tasks from it as directed by the program.
How this code is structured is that it creates a `BlinkTask` class where all of the necessary methods and variables are held.
To allow the breaking up of the traditional `scheduler.h` into multiple header files, the example class is set up using the singleton pattern.

There is also a simple debugging library, `debug.h`, that provides some base debugging tools to streamline the memory usage of the code during deployment.
