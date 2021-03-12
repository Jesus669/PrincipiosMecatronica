#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.clear();
  lcd.setCursor(15,0);
  lcd.print("J");
  lcd.setCursor(15,1);
  lcd.print("J");
  delay(250);

  lcd.clear();
  lcd.setCursor(14,0);
  lcd.print("Je");
  lcd.setCursor(14,1);
  lcd.print("Ja");
  delay(250);

  lcd.clear();
  lcd.setCursor(13,0);
  lcd.print("Jes");
  lcd.setCursor(13,1);
  lcd.print("Jau");
  delay(250);

  lcd.clear();
  lcd.setCursor(12,0);
  lcd.print("Jesu");
  lcd.setCursor(12,1);
  lcd.print("Jaur");
  delay(250);

  lcd.clear();
  lcd.setCursor(11,0);
  lcd.print("Jesus");
  lcd.setCursor(11,1);
  lcd.print("Jaure");
  delay(250);

  lcd.clear();
  lcd.setCursor(10,0);
  lcd.print("Jesus ");
  lcd.setCursor(10,1);
  lcd.print("Jaureg");
  delay(250);

  lcd.clear();
  lcd.setCursor(9,0);
  lcd.print("Jesus E");
  lcd.setCursor(9,1);
  lcd.print("Jauregu");
  delay(250);

  lcd.clear();
  lcd.setCursor(8,0);
  lcd.print("Jesus En");
  lcd.setCursor(8,1);
  lcd.print("Jauregui");
  delay(250);

  lcd.clear();
  lcd.setCursor(7,0);
  lcd.print("Jesus Enr");
  lcd.setCursor(7,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.setCursor(6,0);
  lcd.print("Jesus Enri");
  lcd.setCursor(6,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Jesus Enriq");
  lcd.setCursor(5,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Jesus Enriqu");
  lcd.setCursor(4,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Jesus Enrique");
  lcd.setCursor(3,1);
  lcd.print("Jauregui");
  delay(250);

  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Jesus Enrique");
  lcd.setCursor(2,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Jesus Enrique");
  lcd.setCursor(1,1);
  lcd.print("Jauregui ");
  delay(250);

  lcd.clear();
  lcd.print("Jesus Enrique");
  lcd.setCursor(0,1);
  lcd.print("Jauregui ");
  delay(2500);
}
