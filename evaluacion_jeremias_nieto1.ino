#include <LiquidCrystal.h>

#include <Adafruit_NeoPixel.h>
#define PIXEL 3 
int NUM_PIX = 13;
#define trig 2
#define echo 5

Adafruit_NeoPixel rings = Adafruit_NeoPixel(NUM_PIX, PIXEL, NEO_GRB + NEO_KHZ800);
LiquidCrystal lcd(12, 13, 8, 9, 10, 11);
#define pul A0
bool boton = false;
#define alarma 7
void setup()
{
  
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  
  pinMode(alarma, OUTPUT);
  pinMode(pul, INPUT_PULLUP);
  pinMode(PIXEL, OUTPUT);
   pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  rings.begin();
  rings.show();
  rings.clear();
}

void loop()
{ 
  //distancia
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite( trig, HIGH);
  delayMicroseconds(10);
  digitalWrite( trig, LOW);
  
  float tiempo = pulseIn( echo , HIGH );
  float distanciaCm = tiempo / 58.3;
 int distancia = map (trig, distanciaCm, 1000, 0, 1000);
  
  
  
   if (analogRead(pul)== LOW) {
  boton = !boton;
    delay(10);
  }
  
   if (boton == false) {
    
  }
  else {
   
    if (distanciaCm <= 300) {
    rings.setPixelColor(0, rings.Color(0, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(1, rings.Color(0, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(2, rings.Color(0, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(3, rings.Color(0, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(4, rings.Color(0, distanciaCm, 0));
    rings.show();
    lcd.setCursor(0, 0);
  lcd.print("distancia optima");

    }
    if ((distanciaCm <= 300) && (distanciaCm >=0)) {
     
    }
    
    if (distanciaCm >= 300 && distanciaCm <800){
    rings.setPixelColor(6, rings.Color(distanciaCm, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(7, rings.Color(distanciaCm, distanciaCm, 0));
    rings.show();
      rings.setPixelColor(8, rings.Color(distanciaCm, distanciaCm, 0));
    
     rings.setPixelColor(5, rings.Color(distanciaCm, distanciaCm, 0)); 
 rings.show();
    }
     
    if (distanciaCm < 500 && distanciaCm > 300) {
      digitalWrite (alarma, HIGH);
      delay(500);
       digitalWrite (alarma, LOW);
      delay(500);
     
      
      }

  if ((distanciaCm <= 800) && (distanciaCm > 500)) {
 digitalWrite (alarma, HIGH);
      delay(50);
       digitalWrite (alarma, LOW);
      delay(50);
  }
  if (distanciaCm >800) {
     digitalWrite (alarma, HIGH);
      delay(10);
       digitalWrite (alarma, LOW);
      delay(20);
     lcd.setCursor(0, 0);
  lcd.print("demasiado lejos");
  }

  }
}