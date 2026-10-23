int temp = 0; 

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  temp = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125); 
  Serial.println(temp); 

  if (temp < 25) { 
    digitalWrite(10, HIGH); 
    digitalWrite(7, LOW); 
    digitalWrite(5, LOW); 
  } 
  else if (temp >= 25 && temp < 50) { 
    digitalWrite(10, LOW); 
    digitalWrite(7, HIGH); 
    digitalWrite(5, LOW); 
  }
  else if (temp >= 50 && temp < 100) { 
    digitalWrite(10, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(5, HIGH); 
  }
  else if (temp > 100)
  { 
    digitalWrite(10, HIGH); 
    digitalWrite(7, HIGH); 
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(10, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(5, LOW);
    delay(200);
  }
  delay(10); 
}
