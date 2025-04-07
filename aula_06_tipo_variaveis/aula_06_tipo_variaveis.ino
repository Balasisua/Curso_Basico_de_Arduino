String valorX;
String valorY;
String valorZ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  valorX = "Mario";
  valorY = "Rodrigues";
  valorZ = valorX + valorY;

  Serial.print("ValoX = ");
  Serial.print(valorX);

  Serial.print(" ValoY = ");
  Serial.print(valorY);

  Serial.print(" ValoZ = ");
  Serial.println(valorZ);
}

void loop() {
  // put your main code here, to run repeatedly:

}
