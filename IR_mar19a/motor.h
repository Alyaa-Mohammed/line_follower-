
class motor_L {
private:
#define MR1 10               // motor right 1
#define MR2 9               // motor right 2
#define ML1 12              // motor left 1
#define ML2 11             // motor left 2


public:
void initmotor(){
 pinMode(MR1,OUTPUT);
 pinMode(MR2,OUTPUT);
 pinMode(ML1,OUTPUT);
 pinMode(ML2,OUTPUT); 
}
void Stop() {
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, LOW);
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, LOW);} 
 //Stop

void Left() {
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, LOW);
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
}  //Go Left

void Right() {
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, LOW);
}  //Go Right

void Forward() {
  analogWrite(MR1,LOW);
  analogWrite(MR2, HIGH);
  analogWrite(ML1, HIGH);
  analogWrite(ML2, LOW);
}  //Go Forward

};

//#endif 
