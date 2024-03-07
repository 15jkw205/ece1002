//
//                Lab6_temp_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 07 March 2024
//  Assignment: Lab-6
// 
// Problem Statement: Build an Arduino and program that measures the room temperature
// using the temperature sensor
// 
// 
//            ****    PseudoCode Algorithm    ****
//
//
//  Global Variables
//    Float voltage = 0.0
//    Float TemperatureInC = 0.0
//    Float TemperatureInF = 0.0
//
//  SetUp Function
//    Initialize the LiquidCrystal library
//    Configure the LCD pins: rs=13, enable=12, d4=11, d5=10, d6=9, d7=8
//    Start the LCD as a 16 character, 2 line display
//    Clear the LCD display
//  end Setup function
//
//
//  Loop Function
//    Read the analog voltage from pin A0 and convert it to millivolts
//    Calculate the temperature in Celsius and Fahrenheit using the TMP36 sensor equation
//    Clear the LCD display
//    Print the voltage value followed by "mV" on the second line of the LCD display
//    Print the temperature in Celsius followed by "deg C" on the first line of the LCD display
//    Wait for 1 second
//    Clear the LCD display
//    Print the voltage value followed by "mV" on the second line of the LCD display
//    Print the temperature in Fahrenheit followed by "deg F" on the first line of the LCD display
//    Wait for 1 second
//  end loop function


// this next line makes the liquid cyrstal display library available to the program
#include <LiquidCrystal.h>

// configure the liquid crystal and Arduino pin connections
// LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
// declare variables for voltage and temp
float voltage = 0.0;
float TemperatureInC = 0.0;
float TemperatureInF = 0.0;

void setup()
{
  lcd.begin(16, 2);   //starting the LCD as a 16 character, 2 line display
  lcd.clear();
} // end setup() function

void loop()
{ 
  // Check TMP36 voltage, convert to C and F
  voltage = analogRead(A0) * 4.8828125;
  TemperatureInC = (voltage - 500)/10;
  TemperatureInF = TemperatureInC * (9.0 / 5.0) + 32.0;
  // Display temp in C for 0.5 sec
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(voltage);
  lcd.setCursor(11, 1);
  lcd.print("mV");
  lcd.setCursor(0, 0);
  lcd.print(TemperatureInC);
  lcd.setCursor(11, 0);
  lcd.print("deg C");
  delay (1000);
  // Display temp in F for 0.5 sec
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(voltage);
  lcd.setCursor(11, 1);
  lcd.print("mV");
  lcd.setCursor(0, 0);
  lcd.print(TemperatureInF);
  lcd.setCursor(11, 0);
  lcd.print("deg F");
  delay (1000);
} // end loop function 
