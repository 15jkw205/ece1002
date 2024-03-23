/*
      ECE 1001/1002  Lab 8 bot moves
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
  //"Forward"
  digitalWrite(AIN2, LOW);  
  digitalWrite(AIN1, HIGH);
  digitalWrite(BIN2, LOW);
  digitalWrite(BIN1, HIGH);
  

  analogWrite(PWMA, 150);
  analogWrite(PWMB, 150);
  delay(500);

  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
  delay(250);

  //Turn one way or the other
  digitalWrite(AIN2, LOW);
  digitalWrite(AIN1, HIGH); 
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);

  analogWrite(PWMA, 256 / 2);
  analogWrite(PWMB, 256 / 2);
  delay(250);

  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
  delay(250);


  //"Reverse"

  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);

  analogWrite(PWMA, 256 / 2);
  analogWrite(PWMB, 256 / 2);
  
  delay(250);
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  //infinite while loop to stop the program
  while (true)
  {
    delay(10);
  }
} // end loop() function
*/



// Sign-off loop() function 



void loop()
{
  // Delay for 0.75 second before starting
  delay(750);

  // Drive forward for 2-3 feet
  digitalWrite(AIN2, LOW);
  digitalWrite(AIN1, HIGH);
  analogWrite(PWMA, 255 / 3); // Assuming 30% power for forward motion
  digitalWrite(BIN2, LOW);
  digitalWrite(BIN1, HIGH);
  analogWrite(PWMB, 255 / 3); // Assuming 30% power for forward motion
  delay(3000); // Adjust delay for driving 2-3 feet
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  // Pause for 1 second before turning
  delay(1000);

  // Turn left (assuming 90 degrees)
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMA, 255 / 2); // Assuming 50% power for turning
  analogWrite(PWMB, 255 / 2); // Assuming 50% power for turning
  delay(880); // Adjust delay for 90-degree turn
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  // Pause for 1 second before driving in reverse
  delay(1000);

  // Drive in reverse for 2-3 feet
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255 / 2); // Assuming 50% power for reverse motion
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255 / 2); // Assuming 50% power for reverse motion
  delay(3000); // Adjust delay for driving 2-3 feet in reverse
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

    // Pause for 1 second before looping again
  delay(1000);
} // end loop function 

