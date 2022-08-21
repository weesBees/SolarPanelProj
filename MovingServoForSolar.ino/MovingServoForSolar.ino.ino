#include <Servo.h>     
int roof = 0;  
int rear=0;    
int angle1=0;
int angle2=0;
Servo servo1;
Servo servo2;
void setup()   
{  
  servo1.attach(8);
  servo2.attach(9); 
  Serial.begin(9600);
}  
void loop()   
{  
  roof = analogRead(A0);    
  rear= analogRead(A1);
  Serial.print(roof)
  Serial.print("  ")
  Serial.println(rear)
  if(roof>rear){
  servo1.write(90);
  servo2.write(0);
  }
 else{
   servo1.write(0);
   servo2.write(90);
 }
}  