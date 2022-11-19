int led_pin=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(A0);
  Serial.print(value);
  if(value<20){
    digitalWrite(led_pin,HIGH);
    Serial.print("\nLights ON");
    Serial.print(value);
  }
  else{
    digitalWrite(led_pin,LOW);
    Serial.print("\nLights OFF");
    Serial.print(value);
  }
}
