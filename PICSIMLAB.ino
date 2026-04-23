 void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(4);

  if (a == 1) {
    digitalWrite(6, HIGH);
  }

  if (a == 0) {
    digitalWrite(6, LOW);
  }
}
