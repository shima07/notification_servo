#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup(){
  Serial.begin(9600);

  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
}

void loop(){
  if (Serial.available() > 0) {
    char cTmp = Serial.read();
    if(cTmp=='0'){
      servo1.write(0);
      servo2.write(0);
      servo3.write(0);

    }else if(cTmp=='1'){
      servo1.write(180);
      servo2.write(180);
      servo3.write(180);
    }
  }
}
