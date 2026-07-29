// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 int lightValue=analogRead(A0);
 Serial.print("lightValue");
 Serial.println(lightValue);
}
