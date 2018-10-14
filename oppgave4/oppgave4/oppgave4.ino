#define triggerPin 8 
#define echoPin 9

void setup() {
  // The Serial monitor can be used print variables
  Serial.begin(9600);
  
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Setup code for the distance sensor
  float duration, distance; 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH); 
  distance = (duration / 2) * 0.0344;

}


// Create an alarm however you want
// Perhaps with some lights and sounds? 
void alarm() {
  
}

