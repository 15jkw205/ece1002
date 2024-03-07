//
//                Lab7_distance_serial_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 07 March 2024
//  Assignment: Lab-7
// 
// Problem Statement: Build an Arduino and program that measures the maximum and minimum 
// distance using the ultrasonic sensor.
// 
//
//            ****    PseudoCode Algorithm    ****
//
//
//  Global Variable
//    Float distance = 0.0
//
//  SetUp Function
//    Begin serial communication at a baud rate of 9600
//    Set pin 11 as OUTPUT for triggering the ultrasonic sensor
//    Set pin 8 as INPUT for receiving the echo from the ultrasonic sensor
//  end Setup function
//
//
//  Loop Function
//    Set the trigger pin (pin 11) HIGH for 10 microseconds
//    Delay for 10 microseconds
//    Set the trigger pin LOW
//    Measure the duration for the echo pin (pin 8) to go from LOW to HIGH using pulseIn function
//    Calculate the distance by dividing the pulse duration by 2 and multiplying by the speed of sound
//    Convert the distance from microseconds to inches
//    Print the distance to the serial monitor followed by the unit "inches"
//  end loop function


float distance = 0.0;

void setup()
{
  Serial.begin(9600);   //start the serial monitor at 9600 baud; check setting in IDE matches
  pinMode(11, OUTPUT);  //connected to trigger pin
  pinMode(8, INPUT);    //connected to echo pin
} // end setup() function

void loop()
{ 
  //set the trigger pin high for 10 microseconds
  digitalWrite(11, HIGH);
  delayMicroseconds(10);    // different delay usec
  digitalWrite(11, LOW);  

  //  PulseIn measures the time for the echo pin to go from LOW to HIGH in microseconds
  //  distance is half the pulse time multiplied by speed of sound at 6000 feet altitude
  //   in inches per microsecond
  distance=pulseIn(8,HIGH)/2*0.01242;

  Serial.print(distance);
  Serial.println("     inches");
} // end loop() function
