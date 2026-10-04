int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  sensorValue = map(sensorValue, 26, 923, 255, 0);
  Serial.println(sensorValue);
  analogWrite(5, sensorValue);
}
