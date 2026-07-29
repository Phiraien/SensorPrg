// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 pinMode(7,OUTPUT);
  
 digitalWrite(7,LOW);
 delay(200);
 digitalWrite(7,HIGH);
 delay(500);
 digitalWrite(7,LOW);
 pinMode(7,INPUT);
 
 long duration=pulseIn(7,HIGH);
 float distance=duration*0.0343/2;
 Serial.print("Distance");
 Serial.println(distance);
}
