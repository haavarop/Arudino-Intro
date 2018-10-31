// Mikrofonstyrt motor
// Dette er et alternativ til oppgave 2, siden vi ikke har så mange mikrofoner

const int clockWisePin        = 11;
const int counterClockWisePin = 12; 
const int sensorPin           = 4;
boolean lightOn = false; 
int val = 0; 

void setup(){
  pinMode(clockWisePin,        OUTPUT);
  pinMode(counterClockWisePin, OUTPUT);
  pinMode(sensorPin,           INPUT);
  Serial.begin(9600);
  
}
  
void loop (){
  val = digitalRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal above the threshold value, LED flashes
  
  // Clap detected
  if ( val==1 ) {

    // Turn on the light 
    if ( !lightOn ) {
      turnOnLight();
    }
    
    // Turn off the light) 
    if ( lightOn ) {
      turnOffLight();
    }
    
  }
}

void turnOnLight() {
  digitalWrite(counterClockWisePin, HIGH);
  delay(150);
  digitalWrite(counterClockWisePin, LOW);
  lightOn = true; 
}

void turnOffLight() {
  digitalWrite(clockWisePin, HIGH);
  delay(150);
  digitalWrite(clockWisePin, LOW);
  lightOn = false;
}

