#include "IR.h"
#include "motor.h"


IR IR_1;
motor_L motor1_L;

void setup(){
Serial.begin(9600);
 IR_1.initIR();
 
 motor1_L.initmotor();
}

void loop() {
IR_1.my_function();
}
