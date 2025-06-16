#define SENSOR_LUZ A1
#define SENSOR_TEMP A0

#define ROJO 3
#define AZUL 5
#define VERDE 6

#define TEMP_MIN 18
#define TEMP_MAX 90

const int LDR_VALOR_OSCURIDAD_CALIBRADO = 1;
const int LDR_VALOR_LUZ_CALIBRADO = 310;

void setup() {
  Serial.begin(9600);

  pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(VERDE, OUTPUT);

  digitalWrite(ROJO, HIGH);
  digitalWrite(AZUL, HIGH);
  digitalWrite(VERDE, HIGH);
  delay(100);
}

void loop() {
  int valorTemp = analogRead(SENSOR_TEMP);
  float temperatura = (valorTemp * 5.0) / 1024.0;
  temperatura = (temperatura - 0.5) * 100.0;

  int valorLuz = analogRead(SENSOR_LUZ);
  int porcentajeLuz = map(valorLuz, LDR_VALOR_OSCURIDAD_CALIBRADO, LDR_VALOR_LUZ_CALIBRADO, 100, 0);
  porcentajeLuz = constrain(porcentajeLuz, 0, 100);

  Serial.print("El nivel de luz actual es: ");
  Serial.print(porcentajeLuz);
  Serial.println(" %");

  Serial.print("La temperatura actual es: ");
  Serial.print(temperatura, 1);
  Serial.println(" ºC");

  digitalWrite(ROJO, HIGH);
  digitalWrite(AZUL, HIGH);
  digitalWrite(VERDE, HIGH);

  if (porcentajeLuz >= 30 && porcentajeLuz <= 70) {
    if (temperatura > TEMP_MAX) {
      digitalWrite(ROJO, HIGH);
      digitalWrite(AZUL, LOW);
      digitalWrite(VERDE, LOW);
    }  
    if (temperatura < TEMP_MIN) {
      digitalWrite(ROJO, LOW);
      digitalWrite(AZUL, HIGH);
      digitalWrite(VERDE, LOW);
    } 
    if(temperatura < TEMP_MAX && temperatura > TEMP_MIN) { 
      digitalWrite(ROJO, LOW);
      digitalWrite(AZUL, LOW);
      digitalWrite(VERDE, HIGH);
    }
  } 

  delay(1000);
}
