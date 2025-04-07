void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  /*  Usando PULLUP permite colocar a parte direita no negativo e
    nao no 5V do arduino.
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  int estadoBotao;
  //digitalRead() = verifica estado da porta
  estadoBotao = digitalRead(7);

  digitalWrite(10, estadoBotao);
  digitalWrite(9, !estadoBotao);
 

}

/* MATERIAS USADO:
5 - JUMPERS
2 - LEDS
3 - RESISTORS
1 - PUSH BUTTON (Botão)

*/