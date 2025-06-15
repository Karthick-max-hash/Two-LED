// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(200);
  
  digitalWrite(13, LOW);
  
}