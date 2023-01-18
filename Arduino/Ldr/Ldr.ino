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
int pos1 = 0;
int pos2 = 0;


void setup(){
  Serial.begin(9600);
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3, INPUT);
  pinMode(ldr4, INPUT);

  servo1.attach(9);
  servo2.attach(10);
  
}

void loop(){

  ldr1State = analogRead(ldr1);
  ldr2State = analogRead(ldr2);
  ldr3State = analogRead(ldr3);
  ldr4State = analogRead(ldr4);






  if(ldr1State > ldr2State && ldr4State > ldr3State){

  }















  Serial.print(ldr1State);
  //Serial.print(ldr2State);
  //Serial.print(ldr3State);
  //Serial.print(ldr4State);

  Serial.println();
  //delay(300);

}