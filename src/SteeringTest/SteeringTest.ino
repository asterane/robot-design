#include <Servo.h>

Servo right;
Servo left;
Servo steer;

void setup() {
  right.attach(9);
  steer.attach(10);
  left.attach(11);

  right.write(90);
  steer.write(85);
  left.write(90);
}

void loop() {
  // running the wheels at 110 and 70 
  // lets them spin 5 times per second
  
  steer.write(85;
  right.write(110);
  left.write(70);

  delay(1000);
  
  right.write(110);
  steer.write(85);
  left.write(70);

  delay(3000);
  
  right.write(110);
  left.write(70);

  delay(3000);
  
  right.write(110);
  left.write(70);

  delay(3000);
  
  right.write(110);
  left.write(70);

  delay(3000);
  
  right.write(110);
  left.write(70);

  delay(3000);
  
  while (1) {
    
  }
}
