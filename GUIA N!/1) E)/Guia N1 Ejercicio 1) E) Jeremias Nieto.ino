// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
  
  
}

void loop()
{
digitalWrite (1, HIGH);
delay(1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);

digitalWrite (1, LOW);
digitalWrite (2, HIGH); 
digitalWrite (3, HIGH);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, HIGH);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);
  
digitalWrite (1, HIGH);
digitalWrite (2, HIGH);
digitalWrite (3, LOW);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);
  
digitalWrite (1, LOW);
digitalWrite (2, HIGH);
digitalWrite (3, LOW);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);
  
digitalWrite (1, HIGH);
digitalWrite (2, HIGH);
digitalWrite (3, HIGH);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);

digitalWrite (1, HIGH);
digitalWrite (2, LOW);
digitalWrite (3, HIGH);
delay (1000);

digitalWrite (1, LOW);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
delay (10);

  
  
digitalWrite (5, HIGH);
delay(1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);

digitalWrite (5, LOW);
digitalWrite (6, HIGH); 
digitalWrite (7, HIGH);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, HIGH);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);
  
digitalWrite (5, HIGH);
digitalWrite (6, HIGH);
digitalWrite (7, LOW);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);
  
digitalWrite (5, LOW);
digitalWrite (6, HIGH);
digitalWrite (7, LOW);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);
  
digitalWrite (5, HIGH);
digitalWrite (6, HIGH);
digitalWrite (7, HIGH);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);

digitalWrite (5, HIGH);
digitalWrite (6, LOW);
digitalWrite (7, HIGH);
delay (1000);

digitalWrite (5, LOW);
digitalWrite (6, LOW);
digitalWrite (7, LOW);
delay (10);
}