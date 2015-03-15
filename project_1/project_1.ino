// project 1: basic digital logic

// Constants
const int button1Pin = 9;
const int button2Pin = 10;
const int led1Pin = 11;
const int led2Pin = 12;
const int led3Pin = 13;

// the setup function runs once when you press reset or power the board
// It should be used to initialize the hardware you way you would like it
// prior to your main program running
void setup() {
  // initialize digital pins 9 and 10 as inputs.
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  // initialize digital pins 11,12, and 13 as outputs.
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

// the loop functions runs over and over again forever
void loop() {
  int button1State = 0;
  int button2State = 0;
  // read the state of button 1
  button1State = digitalRead(button1Pin);
  // read the state of button 2
  button2State = digitalRead(button2Pin);
  
  // Light up led1 if button 1 is pushed
  if (button1State == 1) {
    digitalWrite(led1Pin, 1);
  } else {
    digitalWrite(led1Pin, 0);
  }
  // light up led2 if button 2 is NOT pushed
  if (button2State == 1) {
    digitalWrite(led2Pin, 1);
  } else {
    digitalWrite(led2Pin, 0);
  }
  // light up led3 if both buttons are pushed
  if ((button1State == 1) && (button2State == 1)) {
    digitalWrite(led3Pin, 1);
  } else {
    digitalWrite(led3Pin, 0);
  }
  
}
