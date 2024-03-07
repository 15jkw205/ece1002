/*
*     ECE 1001/1002  Lab 1 blink lights
*          John Lindsey   May 2019
*/
void setup() 
{
  pinMode(8, OUTPUT);   // initialize pin 8 as digital output to control the LED
}

void loop() 
{
 // use delays and pin 8 to blink an LED on and off
 digitalWrite(8, HIGH); 
 delay(1500);
 digitalWrite(8, LOW);
 delay(1000);
}
