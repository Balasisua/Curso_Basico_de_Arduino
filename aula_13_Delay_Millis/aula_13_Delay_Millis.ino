#define pinLedVd 10
#define pinLedVm 8
#define pinBotao 2

boolean estadoBotao = true;
boolean estAntBotao = true;
boolean estadoPisca = false;

unsigned long delay1 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedVd, OUTPUT);
  pinMode(pinLedVm, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);

  digitalWrite(pinLedVd,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  //controlo de botao com rentecao
  estadoBotao = digitalRead(pinBotao);
  if(!estadoBotao && estAntBotao)
  {
    estadoPisca = !estadoPisca;
  }
  estAntBotao = estadoBotao;

  if(estadoPisca)
  {
    if((millis()-delay1) >= 500)
    {
      digitalWrite(pinLedVm,HIGH);
    }

    if((millis()-delay1)<500)
    {
      digitalWrite(pinLedVm,LOW);
    }
    //reiniciar a contagem de um em um segundo
    if((millis()-delay1)>=1000)
    {
      delay1 = millis();
    }
      
  }
  else
  {//nao estando no estado de pisca desliga o Led
    digitalWrite(pinLedVm,LOW);
  }

  //Millis permite que o arduino continue fazendo 
  //outras coisas e nao para a execucao de tudo resto.

  //Delay para a execucao de tudo arduino no tempo estabelecido.

}
