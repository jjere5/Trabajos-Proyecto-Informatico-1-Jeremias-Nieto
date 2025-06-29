#include <LiquidCrystal.h>
#define pinTemp A0
#define pinLedRojo 2
#define pinLedVerde 7
#define pinBuzzer 3
#define pinSensorMovimiento 4
#define pinSensorLuz A1
#define pinSensorDistancia 5

LiquidCrystal lcd(12, 13, 8, 9, 10, 11);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");

  pinMode(pinSensorLuz, INPUT);
  pinMode(pinSensorDistancia, OUTPUT);
  pinMode(pinSensorMovimiento, INPUT);
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinTemp, INPUT);

  Serial.begin(9600);
  Serial.println("Todo esta en orden.");
}

void loop() {
  int valorLuz = analogRead(pinSensorLuz);
  int porcentajeLuz = map(valorLuz, 1, 310, 0, 100);
  int luzLimitada = constrain(porcentajeLuz, 0, 100);
  bool hayMovimiento = digitalRead(pinSensorMovimiento);

  digitalWrite(pinLedRojo, LOW);
  int lecturaTemp = analogRead(pinTemp);
  float voltaje = lecturaTemp * 5.0 / 1024;
  float temperaturaC = voltaje * 100 - 50;

  pinMode(pinSensorDistancia, OUTPUT);
  digitalWrite(pinSensorDistancia, LOW);
  delayMicroseconds(2);
  digitalWrite(pinSensorDistancia, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinSensorDistancia, LOW);
  pinMode(pinSensorDistancia, INPUT);

  long duracion = pulseIn(pinSensorDistancia, HIGH);
  float distanciaCm = duracion * 0.034 / 2;
  delay(500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("L:");

  if (luzLimitada < 10) lcd.print(" ");
  lcd.print(luzLimitada);
  lcd.print("%");

  lcd.print("  T:");
  lcd.print(temperaturaC, 1);

  lcd.setCursor(0, 1);
  lcd.print("M:");
  lcd.print(hayMovimiento ? "Si" : "No");

  lcd.print("  D:");
  if (distanciaCm > 0 && distanciaCm < 400) {
    lcd.print(distanciaCm, 1);
    lcd.print("cm");
  }

  if (distanciaCm > 0 && distanciaCm < 100) {
    digitalWrite(pinLedRojo, HIGH);
    tone(pinBuzzer, 950);
    delay(400);
    noTone(pinBuzzer);
    Serial.println("Estan muy cerca de la obra");
    delay(400);
  }

  if (temperaturaC > 39) {
    delay(50);
    digitalWrite(pinLedRojo, HIGH);
    tone(pinBuzzer, 900);
    delay(300);
    noTone(pinBuzzer);
    Serial.println("Estan tocando la obra");
    delay(300);
  }

  if (luzLimitada <= 20) {
    Serial.println("Modo nocturno activado.");
    delay(50);

    if (hayMovimiento == HIGH) {
      digitalWrite(pinLedRojo, HIGH);
      tone(pinBuzzer, 900);
      delay(300);
      noTone(pinBuzzer);
      delay(300);
      Serial.println("Se detecto un movimiento");
    }
  }
}