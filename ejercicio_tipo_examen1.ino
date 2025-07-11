#define rojoled 11
#define azulled 10
#define verdeled 9
#define alarma 4
#define trig 2
#define echo 3
bool boton = false;

void setup() {
  pinMode(rojoled, OUTPUT);
  pinMode(azulled, OUTPUT);
  pinMode(verdeled, OUTPUT);
  pinMode(alarma, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}




void loop() {
  //Medición de Distancia Ultrasónica
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  float tiempo = pulseIn(echo, HIGH);
  float distanciaCm = tiempo / 58.3;

  
  
  if (digitalRead(5) == LOW) {
  boton = !boton;
    delay(10);
  }
  
   if (boton == false) {
    digitalWrite(azulled, HIGH);
    digitalWrite(verdeled, LOW);
   digitalWrite(rojoled, LOW);
     digitalWrite (alarma, LOW);
  }
  else {
    digitalWrite(verdeled, HIGH);
    digitalWrite(azulled, LOW);
    digitalWrite(rojoled, LOW);
   
    if ((distanciaCm <= 150.0) && (distanciaCm >= 50)) {
     
    analogWrite(verdeled, 165);
    analogWrite(rojoled, 255);
      delay(250);
    digitalWrite (alarma, HIGH);
       delay(250);
       digitalWrite (alarma, LOW);
     
    }
     
    if (distanciaCm < 50) {
      analogWrite(verdeled, 0);
       analogWrite(rojoled, 255);
      digitalWrite (alarma, LOW);
      delay(100);
       digitalWrite (alarma, HIGH);
      delay(100);
     
      }
  }
  Serial.print("Distancia: ");
  Serial.print(distanciaCm);
  Serial.println(" cm");

  if ((distanciaCm <= 150.0) && (distanciaCm >= 50)) {
    Serial.println("¡Precaucion!");
  }
  if (distanciaCm < 50.0) {
    Serial.println("¡¡PELIGRO!!");
  }

  delay(500);
}
