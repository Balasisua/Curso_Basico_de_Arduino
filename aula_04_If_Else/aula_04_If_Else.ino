int pinVermelho = 10;
int pinAmarelo = 9;
int pinVerde = 8;
int pinBotao = 7;
int pinPedestreVermelho = 3;
int pinPedresteVerde = 2;

int faseSemaforo;

int estadoBotao;

int estadoAnteriorBotao;

int tempoPisca;
int estadoPisca;

void setup() {
  // put your setup code here, to run once:

  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);
  pinMode(pinPedresteVerde, OUTPUT);
  pinMode(pinPedestreVermelho, OUTPUT);

  faseSemaforo = 1;

  estadoAnteriorBotao = digitalRead(pinBotao);

  tempoPisca = 0;
  estadoPisca = HIGH;

}

void loop() {
  // put your main code here, to run repeatedly:

   estadoBotao = digitalRead(pinBotao);

  if((estadoBotao == LOW) && (estadoAnteriorBotao == HIGH))
  {
    if(faseSemaforo < 5)
    {
      faseSemaforo = faseSemaforo + 1;
    }
    else
    {
      faseSemaforo = 1;
    }
    
  }

  estadoAnteriorBotao = estadoBotao;

  if(faseSemaforo == 1)
  { //SEMAFORO ABERTO VERDE
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedresteVerde, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }
  
   if(faseSemaforo == 2)
  { //SEMAFORO ABERTO AMARELO
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedresteVerde, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }

   if(faseSemaforo == 3)
  { //SEMAFORO FECHADO VERMELHO
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);

    digitalWrite(pinPedresteVerde, HIGH);
    digitalWrite(pinPedestreVermelho, LOW);
  }

  if(faseSemaforo == 4)
  { //SEMAFORO PEDESTRE PISCANDO
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);

    tempoPisca = tempoPisca + 1;
    if(tempoPisca == 400)
    {
      estadoPisca = !estadoPisca;
      tempoPisca = 0;
    }

    digitalWrite(pinPedresteVerde, LOW);
    digitalWrite(pinPedestreVermelho, estadoPisca);
  }

   if(faseSemaforo == 5)
  { //SEMAFORO PEDESTRE PISCANDO
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);

    tempoPisca = tempoPisca + 1;
    if(tempoPisca == 400)
    {
      estadoPisca = !estadoPisca;
      tempoPisca = 0;
    }

    digitalWrite(pinPedresteVerde, estadoPisca);
    digitalWrite(pinPedestreVermelho, LOW);
  }
 
 delay(1);

}
