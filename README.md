# Trabajos-Proyecto-Informatico-1-Jeremias-Nieto 

#define jere 2
#define jere_3 3
#define jere_4 4
#define jere_5 5
#define jere_6 6
#define jere_7 7








void setup()
{
  pinMode(jere , OUTPUT);
  pinMode(jere_3 , OUTPUT);
  pinMode(jere_4 , OUTPUT);
  pinMode(jere_5 , OUTPUT);
  pinMode(jere_6 , OUTPUT);
  pinMode(jere_7 , OUTPUT);



}
void loop()
{
  analogWrite( jere , 255);
  delay(2000);
  
  analogWrite (jere_7 , 255);
  
    delay(100);
  analogWrite (jere_7 , 0);
  analogWrite ( jere , 0); 
  digitalWrite (jere_3 , HIGH);
  digitalWrite (4, HIGH);
  
  delay (2000);
  analogWrite (jere_7 , 255);
  delay(100);
  analogWrite (jere_7 , 0);
  analogWrite (jere , 0);
  digitalWrite (jere_3 , LOW);
  digitalWrite (jere_4 , LOW);
  analogWrite (jere , 0);
  analogWrite (jere_5 , 60);
  analogWrite (jere_6 , 60);
  
  delay(2000);
  analogWrite (jere_7 , 255);
  
  delay(100);
  analogWrite (jere_7 , 0);
  analogWrite (jere_5 , 0);
  analogWrite (jere_6 , 0);
  analogWrite (jere , 255);
  analogWrite (jere_3 , 0);



  
}
