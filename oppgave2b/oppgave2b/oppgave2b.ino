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
  
  /* YOUR CLAP DETECTION CODE HERE */ 
}


