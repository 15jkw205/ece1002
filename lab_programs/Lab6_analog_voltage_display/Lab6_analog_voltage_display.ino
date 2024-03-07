//
//                Lab6_analog_voltage_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 07 March 2024
//  Assignment: Lab-6
// 
// Problem Statement: Build an Arduino and program where the voltage of the system is displayed 
// and a light sensor affects the read voltage
// 
//           ****    PseudoCode Algorithm    ****
//
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
//    Set the cursor position to (0, 0) on the LCD display
//    Print "Raw Value:" on the first line of the LCD display
//    Set the cursor position to (11, 0) on the LCD display
//    Print the analog value read from pin A0 on the first line of the LCD display
//    Set the cursor position to (0, 1) on the LCD display
//    Print "mV:" on the second line of the LCD display
//    Set the cursor position to (4, 1) on the LCD display
//    Print the analog value read from pin A0 converted to millivolts on the second line of the LCD display
//    Wait for 100 milliseconds
//    Clear the LCD display
//  end loop function


// this next line makes the liquid cyrstal display library available to the program
#include <LiquidCrystal.h>

// configure the liquid crystal and Arduino pin connections
// LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup()
{
  lcd.begin(16, 2);   //starting the LCD as a 16 character, 2 line display
  lcd.clear();
} // end setup function

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("Raw Value:");
  lcd.setCursor(11, 0);
  lcd.print(analogRead(A0));
  lcd.setCursor(0, 1);
  lcd.print("mV:");
  lcd.setCursor(4, 1);
  lcd.print(analogRead(A0) * 4.8828);  // ADC reads 1024 steps, convert to mV
  delay (100); //delay so the reading doesn't change too often
  lcd.clear();
} // end loop function
