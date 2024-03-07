//
//                Lab7_temp_analog_servo_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 07 March 2024
//  Assignment: Lab-7
// 
// Problem Statement: Build an Arduino and program that uses a servo to measure the temperature
// 
// 
//            ****    PseudoCode Algorithm    ****
//
//
//  Global Variables
//    Float voltage = 0.0
//    Float TemperatureInC = 0.0
//    Float TemperatureInF = 0.0
//    Integer TemperaturePosition = 0
//    Integer ServoPosition = 0
//
//  SetUp Function
//    Initialize the Servo library
//    Attach the servo control wire to pin 9
//    Begin serial communication at a baud rate of 9600
//  end Setup function
//
//
//  Loop Function
//    Read the analog voltage from pin A0 and convert it to millivolts
//    Calculate the temperature in Celsius and Fahrenheit using the TMP36 sensor equation
//    Print the temperature in Celsius to the serial monitor
//    Convert the temperature to an integer value for analog display
//    Map the temperature to the servo position between 15°C and 25°C to control the servo
//    Write the mapped servo position to the servo motor
//    Wait for 250 milliseconds
//  end loop function


#include <Servo.h>


// declare variables for voltage and temp and Servo
float voltage        = 0.0;
float TemperatureInC = 0.0;
float TemperatureInF = 0.0;

int   TemperaturePosition = 0;
int   ServoPosition       = 0;

Servo myservo;

void setup()
{
  // the servo control wire is attached to pin 9
  myservo.attach(9);
  Serial.begin(9600);
} // end setup() function 

void loop()
{ 
  // Check TMP36 voltage, convert to C and F
  voltage = analogRead(A0) * 4.8828125;
  TemperatureInC = (voltage - 500)/10;
  TemperatureInF = TemperatureInC * (9.0 / 5.0) + 32.0;
  Serial.println(TemperatureInC);
  //  change from the float variable TemperatureInC to the integer variable 
  //  TemperaturePosition with a type cast (int) the decimal is lost but the 
  //  analog display is crude and can not show the precision
  TemperaturePosition= (int)TemperatureInC;
   Serial.println(TemperaturePosition);
 
  // map the temperature to the servo postion
  ServoPosition=map(TemperaturePosition, 15, 25, 0, 180);
  Serial.println(ServoPosition);
  myservo.write(ServoPosition);
  
  delay (250);
} // end loop() function
