int potentiometerPIN = 2;   
#include <Servo.h>   
   // It selects the LED pin  
int value = 0;     
  // value initialized to store the coming value from the sensor  
int angle1=0;
int angle2=0;
Servo servo1;
Servo servo2;
void setup()   
{  
  // The LED pin is declared as the output pin 
  servo1.attach(8);
  servo2.attach(9); 
  Serial.begin(9600);
}  
void loop()   
{  
  value = analogRead(potentiometerPIN);    // It reads the value from the sensor  
  angle1=map(value,0,1023,0,100);
  angle2=map(value,0,1023,100,0);
  // Serial.println(angle*-1\);
  servo1.write(angle1);
  servo2.write(angle2);
}  