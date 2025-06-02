// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5, OUTPUT);
  pinMode( 6, OUTPUT);

}

void loop()
{
 
 digitalWrite ( 5 , 100);
 digitalWrite ( 6 , 100);
 delay (500);
  
 digitalWrite ( 3, 100);
 digitalWrite ( 5, 0);
 digitalWrite ( 6, 0);
 delay (500);
  
 digitalWrite ( 3, 100);
 digitalWrite ( 6 , 100);
 delay (500);
 
 delay (1);
 digitalWrite ( 3 , 0);
 digitalWrite ( 5 , 0);
 digitalWrite ( 6 , 0);
 
}