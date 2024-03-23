/*
      ECE 1001/1002  Lab 8 basic motor control
           John Lindsey   June 2019
*/
const int AIN1 = 11;
const int AIN2 = 12;
const int PWMA = 10;
const int BIN1 = 8;
const int BIN2 = 7;
const int PWMB = 9;

void setup()
{
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
} // end setup() function 

/*
void loop()
{
  // pause for 1/2 second--get ready!
  delay(500);
  
  //"Forward" motor A at 30% for 0.5 seconds
  digitalWrite(AIN2, LOW);                        // open switch (OFF) first
  digitalWrite(AIN1, HIGH);                       // then close (ON) second
  analogWrite(PWMA, 255 / 3);
  delay(500);                        // only A motor runs for 0.5 sec
  analogWrite(PWMA, 0);              // turn A motor off
  
  //"Forward" motor B at 30% for 0.5 seconds
  digitalWrite(BIN2, LOW);
  digitalWrite(BIN1, HIGH);
  analogWrite(PWMB, 255 / 3);     // power ~ 30% = (255/3)
  delay(500);                     // only B motor run for 0.5 sec
  analogWrite(PWMB, 0);
  
  // pause for 1/2 second
  delay(500);
  
  //"Reverse" motor A at 50% for 0.5 seconds
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255/2);       // power ~ 50%
  delay(500);
  analogWrite(PWMA, 0);
  
  //"Reverse" motor B at 50% for 0.5 seconds
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255/2);
  delay(500);
  analogWrite(PWMB, 0);
} // end loop() function
*/

// Sign-off loop() function


void loop()
{
  // Pause for 1/2 second
  delay(500);

  // Forward motor A at 30% power for 2 seconds
  digitalWrite(AIN2, LOW);
  digitalWrite(AIN1, HIGH);
  analogWrite(PWMA, 255 / 3);

  // Forward motor B at 30% power for 2 seconds
  digitalWrite(BIN2, LOW);
  digitalWrite(BIN1, HIGH);
  analogWrite(PWMB, 255 / 3);
  delay(2000);
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  // Pause for 1/2 second
  delay(500);

  // Turn left for 0.5 seconds
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMA, 255 / 2); // Assuming full power for the turn
  analogWrite(PWMB, 255 / 2);
  delay(500);
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  // Pause for 1/2 second
  delay(500);

  // Reverse motor A at 50% power for 2 seconds
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255 / 2);

  // Reverse motor B at 50% power for 2 seconds
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255 / 2);
  delay(2000);
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
} // end loop function


