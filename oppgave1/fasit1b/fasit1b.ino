
const int redPin   = 11; 
const int greenPin = 12;
const int bluePin  = 13;  
const int delayValue = 2000; 

void setup() {
  pinMode(redPin,   OUTPUT);
  pinMode(bluePin,  OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void lightColor (int red, int green, int blue) { 
  digitalWrite(redPin, red);
  digitalWrite(greenPin, green); 
  digitalWrite(bluePin, blue);
} 

void loop() {

  // Your task: Make the colors red, blue, green, teal, and purple
  lightColor(HIGH, LOW, LOW);
  delay(delayValue);
  lightColor(LOW, HIGH, LOW);
  delay(delayValue);
  lightColor(LOW, HIGH, HIGH);
  delay(delayValue); 
  lightColor(LOW, LOW, HIGH);
  delay(delayValue);

  
}

