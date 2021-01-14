void A() {
  digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW);
  delay(500);
}
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(A, HIGH);
}
