// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  
  digitalWrite(3, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(2000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  
  
  
}