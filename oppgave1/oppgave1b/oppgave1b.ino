const int redPin   = 11; 
const int greenPin = 12;
const int bluePin  = 13;  
const int delayValue = 2000; 

void setup() {
  pinMode(redPin,   OUTPUT);
  pinMode(bluePin,  OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {

  // Your task: Make the colors red, blue, green, teal, and purple
 
}


// Use this method to turn on different colors 
/*
 *  param: 
 *  red   : HIGH | LOW 
 *  green : HIGH | LOW 
 *  blue  : HIGH | LOW 
 */

void light(int red, int green, int blue) { 
  digitalWrite(redPin, red);
  digitalWrite(greenPin, green); 
  digitalWrite(bluePin, blue);
} 
