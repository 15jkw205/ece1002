//
//                Lab_1_Blink
//
//
//  Name:  Jakob West
//  Class: ECE-1002-001
//  Date: 25 Jan 2024
//  Assignment: Lab-1
//
//
//  Problem Statement: Flash an LED on pin 13, On 0.5 sec, Off 0.5 sec.
//
//
//            ****    PseudoCode Algorithm    ****
//
//  SetUp Function
//    set pin 13 as OUTPUT
//    set LED Off
//  end Setup function
//
//  Loop Function
//    Turn ON LED
//    delay 0.5 sec = 500 msec
//
//    Turn Off LED
//    delay 0.5 sec = 500 msec
//  End Loop Function
//
//

void setup() 
{
  
  // Set pin 13 as an output
  pinMode(13, OUTPUT);
} // end setup function

void loop() 
{

   // Turn on the LED
  digitalWrite(13, HIGH);
  delay(500); // Wait for 0.5 seconds (500 milliseconds)

  // Turn off the LED
  digitalWrite(13, LOW);
  delay(500); // Wait for 0.5 seconds (500 milliseconds)
} // end loop function
