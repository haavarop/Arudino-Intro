# include <dht.h>
# include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

dht DHT; 
#define DHT11_PIN 7



void setup() {
  lcd.begin(16, 2); 

}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  
  lcd.setCursor(0,0); 
  // Code for outputting temperature 
  
  
  lcd.setCursor(0,1);
  // Code for outputting humidity
  
}
