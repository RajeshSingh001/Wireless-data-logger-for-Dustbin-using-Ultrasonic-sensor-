#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  if (Serial.available() < 1)  return;
  char R = Serial.read();
  if (R != '\r')                 return;
  int ultra = Serial.parseInt();
  switch (ultra)
  {
    case 1:
      {
        lcd.clear();
        lcd.print("30% Full     ");
        delay(20);
        break;
      }
    case 2:
      {
        lcd.clear();
        lcd.print("50% Full     ");
        delay(20);
        break;
      }
    case 3:
      {
        lcd.clear();
        lcd.print("90% Full     ");
        delay(20);
        break;
      }
    case 4:
      {
        lcd.clear();
        lcd.print("dustbin Full  ");
        delay(20);
        break;
      }
    case 5:
      {
        lcd.clear();
        lcd.print("       ");
        delay(20);
        break;
      }
    default:
      {
        lcd.clear();
        lcd.print("Invalid Data");
        delay(20);
      }
  }
  delay(1);
}
