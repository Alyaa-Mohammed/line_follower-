#ifndef IR_H
#define IR_H


class IR {
private:
#define SR1 4            //SR:sensor right
#define SC 3          //SC :SENSOR CENTER
#define SL2 2          //SL2:senor left

#include "motor.h"
motor_L motor1_L;

public:
 void initIR(){
 pinMode(SR1,INPUT);
 pinMode(SC,INPUT);
 pinMode(SL2,INPUT);
}
  
int sr1=digitalRead(SR1); 
int sc=digitalRead(SC);     //sr2 and sl1 for 2 leds in center 
int sl2 =digitalRead(SL2);

//***************************************


void my_function(){
if (sr1==1 && sc==0 && sl2==0 ){
  motor1_L.Right();
  }
   
else if (sr1==0 && sc==0 && sl2==1 ){
 motor1_L.Left();
  
}

else if (sr1==1 && sc==1 && sl2==1 ){
  motor1_L.Forward();
}

else if(sr1==0 && sc==0 && sl2==0 ){
  motor1_L.Stop();
  }
else
motor1_L.Stop();
}

};
#endif
