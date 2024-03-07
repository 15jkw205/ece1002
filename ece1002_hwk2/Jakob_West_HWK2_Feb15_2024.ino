// 
//                  Jakob_West_HWK2_Feb20_2024.ino
//
//
// By: Jakob West
// Date: February 20th, 2024
// Class/Section #: ECE-1002-001
// Assignment: HWK-2
//
//
// Hardware: Using the light sensor and a button to control three different LEDs.
//
//
// Problem Statement: Build an Arduino project that uses the Light sensor and a button switch
// to control three LEDs. If the Light sensor shows dark – light the Green LED. If the button
// is pushed – light the Red LED. If both the Light sensor reads dark and the button is pushed
// light the blue LED and play a 2.5 kHz tone.
//
//
//
// **** Pseudocode Algorithm ****
//
// create a global integer variable LED_OnTime = 200 msec
//
// setup()
//
// set pin 4 as input for button with a pullup resistor
// set pin 6 as input for Light sensor
// set pin 8 as output for Green LED
// set pin 9 as output for Red LED
// set pin 10 as output for Blue LED
// set pin 12 as output for the buzzer/speaker

// end setup() function
//
//
// loop()
//
// if ( Light sensor == dark )
//
// Turn on Green LED for LED-On-time (use variable) //
//
// if ( button == pushed )
//
// Turn on Red LED for LED-On-time (use variable)
//
//
// if ( Light sensor == dark && button == pushed ) // compound conditional
//
// Turn on Blue LED for LED-On-time (use variable)
// Play a 2.5 kHz tone

// end loop() function

int LED_OnTime = 200; // 200 msec (global variable)


void setup() {
  pinMode(4, INPUT_PULLUP); // pin 4, input, pullup resistor
  pinMode(6, INPUT); // pin 6, input, light sensor
  pinMode(8, OUTPUT); // pin 8, output, green LED
  pinMode(9, OUTPUT); // pin 9, output, red LED
  pinMode(10, OUTPUT); // pin 10, output, blue LED
  pinMode(12, OUTPUT); // pin 12, output, speaker

} // end setup() function


void loop() {
  
  // If light sensor is dark, turn on green LED for LED_OnTime (200) msecs
  if ( digitalRead(6) == LOW ) {

    digitalWrite(8, HIGH);
    delay(LED_OnTime);
    digitalWrite(8, LOW);
  }

  // If button is pushed, turn on red LED for LED_OnTime msecs
  if ( digitalRead(4) == LOW ) {

    digitalWrite(9, HIGH);
    delay(LED_OnTime);
    digitalWrite(9, LOW);
  }

  // If light senor is dark AND button is pushed, turn on blue LED 
  // for LED_OnTime msecs and play a 2.5kHz tone for LED_OnTime msecs
  if ( (digitalRead(6) == LOW) && (digitalRead(4) == LOW) ) { 

    digitalWrite(10, HIGH);
    delay(LED_OnTime);
    tone(12, 2500, LED_OnTime);
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
  }

} // end loop() function

// Jakob West
