
#include <Servo.h>  // servo library


Servo servo1;  // servo control object

// analog input initialization 
int sensorPin = A0; 

void setup()
{
  servo1.attach(9);

}


void loop()
{
    
  int sensorValue;

  // read sensor value
  sensorValue = analogRead(sensorPin);
  
  // map the inout value to usable range
  int tilt =  map(sensorValue , 0, 1023, 13, 168 );

  // writes to the servo so it would tilt
  servo1.write( tilt );    
 
}

