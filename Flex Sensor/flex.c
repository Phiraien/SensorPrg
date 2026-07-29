// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int flex=analogRead(A0);
  Serial.print("flex");
  Serial.println(flex);
}
