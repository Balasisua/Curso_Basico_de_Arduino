float valor1;
float valor2;
float resultadoSoma,resultadoDiv, resultadoSub, resultadoMult, resultadoMod;
float resultadoFinal;

void setup() {
  // put your setup code here, to run once:

  valor1 = 250;
  valor2 = 7.8;

  //Operadores Composto
  //valor2++;
  //valor2 = valor2 + 1;
  //valor2--;
  //valor2 += 3;
  //valor2 -= 3;
  //valor2 *= 3;
  //valor2 /= 3;
  //valor2 %= 2;//(Com valor2 INTEIRO);


  resultadoSoma = valor1 + valor2;
  resultadoSub = valor1 - valor2;
  resultadoDiv = valor1 / valor2;
  resultadoMult = valor1 * valor2;
  resultadoMod = int(valor1) % int(valor2);

  resultadoFinal = resultadoSoma * resultadoSub - resultadoDiv + resultadoMult/resultadoMod;

  Serial.begin(9600);
  Serial.print("Valor1: ");
  Serial.println(valor1,BIN);

  Serial.print("Valor2: ");
  Serial.println(valor2,BIN);

  Serial.print("A-Soma: ");
  Serial.println(resultadoSoma);

  Serial.print("B-Subtracao: ");
  Serial.println(resultadoSub);

  Serial.print("C-Divisao: ");
  Serial.println(resultadoDiv);

  Serial.print("D-Multiplicacao: ");
  Serial.println(resultadoMult);

  Serial.print("E-Resto da Divisao: ");
  Serial.println(resultadoMod);

  Serial.print("Resultado Final (A*B - C + D/E): ");
  Serial.println(resultadoFinal);
}

void loop() {
  // put your main code here, to run repeatedly:

}
