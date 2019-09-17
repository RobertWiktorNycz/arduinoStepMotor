#include<Stepper.h>
#define STEPS 2038
Stepper stp(STEPS, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
stp.setSpeed(1);
stp.step(2038);
delay(1000);
stp.setSpeed(6);
stp.step(-2038);
delay(1000);

}
