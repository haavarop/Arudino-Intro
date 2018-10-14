/*
 * To use the humidity and temperature sensor download and include libraries folder
 * http://www.circuitbasics.com/wp-content/uploads/2015/10/DHTLib.zip
 * To include: Then go to Sketch>Include Library>Add .ZIP Library and select the DHTLib.zip file.
 * 
 * For help using the sensor check out:  
 * http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
 */
#include <dht.h>
dht DHT; 

#define DHT11_PIN 7

void setup() {
  // To open serial monitor: Ctrl + Shit + m 
  // Or Tools > Serimal Monitor
  Serial.begin(9600); 
}

void loop() {
  // Updates the library
  DHT.read11(DHT11_PIN);
}
