#include "LiquidCrystal_I2C.h"

#include "application.h"

LiquidCrystal_I2C lcd(0x20,20,4);  // set the LCD address to 0x20 for a 20 chars and 4 line display

void setup()
{
  lcd.init();                       // initialize the lcd 
  lcd.backlight();                  // Turn on backlight
  lcd.home();
  
  lcd.setCursor(0, 0);
  lcd.print("    Hello world!   ");
  lcd.setCursor(0, 1);
  lcd.print("      I2C LCD");
  lcd.setCursor(0, 2);
  lcd.print("     SparkCore   ");

}

void loop()
{

}
