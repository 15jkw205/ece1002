//
//                Lab_5a_digital_light_control
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 27 Feb 2024
//  Assignment: Lab-5
// 
// 
// Problem Statement: Program and build the Arduino to go from red, blue, 
// green to a blend of the lights using the given program. 
// 
// 
//          ****    PseudoCode Algorithm    ****
//
//  SetUp Function
//    Set pin 9 as OUTPUT for controlling the Red LED
//    Set pin 10 as OUTPUT for controlling the Green LED
//    Set pin 11 as OUTPUT for controlling the Blue LED
//  end Setup function
//
//  Loop Function
//    Blink the Red LED:
//      Turn on the Red LED
//      Wait for 250 milliseconds
//      Turn off the Red LED
//      Wait for 250 milliseconds
//
//    Blink the Green LED:
//      Turn on the Green LED
//      Wait for 250 milliseconds
//      Turn off the Green LED
//      Wait for 250 milliseconds
//
//    Blink the Blue LED:
//      Turn on the Blue LED
//      Wait for 250 milliseconds
//      Turn off the Blue LED
//      Wait for 250 milliseconds
//
//    Turn on all three LEDs simultaneously:
//      Turn on the Red LED
//      Turn on the Green LED
//      Turn on the Blue LED
//      Wait for 1000 milliseconds
//      Turn off all three LEDs
//      Wait for 250 milliseconds
//  end loop function


void setup()
{
  pinMode(9, OUTPUT);   // initialize pin 9 as digital output to control the Red LED
  pinMode(10, OUTPUT);  // initialize pin 10 as digital output to control the Green LED
  pinMode(11, OUTPUT);  // initialize pin 11 as digital output to control the Blue LED
  
} // end setup() function 

void loop()
{
  //blink red
  digitalWrite(9, HIGH);
  delay(250);
  digitalWrite(9, LOW);
  delay(250);

  // blink green
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(250);

  // blink blue
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  delay(250);

  //all three on
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(250);

} // end loop() function 
