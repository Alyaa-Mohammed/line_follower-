#define IN1 10
#define IN2 9
#define IN3 12
#define IN4 11
#define sensorR 4
#define sensorC  3
#define sensorL  2
void forword(){digitalWrite(IN1, HIGH);digitalWrite(IN2, LOW);digitalWrite(IN3, HIGH);digitalWrite(IN4, LOW);}
void backword(){digitalWrite(IN1, LOW);digitalWrite(IN2, HIGH);digitalWrite(IN3, LOW);digitalWrite(IN4, HIGH);}
void left(){digitalWrite(IN1, LOW);digitalWrite(IN2, LOW);digitalWrite(IN3, HIGH);digitalWrite(IN4, LOW);}
void right(){digitalWrite(IN1, HIGH);digitalWrite(IN2, LOW);digitalWrite(IN3, LOW);digitalWrite(IN4, LOW);}
void stopp(){digitalWrite(IN1, LOW);digitalWrite(IN2, LOW);digitalWrite(IN3, LOW);digitalWrite(IN4, LOW);}
 
int sl=0;
int sr=0;
int sc=0;

void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

pinMode(sensorR, INPUT);
pinMode(sensorL, INPUT);
pinMode(sensorC, INPUT);
Serial.begin(9600);
}
void loop(){
sl=digitalRead(sensorL);
sc=digitalRead(sensorC);
sr=digitalRead(sensorR);
if (sl==1&&sr==0&&sc==0)left();
else if (sl==0&&sr==1&&sc==0)right();

else forword();
}
