void setup() {
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(8);
  Serial.println(motion);
  delay(500);
}
