void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int intervalo1Pisca;
  int intervalo2Pisca;
  int intervalo3Pisca;

  intervalo1Pisca = 500;
  intervalo2Pisca = 500;
  intervalo3Pisca = 500;

  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(intervalo1Pisca);

  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(intervalo2Pisca);

  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(intervalo3Pisca);

}

/*MATERIAL USADO:
2 - LEDS
2 - RESISTORES 220 ohms
5 - JUMPERS

*/