int ledpin=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogvalue=analogRead(A0);
  int brightness=map(analogvalue,0,1023,0,255);
  analogWrite(ledpin,brightness);
  Serial.print("\nAnalog value:");
  Serial.print(analogvalue);
  Serial.print("\nbrightness");
  Serial.print(brightness);
  delay(100);
}
