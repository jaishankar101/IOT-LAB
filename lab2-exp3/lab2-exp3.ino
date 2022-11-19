int ledpin1=9;
int ledpin2=6;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int f1=0;
  int f2=255;
  while(f1<=255 && f2>=0){
    analogWrite(ledpin1,f1);
    analogWrite(ledpin2,f2);
    f1-=5;
    f2+=5;
    delay(50);
  }
  f1=255;
  f2=0;
  while(f2>=0 && f1 <=255){
    analogWrite(ledpin1,f1);
    analogWrite(ledpin2,f2);
    f1+=5;
    f2-=5;
    delay(50);
  }
}
