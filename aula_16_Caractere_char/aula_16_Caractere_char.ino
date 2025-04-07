unsigned char letra, especial;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  /*letra = 66;

  Serial.println(char(letra));
  Serial.println(letra,DEC);
*/
  Serial.println();

  char especial = '\n';

  Serial.print("Primeira Frase.\\ Segunda Frase.");
  Serial.print(especial);
  Serial.print("\tTerceira Frase.");

}

void loop() {
  // put your main code here, to run repeatedly:


}
