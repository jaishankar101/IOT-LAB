int ledpin=9;

void setup() {
  // put your setup code here, to run once:-
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fadevalue=0;fadevalue<=255;fadevalue++){
    analogWrite(ledpin,fadevalue);
    delay(30);
  }
  for(int fv=255;fv>=0;fv-=5){
    analogWrite(ledpin,fv);
    delay(30);
  }
}
