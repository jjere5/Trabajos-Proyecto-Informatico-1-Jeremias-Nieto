
void setup()
{
 pinMode ( 9, OUTPUT);
}

void loop()
{
   
  analogWrite ( 9, 51);
   delay (500); 
  analogWrite ( 9, 102);
   delay (500); 
  analogWrite ( 9, 153);
   delay (500); 
  analogWrite ( 9, 204);
   delay (500); 
  analogWrite ( 9, 255);
   delay (500); 
  
}