// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
}

void loop()
{
  
 int potenciometro = analogRead ( A1);
 int tiempo = 1000 + (potenciometro * 9);
  
  
 if (tiempo <10) tiempo = 10;
 analogWrite ( 3 , 255);
 delay (tiempo); 
 
 analogWrite ( 3 , 0);
 delay (tiempo);   
}