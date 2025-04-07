// FUNCOES: dividir o grande problema em pequenos problemas.
#define pinLedVm 2
#define pinLedVd 3
#define pinBotao 4

boolean pisca = false;

//declarando a funcao
boolean leBotao(int porta);
void piscaLED(int porta,int tempo);

void setup() {
  // put your setup code here, to run once:

  //definicao de cada porta do arduino
  pinMode(pinLedVd,OUTPUT);
  pinMode(pinLedVm,OUTPUT);
  pinMode(pinBotao,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(leBotao(pinBotao))
  {
    pisca = !pisca;
  }

  //Controlo do Led Piscando
  if(pisca)
  {
   piscaLED(pinLedVd,500);
   piscaLED(pinLedVm,200);
  }
}

//programando a funcao
boolean leBotao(int porta)
{
//parte que controla o botao se esta apertado ou nao
  boolean estadoBotao = digitalRead(porta);
  //static permite manter o valor da variavel mesmo apos sair da funcao
  //[14] porque no arduino tem de 0 a 13 portas digitais
  static boolean estadoAnterior[14] = {true,true,true,true,true,true,true,true,true,true,true,true,true,true};

  boolean ligado = false;
  if(!estadoBotao && estadoAnterior[porta])
  {
    ligado = true;
  }
  //gravar estado anterior daquela porta
  estadoAnterior[porta] = estadoBotao;

  return ligado;
}


void piscaLED(int porta,int tempo)
{
  //delay1 registra o valor do millis 
  //no momento que estiver passando pelo pisca
  static unsigned long delay1[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  //para funcionar em qualquer porta de LED usamos array.
  
 //tempo em que estamos a executar a funcao pisca
 //tempo que deve continuar acesso.
  if((millis()-delay1[porta])<tempo)
  {
    digitalWrite(porta,HIGH);
  }
  else
  {
    digitalWrite(porta,LOW);
  }

  if((millis()-delay1[porta])>= (tempo*2))
  {
    delay1[porta] = millis();
  }

}

