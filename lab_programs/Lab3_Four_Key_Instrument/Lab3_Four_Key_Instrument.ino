//
//                Lab_3_Musical_Robotics (Four Key Instrument)
//
//
//  Name:  Jakob West
//  Class: ECE-1002-001
//  Date: 20 Feb 2024
//  Assignment: Lab-3
//
//
//  Problem Statement: Demonstrate the 4 key instrument and answer the questions 
//  by trying to "break" it.
//
//
//            ****    PseudoCode Algorithm    ****
//
//  SetUp Function
//    set pin 9 as OUTPUT for the speaker
//    set pins 4, 5, 6, 7 as INPUT_PULLUP for buttons
//  end Setup function
//
//  Loop Function
//    if digitalRead(pin 4) == LOW {
//      Play tone of frequency 247 Hz for 250 milliseconds on pin 9
//    }
//    else if digitalRead(pin 5) == LOW {
//      Play tone of frequency 261 Hz for 250 milliseconds on pin 9
//    }
//    else if digitalRead(pin 6) == LOW {
//      Play tone of frequency 294 Hz for 250 milliseconds on pin 9
//    }
//    else if digitalRead(pin 7) == LOW {
//      Play tone of frequency 330 Hz for 250 milliseconds on pin 9
//    }
//    else {
//      Stop playing tone on pin 9
//    }
//  end loop function

// 
void setup()
{
  // initialize pin 9 as an output for the speaker
  pinMode(9, OUTPUT);   

  //initialize pins 4, 5, 6, 7 as button inputs with internal pullup resistors
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

void loop ()
{
  if (digitalRead(4) == LOW)
  {
    tone(9, 247, 250);
  }
  else if (digitalRead(5) == LOW)
  {
    tone(9, 261, 250);
  }
  else if (digitalRead(6) == LOW)
  {
    tone(9, 294, 250);
  }
  else if (digitalRead(7) == LOW)
  {
    tone(9, 330, 250);
  }
  else
  {
    noTone(9);
  }
}
