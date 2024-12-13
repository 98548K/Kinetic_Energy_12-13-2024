#include "vex.h"

void usercontrol(void) {
    task rc_auto_loop_task_Controller1(rc_auto_loop_function_Controller1);
  while (1) {
    wait(20, msec);
  }
}