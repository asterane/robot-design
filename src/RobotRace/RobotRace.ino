#include <Servo.h>

Servo right;
Servo left;
Servo steer;

void setup() {
  // initalizing all servos
  right.attach(9);
  steer.attach(10);
  left.attach(11);
  
  // makes sure start values are correct
  right.write(90);
  steer.write(85);
  left.write(90);
}

void loop() {
  delay(3000); // 3 second delay
  race(); // calling function to race
  while (1) {
    // ensures that race function doesn't loop
  }
}

void race() {
  // steers straight and runs both wheels at full speed
  right.write(110);
  steer.write(85);
  left.write(70);

  delay(10000); // times out 10 seconds for the race

  //stops wheels at end of race period
  right.write(90);
  steer.write(85);
  left.write(90);
}

