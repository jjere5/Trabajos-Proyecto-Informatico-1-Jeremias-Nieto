#define SENSOR_LUZ  A1
#define SENSOR_TEMP A0
#define ROJO     3
#define VERDE    6
#define AZUL     5

#define TEMP_MIN 18
#define TEMP_MAX 90

void setup() {
  pinMode(SENSOR_TEMP, INPUT);
  pinMode(SENSOR_LUZ, INPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int valorTemp = analogRead(SENSOR_TEMP);
  float temperatura = (valorTemp * 5.0 / 1023.0 - 0.5) * 100.0;

  Serial.print("La temperatura actual es: ");
  Serial.print(temperatura);
  Serial.println(" ºC");

  int valorLuz = analogRead(SENSOR_LUZ);
  int luzInvertida = map(valorLuz, 6, 676, 100, 0);

  Serial.print("El nivel de luz actual es: ");
  Serial.print(luzInvertida);
  Serial.println(" %");

  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);
  
  if (luzInvertida> 30 && luzInvertida<70) { 

    if (temperatura > 90) {
    digitalWrite(ROJO, HIGH);
     digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);

    
  } 
  if (temperatura < 10) {
    digitalWrite(AZUL, HIGH);
     digitalWrite(ROJO, LOW);
    digitalWrite(VERDE, LOW);
  } 
  if (temperatura >= 18 && temperatura <= 90){
    digitalWrite(VERDE, HIGH);
     digitalWrite(ROJO, LOW);
    digitalWrite(AZUL, LOW);
  }

 
  
  if ( SENSOR_LUZ <0) {
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);

  }
     delay(1000);
  }
}
