int pinos[7] = {12,11,10,9,8,7,6};
int pinLED;

float minimo = 85;
float maximo = 1020;
float valorLDR;
float luminosidade;

void setup() {
  // put your setup code here, to run once:

  for(pinLED = 0;pinLED <= 8;pinLED++)
  {
    pinMode(pinos[pinLED], OUTPUT);
  }

  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLDR = analogRead(A0);

  luminosidade = ((valorLDR - minimo) / (maximo - minimo))*10;
  luminosidade = (luminosidade - 10) * -1;

  for(pinLED = 0;pinLED <= 8;pinLED++)
  {
    if(pinLED<luminosidade)
    {
      digitalWrite(pinos[pinLED],HIGH);
    }
    else
    {
      digitalWrite(pinos[pinLED],LOW);
    }

    delay(500);
  }

}

//LDR - Light Dependent Resistor(Resistor dependente de Luz)