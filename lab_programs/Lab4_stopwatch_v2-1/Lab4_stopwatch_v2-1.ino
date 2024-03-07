//
//                Lab_4b_stopwatch_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 20 Feb 2024
//  Assignment: Lab-4
//
//
//  Problem Statement: Use the program and Arduino from the lcd display to display a stopwatch 
//  timer of how long the program has been running. 
//
// 
//          ****    PseudoCode Algorithm    ****
//
//  SetUp Function
//    Initialize the LiquidCrystal library
//    Configure the LCD pins: rs=13, enable=12, d4=11, d5=10, d6=9, d7=8
//    Start the LCD as a 16 character, 2 line display
//    Clear the LCD display
//    Set pin 7 as INPUT_PULLUP
//  end Setup function
//
// 
//  Loop Function
//    Clear the LCD display
//    Set the cursor position to (0, 0) on the LCD display
//    Print "time ms:" on the first line of the LCD display
//    Set the cursor position to (9, 0) on the LCD display
//    Print the current millis() value on the first line of the LCD display
//
//    If pin 7 is LOW
//      Set the cursor position to (0, 1) on the LCD display
//      Print "lap time:" on the second line of the LCD display
//      Set the cursor position to (9, 1) on the LCD display
//      Print the current millis() value on the second line of the LCD display
//      Wait for 300 milliseconds
//    Else
//      Wait for 10 milliseconds
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
  pinMode(7, INPUT_PULLUP);
} // end setup() function


void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("time ms:");
  lcd.setCursor(9, 0);
  lcd.print(millis());
  if (digitalRead(7) == 0)
  {
    lcd.setCursor(0, 1);
    lcd.print("lap time:");
    lcd.setCursor(9, 1);
    lcd.print(millis());
    delay(300);
  } 
  else
  {
    delay(10);
  }
} // end loop() function
