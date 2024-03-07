//
//                Lab_4a_simple_text_display
//
//
//  Name: Jakob West
//  Class: ECE-1002-001
//  Date: 20 Feb 2024
//  Assignment: Lab-4
//
//
//  Problem Statement: Write to a LCD display
//
//
//            ****    PseudoCode Algorithm    ****
//
//
//  SetUp Function
//    Initialize the LiquidCrystal library
//    Configure the LCD pins: rs=13, enable=12, d4=11, d5=10, d6=9, d7=8
//    Start the LCD as a 16 character, 2 line display
//    Clear the LCD display
//  end Setup function
//
//  Loop Function
//    Set the cursor position to (0, 0) on the LCD display
//    Print "Jakob" on the first line of the LCD display
//
//    Set the cursor position to (0, 1) on the LCD display
//    Print "West" on the second line of the LCD display
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
} // end setup() function

void loop()
{
  lcd.setCursor(0, 0);         //position 0,0 is the top left corner
  lcd.print("Israel");  //Arduino      //the display will print what is between the double quotes

  lcd.setCursor(0, 1);         //Set the x, y position for the next print command; x=0 is left, y=0 is top
  lcd.print("Gonzalez"); // testo display    
} // end loop() function
