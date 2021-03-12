#include <Servo.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Servo myservo;

int val = 0;
int analogPin = A0;
float V;
float ang = 0;

void setup() {
  myservo.attach(9);
  lcd.begin(16, 2);
}

void loop() {
  val = analogRead(analogPin);
  ang = map(val, 0, 1023, 0, 180);
  myservo.write(ang);
  delay(20);
  V = map(val, 0, 1023, 0, 5);
  lcd.setCursor(0, 0);
  lcd.print ("Voltaje: ");
  lcd.setCursor(9, 0);
  V = val*5/1023.0;
  lcd.print(V);
  lcd.setCursor(2, 1);
  lcd.print ("Angulo: ");
  lcd.setCursor(8, 1);
  lcd.println(ang);
}
