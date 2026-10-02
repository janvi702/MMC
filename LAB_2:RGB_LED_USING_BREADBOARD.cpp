int redPin = 11;
int greenPin = 6;
int bluePin = 10;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  setColor(255, 0, 0);
  delay(1000);
  setColor(0, 255, 0);
  delay(1000); 
  setColor(0, 0, 255);
  delay(1000); 
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
