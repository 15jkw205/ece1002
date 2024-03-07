//
//                Lab_5g_red_small
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 27 Feb 2024
//  Assignment: Lab-5
// 
// 
// Problem Statement: Build an Arduino and the program where red gets smaller as counter increases, 
// and green and blue increase as the counter goes up. 
// 
// 
//            ****    PseudoCode Algorithm    ****
//
//
//  Global Variable
//    Integer loopyCounter
//
//  SetUp Function
//    Set pin 9 as OUTPUT for controlling the Red LED
//    Set pin 10 as OUTPUT for controlling the Green LED
//    Set pin 11 as OUTPUT for controlling the Blue LED
//  end Setup function
//
//  Loop Function
//    Initialize loopyCounter to 0
//    While loopyCounter is less than 100:
//      Set the brightness of the Red LED using PWM (pulse-width modulation) with a value of (255 - loopyCounter)
//      Set the brightness of the Green LED using PWM with a value of loopyCounter
//      Set the brightness of the Blue LED using PWM with a value of loopyCounter
//      Wait for a delay determined by (255 - loopyCounter)
//      Increment loopyCounter by 1
//  end loop function


int loopyCounter;

void setup()
{
  pinMode(9, OUTPUT);   // initialize pin 9 as digital output to control the Red LED
  pinMode(10, OUTPUT);  // initialize pin 10 as digital output to control the Green LED
  pinMode(11, OUTPUT);  // initialize pin 11 as digital output to control the Blue LED

} // end setup() function

void loop()
{
  loopyCounter = 0;
  while (loopyCounter < 100)
  {
    analogWrite(9, 255-loopyCounter);
    analogWrite(10, loopyCounter);
    analogWrite(11, loopyCounter);
    delay((255-loopyCounter));
    loopyCounter = loopyCounter + 1;
  }
  
} // end loop() function

