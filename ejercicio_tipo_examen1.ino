#define rojoled 13
#define azulled 12
#define verdeled 11
#define alarma 4
#define trig 2
#define echo 3
#define boton 5
int contador = 0;
bool alarmaActiva = false;


void setup() {
  pinMode(rojoled, OUTPUT);
  pinMode(azulled, OUTPUT);
  pinMode(verdeled, OUTPUT);
  pinMode(alarma, OUTPUT);
  pinMode(boton, INPUT_PULLUP); 
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  

  //distancia
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite( trig, HIGH);
  delayMicroseconds(10);
  digitalWrite( trig, LOW);
  
  float tiempo = pulseIn( echo , HIGH );
  float distancia = tiempo / 58.3;
  
  
  if (digitalRead(boton) == LOW ) {
    contador = 1 + contador;
    delay(200);
  }

  if (contador == 1 && digitalRead(boton) == LOW) {
    digitalWrite(alarma, HIGH);
    Serial.println("Alarma: ACTIVADA");
    
  }
 
  
  if (contador ==0) {
    digitalWrite(alarma, LOW);
    Serial.println("Alarma: DESACTIVADA");
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}
