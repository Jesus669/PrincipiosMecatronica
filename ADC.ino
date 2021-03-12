int val = 0;
float V = 0;
int X;
int analogPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  val = analogRead(analogPin); 
  Serial.print ("Conversion analogico digital: ");
  Serial.println(val);
  V = val*5/1023.0;
  Serial.print ("Voltaje: ");
  Serial.println(V);
  X = map(val, 0, 1023, 0, 255);
  analogWrite(13, X);

  if(V > 3){
  digitalWrite(13, HIGH);
  } else{
  digitalWrite(13, LOW);
  }
  delay(1000);

  analogWrite(13, val/1023*255);
}
