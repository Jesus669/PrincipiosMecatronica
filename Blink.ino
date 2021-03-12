void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
  if(digitalRead(12) == HIGH){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
  else {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
}
