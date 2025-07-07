#include <Adafruit_NeoPixel.h>
#define PIXEL 3
#define BOTON 2
int modo = 0; 
int NUM_PIX = 13;

Adafruit_NeoPixel rings = Adafruit_NeoPixel(NUM_PIX, PIXEL, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(BOTON, INPUT_PULLUP);
  pinMode(PIXEL, OUTPUT);
  
  rings.begin();
  rings.show();
  rings.clear();
}

void loop()
{ 
  if (digitalRead(BOTON) == LOW)
  {
    modo = modo + 1;
    if (modo == 4)
    {
      modo = 1;
    }
    delay(300);
  }

  if (modo == 0) {
     rings.clear();
  }
  int potenciometro = analogRead(A0);
  int color_random = rings.Color(random(0, 255), random(0, 255), random(0, 255));

  if (modo == 1) {

    //Rojo1
    rings.setPixelColor(0, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde1
    rings.setPixelColor(1, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul1
    rings.setPixelColor(2, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo2
    rings.setPixelColor(3, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde2
    rings.setPixelColor(4, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul2
    rings.setPixelColor(5, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo3
    rings.setPixelColor(6, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde3
    rings.setPixelColor(7, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul3
    rings.setPixelColor(8, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo4
    rings.setPixelColor(9, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde4
    rings.setPixelColor(10, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul4
    rings.setPixelColor(11, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();
  }

  if (modo == 2) {

    //Verde1INVERSO
    rings.setPixelColor(10, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo1INVERSO
    rings.setPixelColor(9, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul1INVERSO
    rings.setPixelColor(8, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde2INVERSO
    rings.setPixelColor(7, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo2INVERSO
    rings.setPixelColor(6, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul2INVERSO
    rings.setPixelColor(5, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde3INVERSO
    rings.setPixelColor(4, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo3INVERSO
    rings.setPixelColor(3, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Azul3INVERSO
    rings.setPixelColor(2, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Verde4INVERSO
    rings.setPixelColor(1, rings.Color(0, 255, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //Rojo4INVERSO
    rings.setPixelColor(0, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();
  }

  if (modo == 3) {

    //PARES
    rings.clear();
    rings.setPixelColor(0, rings.Color(255, 0, 0));
    rings.setPixelColor(2, rings.Color(255, 0, 0));
    rings.setPixelColor(4, rings.Color(255, 0, 0));
    rings.setPixelColor(6, rings.Color(255, 0, 0));
    rings.setPixelColor(8, rings.Color(255, 0, 0));
    rings.setPixelColor(10, rings.Color(255, 0, 0));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //IMPARES
    rings.setPixelColor(1, rings.Color(0, 0, 255));
    rings.setPixelColor(3, rings.Color(0, 0, 255));
    rings.setPixelColor(5, rings.Color(0, 0, 255));
    rings.setPixelColor(7, rings.Color(0, 0, 255));
    rings.setPixelColor(9, rings.Color(0, 0, 255));
    rings.setPixelColor(11, rings.Color(0, 0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //PARES RANDOM
    rings.setPixelColor(0, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(2, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(4, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(6, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(8, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(10, random(0, 255), random(0, 255), random(0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();

    //IMPARES RANDOM
    rings.setPixelColor(1, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(3, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(5, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(7, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(9, random(0, 255), random(0, 255), random(0, 255));
    rings.setPixelColor(11, random(0, 255), random(0, 255), random(0, 255));
    rings.show();
    delay(map(analogRead(A0), 0, 1023, 100, 1000));
    rings.clear();
  }
}
