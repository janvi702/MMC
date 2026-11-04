#define ENA1 5
#define IN1 8
#define IN2 9

void setup() {
  pinMode(ENA1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // Rotate Motor in clockwise direction
  analogWrite(ENA1, 255);       // Sets speed of motor using PWM
  digitalWrite(IN1, HIGH);      // Input 1 is turned on
  digitalWrite(IN2, LOW);       // Input 2 is turned off
  delay(3 * 1000);              // Runs for 3 seconds

  // Stop Motor
  analogWrite(ENA1, 255);       
  digitalWrite(IN1, LOW);       // Both inputs are turned off
  digitalWrite(IN2, LOW);
  delay(2 * 1000);              // Waits for 2 seconds

  // Rotate Motor in Anti-clockwise direction
  analogWrite(ENA1, 255);       
  digitalWrite(IN1, LOW);       // Input 1 is off
  digitalWrite(IN2, HIGH);      // Input 2 is on
  delay(3 * 1000);              // Runs for 3 seconds

  // Stop Motor
  analogWrite(ENA1, 255);       
  digitalWrite(IN1, LOW);       
  digitalWrite(IN2, LOW);
  delay(2 * 1000);              // Waits for 2 seconds
}
