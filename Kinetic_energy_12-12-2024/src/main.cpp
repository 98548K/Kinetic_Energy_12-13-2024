#include "vex.h"
#include "vex.h"

using namespace vex;

competition Competition;


int main() {

  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);


  pre_auton();


  while (true) {
    wait(100, msec);
  }
}
