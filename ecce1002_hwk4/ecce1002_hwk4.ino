//
//            Jakob_West_HWK4_3March2024.ino
//
//
// By: Jakob West
// Date: March 19th, 2024
// Class/Section #: ECE-1002-001
// Assignment: HWK-4
// 
// Refer to problem statement and pseudocode on given sheet
// 


#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // LCD setup for 16x2 display

const char letter = 'J'; // char 'J' for Jakob
unsigned int row = 0; // start row zero, top row
unsigned int col = 0; // start column zero, left column

void setup() 
{
  lcd.begin(16, 2);   // starting the LCD as a 16 character, 2 line display
  pinMode(7, INPUT_PULLUP); // set digital pin 7 as input pullup
  pinMode(A0, OUTPUT); // set analog input pin A0 as digital output for Green LED
  pinMode(A1, OUTPUT); // set analog input pin A1 as digital output for Red LED
  lcd.clear();

} // end setup() function


void loop() 
{
  while (digitalRead(7) == HIGH) {
    lcd.clear(); // clear LCD
    digitalWrite(A0, LOW); // turn Off Green LED
    digitalWrite(A1, LOW); // turn Off Red LED
  }
  
  row = 0; // top LCD row
  digitalWrite(A0, HIGH); // turn On Green LED
  digitalWrite(A1, LOW); // turn Off Red LED
  
  for (col = 0; col < 16; col++) {
    lcd.clear(); // clear LCD
    lcd.setCursor(col, row); // set cursor position
    lcd.print(letter); // print char letter
    delay(500); // delay 0.5 sec
  }
  
  row = 1;
  digitalWrite(A0, LOW); // turn Off Green LED
  digitalWrite(A1, HIGH); // turn On Red LED
  
  for (col = 0; col < 16; col++) {
    lcd.clear(); // clear LCD
    lcd.setCursor(col, row); // set cursor position
    lcd.print(letter); // print char letter
    delay(500); // delay 0.5 sec
  }

} // end loop() function
// Jakob West 
