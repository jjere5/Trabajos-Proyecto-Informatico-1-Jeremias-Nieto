// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
}

void loop()
{
int potenciometro1 = analogRead(A1);
int potenciometro2 = analogRead(A2);
int potenciometro3 = analogRead(A3);
  
int rojo = potenciometro1 / 2;
int azul = potenciometro2 / 2;
int verde = potenciometro3 / 2;
  
  analogWrite ( 3, rojo);
  analogWrite ( 5, verde);
  analogWrite ( 6, azul);

}