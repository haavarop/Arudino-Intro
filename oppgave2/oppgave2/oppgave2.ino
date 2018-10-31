// Lystyrt motor

const int clockWisePin = 12; 
const int counterClockWisePin = 11; 

int sensorPin = A0;
bool lightOn; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin,           OUTPUT);
  pinMode(clockWisePin,        OUTPUT);
  pinMode(counterClockWisePin, OUTPUT); 

  /* Extra setup code uere */
}

void loop() {
  // Check Serial Montor 
  int pinValue = analogRead(sensorPin);
  Serial.println(pinValue);

  //Spin the motor clockWise
  
  /* YOUR CODE HERE */

  //Spin the motor counterClockWise
    
  delay(10);
}

void spinClockWise() {
  /* YOUR CODE HERE */
}

void spinCouterClockWise() {
  /* YOUR CODE HERE */
}

