#include <dht.h>
dht DHT; 

#define DHT11_PIN 7

void setup() {
  Serial.begin(9600); 
}

void loop() {
  DHT.read11(DHT11_PIN);
  Serial.print("Temp = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
  
}
