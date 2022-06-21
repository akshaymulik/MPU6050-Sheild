/*
  Turns LEDs on and off, on pins 6 and 5 with 100ms delay.
  modified 20 June 2022
  by Akshay S Mulik
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);    // turn the LED on
  digitalWrite(6,LOW);      // turn the LED off
  delay(100);               // wait for a second
  digitalWrite(5, LOW);    // turn the LED off
  digitalWrite(6, HIGH);   // turn the LED on
  delay(100);              // wait for a second
}
