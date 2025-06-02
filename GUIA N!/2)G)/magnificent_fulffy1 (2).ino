
void setup()
{
  pinMode( 3 , OUTPUT);
}

void loop()
{
int cro = analogRead ( A1 );
int duko = + 100 + cro;
  
tone ( 3, duko);

}