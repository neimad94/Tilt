
#include <LiquidCrystal.h>

// These are the global variable for the photo resister

const int sensorPin = 0;
const int ledPin = 9;
int lightLevel 

// Initialize the library with the pins we're using.

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  // We're using one that's 2 lines of 16 characters,
  // so we'll initialize it:
  lcd.begin(16, 2);
  
  // sets the pin to output 
  
  pinMode(ledPin, OUTPUT);
 
  // This command will clear the screen

  lcd.clear();

  // command below is used to print on the screen
  
  lcd.print("Let the games begain");

}

void loop()
{
  // checks the input from the photo resister
  
  lightLevel = analogRead(sensorPin);

  // if the photo resister is covered with the object
  // then the lcd would print.

 if( lightLevel == HIGH ){
  
  lcd.clear();
  lcd.print("YOU WIN!!");
  
 }

  
 
}

 


