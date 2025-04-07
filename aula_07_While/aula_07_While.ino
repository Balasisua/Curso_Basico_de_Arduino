int pinLed[] = {12,11,10,9,8,7,6,5,4};
int numeroLed;
char digitado;

void setup() {
  // put your setup code here, to run once:
  int x;
  for(x = 0;x<=8;x++)
  {
    pinMode(pinLed[x],OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitado = ' ';
  numeroLed = 0;
  while(digitado != 'P')
  {
    digitalWrite(pinLed[numeroLed],LOW);
    numeroLed++;
    if(numeroLed>8)
    {
      numeroLed = 0;
    }
    digitalWrite(pinLed[numeroLed],HIGH);

    if(Serial.available())
    {
      digitado = Serial.read();
    }
    delay(50);
  }

  delay(5000);

}
