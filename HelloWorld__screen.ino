//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int x=0;
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("AbdelrahmanUsama");
  
}

0
void loop()
{
  x++;
  lcd.setCursor(1,1);
  lcd.print(x);
  delay(1000);
  for(int i=1;i<=10;i++)
  {
  lcd.scrollDisplayRight();
  delay(500);
  }
}
