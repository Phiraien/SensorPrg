// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 int forcesensor=analogRead(A0);
  Serial.print("forcesensor");
  Serial.println(forcesensor);
}
