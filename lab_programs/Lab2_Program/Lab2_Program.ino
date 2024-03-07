/*
*     ECE 1001/1002  Lab 2 light sensor
*          John Lindsey   June 2019
*/



void setup()
{
  pinMode(8, OUTPUT);   // initialize pin 8 as an output to control the LED
  pinMode(7, INPUT);   // initialize pin 7 as an input to read the light sensor
}



  void loop ()
  {
    
    if (digitalRead(7) == LOW) 
    {
      // the photoresistor has a high resistance in the dark, making the 
      // voltage on pin 7 low; when it's dark, we want the LED on
      digitalWrite(8, HIGH);
    }
    else
    {
      // If it's not dark, then it must be light and the LED can be off
      digitalWrite(8, LOW);
    }
  
  }
