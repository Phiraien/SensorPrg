const int tiltPin = 7;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(tiltPin);

  if (state == LOW) {
    Serial.println("Tilt Detected");
  } else{
    Serial.println("Normal Position");
  }

  delay(500);
}
