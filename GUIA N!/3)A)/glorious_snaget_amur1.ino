// C++ code
//
void setup()
{
  pinMode( 2 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 6 , OUTPUT);
}

void loop()
{
  digitalWrite ( 2, HIGH);
  digitalWrite ( 4, HIGH);
  
  tone ( 6 , 255);
  
  delay (500);
   
  digitalWrite ( 2, LOW);
  digitalWrite ( 4, LOW);
  
  tone( 6 , 0); 
  delay (500);
  
}