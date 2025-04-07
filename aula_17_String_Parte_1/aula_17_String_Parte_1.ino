//String nao é uma variavel mas sim uma classe
String textoRecebido = "";
unsigned long delay1 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

/* CODIGO 2
  int numero1 = 280;
  float numero2 = 345.8765;
  String texto;

  //texto = String(numero1);
  //texto = String(numero1, BIN);
  //texto = String(numero1, HEX);

  //texto = String(numero2);
  texto = String(numero2, 4);

  Serial.print("Numero convertido: ");
  Serial.println(texto);
*/

/*CONCATENACAO CODIGO 3
  String texto1 = "Brincando";
    String texto2 = " com Ideias";

    //texto1.concat(texto2);
    //texto1 = texto1 + texto2;
    //texto1 += texto2;
    texto1 = texto1 + texto2 + " " + 2016;

    Serial.println(texto1);
    Serial.println(texto2);
    */



}

void loop() {
  // put your main code here, to run repeatedly:
  char caracter;

//verifica se tem informacao no Monitor Serial
  if(Serial.available())
  {//ler um caracter escrito no monitor
    caracter = Serial.read();
    //acumulando os caracter dentro da variavel String
    textoRecebido += caracter;
    //enviando os caracteres para o nosso sketch
    delay1 = millis(); 
  }

//se o tempo de envio dos caracteres é maior que os 10 mili segundo
//segnifica que ja acabou o texto
  if(((millis()-delay1)>10) && (textoRecebido != ""))
  {
    Serial.print("Texto digitado: ");
    Serial.println(textoRecebido);

    String texto1 = "brincando";
    // Serial.print("Tamanho do texto: ");
    //Serial.println(textoRecebido.length());

    /*if( textoRecebido.equalsIgnoreCase(texto1))
    {
      Serial.println( "IGUAL" );
    }
    else
    {
      Serial.println( "DIFERENTE" );
    }*/

    /*if( textoRecebido >texto1)
    {
      Serial.println( "MAIOR OU IGUAL" );
    }
    else
    {
      Serial.println( "MENOR" );
    }

    textoRecebido = "";*/

    if(texto1.startsWith(textoRecebido))
    {
      Serial.println( "Comeco Igual" );
    }
    else
    {
      Serial.println( "Comeco Diferente" );
    }

    if(texto1.endsWith(textoRecebido))
    {
      Serial.println( "Final Igual" );
    }
    else
    {
      Serial.println( "Final Diferente");
    }

    textoRecebido = "";
  }

}