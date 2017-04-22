// constants won't change. They're used here to set pin numbers:
const int hallPin = 4;     // the number of the hall effect sensor pin
const int hallPin2 = 5;
const int hallPin3 = 6;
const int ledPin =  13;     // the number of the LED pin
// variables will change:
int hallState = 0;          // variable for reading the hall sensor status
int hallState2 = 0;
int hallState3 = 0;

void setup() {

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the hall effect sensor pin as an input:
  pinMode(hallPin, INPUT);
  pinMode(hallPin2, INPUT);
  pinMode(hallPin3, INPUT);

}

void loop(){

  // read the state of the hall effect sensor:
  hallState = digitalRead(hallPin);
  hallState2 = digitalRead(hallPin2);
  hallState3 = digitalRead(hallPin3);

  if (hallState == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  
  if (hallState2 == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }

  if (hallState3 == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
