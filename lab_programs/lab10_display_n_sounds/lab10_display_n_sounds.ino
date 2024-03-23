

# include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // LCD setup for 16x2 display

void setup() 
{
  lcd.begin(16, 2); // 16 characters, 2 lines 
  pinMode(7, INPUT_PULLUP); // digital pin 7 as input_pullup 
  lcd.clear(); // clear LCD

} // end setup() function


void loop() {

  while (digitalRead(7) == HIGH) 
  { 
    lcd.clear(); // clear LCD
  }

  unsigned int col = 0; // start from the first column
  unsigned int row = 1; // second row 
  char letter = 'f';
  bool forward = true; // flag to indicate forward or backward movement


  /*
  // Part 1
  while (col < 16) 
  { 
    lcd.clear(); 
    lcd.setCursor(col, row); // set cursor position 
    lcd.print(letter); 
    delay(750); // delay 0.75 sec 
    col++; 

    if (col >= 16) { 
      col = 0;
    }

  } // end while loop
  */


  /*
  // Part 2

  while (col < 16)
  { 
    lcd.clear(); 
    lcd.setCursor(col, row); 
    lcd.print(letter);
    delay(750); 
    col++;

    if (row == 0)
    { 
      row = 1; 
    }

    else 
    {
      row = 0; 
    }

    if (col >= 16) 
    { 
      delay(750);
    }

  } // end while loop 
  */ 


  // Part 3 

  while (col < 16 && letter == 'f') 
  { 
    lcd.clear(); 
    lcd.setCursor(col, row); 
    lcd.print(letter);
    delay(750); 
    col++; 

    if (row == 0) 
    { 
      row = 1;
    }

    else 
    {
      row = 0;
    }

  } // end while loop 


  // Finished the 'f' cycle, now on to 'e' cycle
  row = 1;
  letter = 'e';

  while (col >= 0 && letter == 'e')
  { 
    lcd.clear(); 
    lcd.setCursor(col, row);
    lcd.print(letter); 
    delay(250);
    col--;

    if (row == 0) 
    { 
    row = 1;
    }

    else 
    {
      row = 0;
    }

    if (col <= 0) 
    { 
      letter = 'f' 
      
    }

  } // end while loop 


  // Part 4



} // end loop() function


// Jakob West
