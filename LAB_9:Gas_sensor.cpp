int gasPin = 0;
int loa = 4;
int val =0 ;

void setup()
{
  pinMode(loa, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(gasPin);
  Serial.println(val,DEC);
  if(val>150){
    tone(loa,500,300);
  } else{ 
      noTone(loa);
    }
  delay(100);
}
