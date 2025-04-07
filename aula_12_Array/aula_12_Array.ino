//Display de Cátodo Comum

#define pinBotao 2

byte portas[8] = {10,9,6,7,8,11,12,5}; 

//variavel controlado pelo botao
int numero = 0;

//controlar o estado do batao
boolean botaoAnterior = false;
boolean botaoActual = true;
                      //      a b c d e f g ponto decimal
byte displayConfig[11][8] = {{1,1,1,1,1,1,0,0}, //Digito 0
                             {0,1,1,0,0,0,0,0}, //Digito 1
                             {1,1,0,1,1,0,1,0}, //Digito 2
                             {1,1,1,1,0,0,1,0}, //Digito 3
                             {0,1,1,0,0,1,1,0}, //Digito 4
                             {1,0,1,1,0,1,1,0}, //Digito 5
                             {1,0,1,1,1,1,1,0}, //Digito 6
                             {1,1,1,0,0,0,0,0}, //Digito 7
                             {1,1,1,1,1,1,1,0}, //Digito 8
                             {1,1,1,1,0,1,1,0}, //Digito 9
                             {0,0,0,0,0,0,0,0}}; //Tudo apagado


void setup() {
  // put your setup code here, to run once:
  pinMode(pinBotao, INPUT);

  for(int nP = 0;nP<=7;nP++)
  {
    pinMode(portas[nP],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  
  botaoActual = digitalRead(pinBotao);
  if(botaoActual && !botaoAnterior)
  {
    numero++;
    if(numero>9)
    {
      numero = 0;
    }
  }
  botaoAnterior = botaoActual;

  for(int nD = 0; nD <= 7 ; nD++)
  {
    digitalWrite(portas[nD],displayConfig[numero][nD]);
  }

}

