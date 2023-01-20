#include <Servo.h>

int ldr1 = A0;
int ldr2 = A1;
int ldr3 = A2;
int ldr4 = A3;

int ldr1State = 0;
int ldr2State = 0;
int ldr3State = 0;
int ldr4State = 0;

Servo servo1;
Servo servo2;
int pos1 = 90;
int pos2 = 90;


void setup(){
  Serial.begin(9600);
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3, INPUT);
  pinMode(ldr4, INPUT);

  servo1.attach(10);
  servo2.attach(11);
  
}

void loop(){

  ldr1State = analogRead(ldr1);
  ldr2State = analogRead(ldr2);
  ldr3State = analogRead(ldr3);
  ldr4State = analogRead(ldr4);

  int val1 = sqrt((ldr1State - ldr3State) * (ldr1State - ldr3State));
  int val2 = sqrt((ldr2State - ldr4State) * (ldr2State - ldr4State));
  Serial.println(val1);




  if(pos1 >= 170){
    pos1 = 170;
  }

  if(pos1 <= 10){
    pos1 = 10;
  }






  if(pos2 >= 170){
    pos2 = 170;
  }
  
  
  if(pos2 <= 10){
    pos2 = 10;
  }




  

  if(val1 > 100 && ldr1State > ldr3State){
    pos1 = pos1 + 1;
      
    }


  if(val1 > 100 && ldr1State < ldr3State){
    pos1 = pos1 - 1;
      
    }





  if(val2 > 100 && ldr2State > ldr4State){
    pos2 = pos2 + 1;
      
    }


  if(val2 > 100 && ldr2State < ldr4State){
    pos2 = pos2 - 1;
      
    }


  else{
    servo1.write(pos1);   
    servo2.write(pos2);
    delay(15);  

  }

  servo1.write(pos1);   
  servo2.write(pos2);
  delay(15);  

  //Serial.println(servo1.read());
  

}