int pinLed[9] = {12,11,10,9,8,7,6,5,4};
int numeroLed;

void setup() {
  // put your setup code here, to run once:
  int x;
  for(x = 0;x<=8;x = x + 1)
  {
    pinMode(pinLed[x],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for(numeroLed = 0; numeroLed<=8 ;numeroLed++)
  {
    digitalWrite(pinLed[numeroLed], HIGH);
    delay(50);
  }

  for(numeroLed = 8; numeroLed >=0 ;numeroLed--)
  {
    digitalWrite(pinLed[numeroLed], LOW);
    delay(200);
  }
  

}
