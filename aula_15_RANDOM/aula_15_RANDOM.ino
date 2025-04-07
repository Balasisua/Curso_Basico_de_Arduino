//RANDOM: PERMITE SORTEAR.
#define pinBotao 2

#define pinA 10
#define pinB 9
#define pinC 6
#define pinD 7
#define pinE 8
#define pinF 11
#define pinG 12
#define pinPD 5

//variavel controlado pelo botao
int numero = 10;

//controlar o estado do batao
boolean botaoAnterior = false;
boolean botaoActual = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinBotao, INPUT);

  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinPD, OUTPUT);

//cada lista tem um conjunto de numero que parecem ser aleatorio
  randomSeed(analogRead(A0));
  //ler a informacao de uma porta nao conectado para variar
  //VAMOS ter 1024 lista para o efeito sorteio

}

void loop() {
  // put your main code here, to run repeatedly:
  //Efeito Bouncing: botao mecanico enviado informações para uma porta digital

  //verificacao do botao se esta apertado ou nao.
  botaoActual = digitalRead(pinBotao);
  if(botaoActual && !botaoAnterior)
  {
    //sortear de 0 ate 9
   numero = random(10);
    
  }
  botaoAnterior = botaoActual;

  switch(numero)
  {
    case 0:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,LOW);
      digitalWrite(pinPD,LOW);
      break;
    case 1:
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinPD,LOW);
      break;
    case 2:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 3:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 4:
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 5:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 6:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 7:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinPD,LOW);
      break;
    case 8:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,HIGH);
      digitalWrite(pinE,HIGH);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    case 9:
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,HIGH);
      digitalWrite(pinG,HIGH);
      digitalWrite(pinPD,LOW);
      break;
    default: 
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      digitalWrite(pinD,LOW);
      digitalWrite(pinE,LOW);
      digitalWrite(pinF,LOW);
      digitalWrite(pinG,LOW);
      digitalWrite(pinPD,HIGH);
      break;
  }

}
