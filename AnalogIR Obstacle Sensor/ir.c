void setup(){
 pinMode(7, OUTPUT);
 Serial.begin(9600);
}
void loop(){
 int state=digitalRead(7);
 if(state==HIGH) 
   Serial.println("object found");
 else
  Serial.println("nope");
  delay(500); 
}
