#include <Adafruit_NeoPixel.h>

#define PIN_LEDS 6
#define TOTAL_LEDS 24
#define PIN_BOTON 3
#define PIN_PITO 4

Adafruit_NeoPixel luces(TOTAL_LEDS, PIN_LEDS, NEO_GRB + NEO_KHZ800);

int viejo = HIGH;

int dibujos[6][6][4] = {
  // Dado 1
  {{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}},
  // Dado 2
  {{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1},{1,0,0,0},{1,1,1,1}},
  // Dado 3
  {{1,1,1,1},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1}},
  // Dado 4
  {{1,0,0,1},{1,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}},
  // Dado 5
  {{1,1,1,1},{1,0,0,0},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1}},
  // Dado 6
  {{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,1},{1,1,1,1}}
};

void setup() {
  luces.begin();
  luces.show();
  pinMode(PIN_BOTON, INPUT_PULLUP);
  pinMode(PIN_PITO, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  int nuevo = digitalRead(PIN_BOTON);

  if (viejo == HIGH && nuevo == LOW) {
    int a = random(1,7);
    int b = random(1,7);

    // Mostrar dado 1
    luces.clear();
    for (int f=0; f<6; f++) {
      for (int c=0; c<4; c++) {
        int pos = f + c*6;
        if (dibujos[a-1][f][c]==1)
          luces.setPixelColor(pos, luces.Color(0,150,0));
      }
    }
    luces.show();
    delay(500);

    // Mostrar dado 2
    luces.clear();
    for (int f=0; f<6; f++) {
      for (int c=0; c<4; c++) {
        int pos = f + c*6;
        if (dibujos[b-1][f][c]==1)
          luces.setPixelColor(pos, luces.Color(0,150,0));
      }
    }
    luces.show();
    delay(500);

    // Calcular suma
    int suma = a+b;
    Serial.print("Dado1: "); Serial.print(a);
    Serial.print(" Dado2: "); Serial.print(b);
    Serial.print(" Suma: "); Serial.println(suma);

    // Efecto si es 7
    if (suma == 7) {
      for (int k=0; k<5; k++) {
        luces.fill(luces.Color(255,0,0));
        luces.show();
        tone(PIN_PITO,1000,200);
        delay(200);
        luces.clear();
        luces.show();
        delay(200);
      }
    }
  }

  viejo = nuevo;
}
