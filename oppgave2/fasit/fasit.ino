// Lystyrt motor
/*
 * Selv om dette er en fasit kan det hende at verdiene for å styre motoren er litt feil
 * Prøv deg litt frem, ser hva som skjer i Serial Monitor
 */

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

  // Initial setup
  if(analogRead(sensorPin) < 2) { 
    lightOn = false; 
  } else {
    lightOn = true;
  }
}

// Turn the light off
void spinClockWise() {
  digitalWrite(clockWisePin, HIGH);
  delay(150);
  digitalWrite(clockWisePin, LOW);
  lightOn = false; 
}

// Turn the light on
void spinCounterClockWise() {
  digitalWrite(counterClockWisePin, HIGH);
  delay(150);
  digitalWrite(counterClockWisePin, LOW);
  lightOn = true;
}

void loop() {
  // Check Serial Montor
  int pinValue = analogRead(sensorPin);
  Serial.println(pinValue);

  //Spin the motor clockWise
  if ( pinValue <= 2 && lightOn ) {
    spinClockWise(); 
  }

  //Spin the motor counterClockWise
  if ( pinValue > 2 && !lightOn ) {
    spinCounterClockWise();
  }
    
  delay(10);
}

