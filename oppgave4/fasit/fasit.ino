
#define triggerPin 8 
#define echoPin 9  

const int buzzerPin = 7;

const int bluePin = 2;
const int redPin = 3; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
}

void loop() {
  float duration, distance; 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH); 
  distance = (duration / 2) * 0.0344;
  Serial.println(distance);

  if(distance < 10) {
    Serial.println("ALARM!!!!");
    alarm();
  }
  
  delay(100);
}

void alarm() {
  for(int i = 0; i < 4; i++){
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
    tone(buzzerPin, 1000, 250);
    delay(250);
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
    tone(buzzerPin, 10000, 250);
    delay(250);
  }
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(500); 
}

