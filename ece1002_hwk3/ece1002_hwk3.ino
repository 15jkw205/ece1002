// 
//                  Jakob_West_HWK3_Feb27_2024.ino //filename
//
//
// By: Jakob West
// Date: 27 Feb 2024
// Class/Section #: ECE-1002-001
// Assignment: HWK-3
//
//
// Hardware: Two buttons with GPIO pullup resistors.
// The LCD.
//
//
// Problem Statement: Build an Arduino project that uses two buttons and the LCD. One button will
// clear the LCD and re-initialize counter variable to zero. If button == pushed, clear LCD
// and counter = 0.
// The second button will enter a while loop and increment the counter variable by one
// and display value on LCD. While button == pushed, counter = counter + 1 and write counter
// value to display.
// Note: 16-bit integer range of -32,768 to 32,767. Then rolls over to zero.
//
// **** Pseudocode Algorithm ****
//
// create a global integer variable counter and initialize to zero
//
// setup()
//
// set pin 4 as input for button one with a pullup resistor
// set pin 5 as input for button two with a pullup resistor
// setup pins for LCD – use Lab-4 as your guide
//
//
// loop()
//
// if ( button one pushed )
//
// clear LCD // command from Lab-4
//
// counter = 0
//
//
// while( button two pushed )
//
// counter = counter + 1
//
// write counter value to LCD // commands from Lab-4
//
// end while loop
//
//
// end loop

# include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // Initialize the LiquidCrystal Library

int counter = 0; // Global variable

void setup() 
{
  
  pinMode(4, INPUT_PULLUP); // button one
  pinMode(5, INPUT_PULLUP); // button two

  lcd.begin(16, 2); // Setup pins for LCD
  lcd.clear(); // Clear the LCD display

} // end setup() function

void loop() 
{
  // If button one is pushed 
  if (digitalRead(4) == LOW) 
  { 
    lcd.clear(); // Clear LCD display
    counter = 0; // set counter to 0
  }

  // While button two is pushed 
  while (digitalRead(5) == LOW) 
  {
    counter = counter + 1; // Increment counter
    lcd.setCursor(0, 0); // Set cursor position to (0, 0)
    lcd.print(counter); // Write counter value to LCD

  } // end while loop

} // end loop() function
// Jakob West
