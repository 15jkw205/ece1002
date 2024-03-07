//
//                Lab_2_Touchless_Switch
//
//
//  Name:  Jakob West
//  Class: ECE-1002-001
//  Date: 1 Feb 2024 --> 8 Feb 2024
//  Assignment: Lab-2
//
//
//  Problem Statement: Turn an LED on and off using a photoresistor
//  pin 9 for input and pin 6 for output
//
//
//            ****    PseudoCode Algorithm    ****
//
//  SetUp Function
//    set pin 6 as OUTPUT for light sensor
//    set pin 9 as INPUT for LED
//  end Setup function
//
//  Loop Function
//    if digitalRead(pin 9) === Low {
//      digitalWrite(6, High)
//    }
//    else {
//      digitalWrite(9, Low)
//    }
//  end loop function 





void setup() 
{
  pinMode(6, OUTPUT); //initialize pin 6 as an output to control the LED
  pinMode(9, INPUT); //iniitialze pin 9 as input to read the light sensor

} // end setup function


void loop() 
{
  // if voltage on pin 9 is low, turn on LED
  if (digitalRead(9) == LOW) 
  {
    digitalWrite(6, HIGH);
  }

  // else voltage on pin 9 is high, turn off LED
  else 
  {
    digitalWrite(6, LOW);
  }

} // end loop function
