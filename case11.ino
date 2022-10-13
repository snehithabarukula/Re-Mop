// C++ code
//
#include <Servo.h>  
Servo myservo;   
 
const int trig = 4;  
const int echo = 3;  
int green = 2;
long duration,cm;  

void setup()
{ 
  pinMode(trig, OUTPUT);  
  pinMode(echo, INPUT);   
  pinMode(green, OUTPUT);
  myservo.attach(7); 
  myservo.write(0);
  
}

void working()   
{  
  //Serial.begin(9600);  
  digitalWrite(trig, LOW);  
  delay(100);  
  digitalWrite(trig, HIGH);  
  delay(100);  
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);  
  cm = 0.034*(duration/2);  
  //Serial.println(distance);  
  if (cm <= 300 && cm>15)  
  { 
    
   myservo.write(180);  
   digitalWrite(green,HIGH); 
   delay(1000);  
  }
  else   
  {   
   digitalWrite(green,LOW);
   myservo.write(0);  
  } 
  
    
}

void loop()
{
  working();
}