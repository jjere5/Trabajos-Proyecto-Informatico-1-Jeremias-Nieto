// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT);
  pinMode( 11 , OUTPUT);
  pinMode( 13 , OUTPUT);
  pinMode( 1 , OUTPUT);
}

void loop()
{
digitalWrite ( 1, HIGH);
  
analogWrite ( 3, 206);
  
analogWrite ( 5, 180);

analogWrite ( 6, 144);
  
analogWrite ( 9, 108);
   
analogWrite ( 10, 72);
  
analogWrite ( 11, 26);

analogWrite ( 13, LOW);
  
}