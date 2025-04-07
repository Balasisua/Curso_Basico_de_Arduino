String textoRecebido = "";
unsigned long delay1 = 0;

String padR( String texto, int tamanho, char caractere = ' ');
String padL( String texto, int tamanho, char caractere = ' ');
String strZero( String texto, int tamanho);
String replicate (char caractere, int vezes);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 //CODIGO 1-6 String texto = "Brincando com Ideias";
/* CODIGO 1-2.
 Serial.println(texto);
  Serial.println();*/

/* CODIGO 1.
  Serial.println("Caracter na Posicao (2): ");
  //Serial.println(texto.charAt(2));
  Serial.println(texto[2]);
*/

/*  CODIGO 2.
  texto.setCharAt(10, 'C');
  //texto[10] = 'D';

  Serial.print("Texto Modificado: ");
  Serial.println(texto);*/
/* CODIGO 3-4
  Serial.println(texto);
  Serial.println("0123456789012345678901234567890");
  Serial.println("          1         2         3");
  Serial.println();*/
/* CODIGO 3
  Serial.print("Posicao do Texto Procurado (com): ");
  Serial.println( texto.indexOf("com") );

  Serial.print("Posicao do Texto Procurado (Ideias): ");
  Serial.println(texto.indexOf("Ideias"));

  Serial.print("Posicao do Caracter Procurado (a): ");
  //Serial.println(texto.indexOf('a'));
  Serial.println(texto.indexOf('a',10));

  Serial.print("Ultima Ocorrencia de (n): ");
 // Serial.println(texto.lastIndexOf('n'));
  Serial.println(texto.lastIndexOf('n',5));
  */
  
  /*CODIGO 4
  Serial.println("Texto entre os indices 4 a 8: ");
  Serial.println(texto.substring(4,8));*/

  /*Serial.println(texto);
  Serial.println();

  texto.replace("a","A");
  Serial.print("Texto Modifica: ");
  Serial.println(texto);*/

/* CODIGO 5
  Serial.println(texto);
  Serial.println("0123456789012345678901234567890");
  Serial.println("          1         2         3");
  Serial.println();

  texto.remove(10,4);
  Serial.print("Texto Modificado: ");
  Serial.println(texto);

  texto.remove(9);
  Serial.print("Texto Modificado: ");
  Serial.println(texto);
*/

/*CODIGO 6
Serial.println(texto);

texto.toLowerCase();
Serial.print("Texto em Minusculas: ");
Serial.println(texto);

texto.toUpperCase();
Serial.print("Texto em Maiusculas: ");
Serial.println(texto);*/

/* CODIGO 7
//String texto = " Ideias   ";
Serial.print("|");
Serial.print(texto);
Serial.println("|");

//elimina espaço.
texto.trim();
Serial.print("Texto Modificado: ");
Serial.print("|");
Serial.print(texto);
Serial.println("|");
*/

String texto = "13718";

Serial.println(texto);
Serial.println();

Serial.print("Exemplo do  padR: ");
Serial.print("|");
Serial.print(padR(texto,8));
Serial.println("|");

Serial.print("Exemplo do  padL: ");
Serial.print("|");
Serial.print(padL(texto,8));
Serial.println("|");

Serial.print("uso do   strZero: ");
Serial.print("|");
Serial.print(strZero(texto,8));
Serial.println("|");

Serial.print("Uso do replicate: ");
Serial.print("|");
Serial.print(replicate('-',8));
Serial.println("|");


}

void loop() {
  // put your main code here, to run repeatedly:
  char caracter;

  if(Serial.available())
  {
    caracter = Serial.read();
    textoRecebido += caracter;
    delay1 = millis();
  }

  if(((millis() - delay1)>10) && (textoRecebido != "") )
  {
    Serial.print("Texto digitado: ");
    Serial.println(textoRecebido);

    //int convertido = textoRecebido.toInt();
    float convertido = textoRecebido.toFloat();

    Serial.print("Texto concatenado: ");
    Serial.println(textoRecebido + 200);

    Serial.print("Texto convertido e calculado: ");
    Serial.println(convertido + 200, 4);

    textoRecebido = "";
  }
}
//FUNCOES
String padR(String texto, int tamanho, char caractere)
{
  if(texto.length()>tamanho)
  {
    return texto.substring(texto.length() - tamanho, texto.length());
  }
  else
  {
    return replicate(caractere, tamanho - texto.length()) + texto;
  }
}

String padL(String texto, int tamanho, char caractere)
{
  if(texto.length() > tamanho)
  {
    texto.remove(tamanho);
    return texto;
  }
  else
  {
    return texto + replicate(caractere, tamanho-texto.length());
  }
}

String strZero(String texto, int tamanho)
{
  return padR(texto,tamanho,'0');
}

String replicate(char caractere, int vezes)
{
  String temp;

  for(int nL=0;nL<vezes;nL++)
  {
    temp += caractere;
  }
  return temp;
}