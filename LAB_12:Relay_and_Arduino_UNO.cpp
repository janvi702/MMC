void setup() {
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(A0);
  Serial.println(ldrValue);
  
  if (ldrValue > 500) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }
}
