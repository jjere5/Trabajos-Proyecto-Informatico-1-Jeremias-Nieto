#define POT_TIEMPO A3
#define POT_ROJO A0
#define POT_AZUL A1
#define POT_VERDE A2

#define BUZZER_PIN 8
#define BOTON_PIN 12

#define ROJO1 11
#define AZUL1 9
#define VERDE1 3

#define ROJO2 10
#define AZUL2 5
#define VERDE2 6

#define LED_ESTADO 13

#define PARPADEOS 3

float estadoBoton = 1;
float anteriorBoton = 1;
float pausaActiva = 0;
float contadorParpadeo = 0;
float tiempoActual = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ROJO1, OUTPUT);
  pinMode(AZUL1, OUTPUT);
  pinMode(VERDE1, OUTPUT);
  pinMode(ROJO2, OUTPUT);
  pinMode(AZUL2, OUTPUT);
  pinMode(VERDE2, OUTPUT);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BOTON_PIN, INPUT_PULLUP);
  pinMode(LED_ESTADO, OUTPUT);
}

void loop() {
  estadoBoton = digitalRead(BOTON_PIN);
  pausaActiva = pausaActiva + (estadoBoton == 0 && anteriorBoton == 1);
  pausaActiva = fmod(pausaActiva, 2);
  anteriorBoton = estadoBoton;

  digitalWrite(LED_ESTADO, pausaActiva == 0);

  float tiempoRaw = analogRead(POT_TIEMPO);
  float tiempoMs = (tiempoRaw * 3000.0) / 1023.0;
  float tiempoSegundos = tiempoMs / 1000.0;

  float rojoVal = analogRead(POT_ROJO) * 255.0 / 1023.0;
  float azulVal = analogRead(POT_AZUL) * 255.0 / 1023.0;
  float verdeVal = analogRead(POT_VERDE) * 255.0 / 1023.0;

  Serial.print("Tiempo: ");
  Serial.println(tiempoSegundos, 2);
  Serial.print("R: ");
  Serial.println((int)rojoVal);
  Serial.print("G: ");
  Serial.println((int)verdeVal);
  Serial.print("B: ");
  Serial.println((int)azulVal);

  digitalWrite(BUZZER_PIN, HIGH);
  delay(100);
  digitalWrite(BUZZER_PIN, LOW);

  analogWrite(ROJO1, rojoVal);
  analogWrite(VERDE1, verdeVal);
  analogWrite(AZUL1, azulVal);
  analogWrite(ROJO2, rojoVal);
  analogWrite(VERDE2, verdeVal);
  analogWrite(AZUL2, azulVal);

  tiempoActual = 0;
  while (tiempoActual < tiempoMs && pausaActiva == 0) {
    delay(50);
    tiempoActual = tiempoActual + 50;
    estadoBoton = digitalRead(BOTON_PIN);
    pausaActiva = pausaActiva + (estadoBoton == 0 && anteriorBoton == 1);
    pausaActiva = fmod(pausaActiva, 2);
    anteriorBoton = estadoBoton;
  }

  analogWrite(ROJO1, 0);
  analogWrite(VERDE1, 0);
  analogWrite(AZUL1, 0);
  analogWrite(ROJO2, 0);
  analogWrite(VERDE2, 0);
  analogWrite(AZUL2, 0);

  contadorParpadeo = 0;
  contadorParpadeo = contadorParpadeo + 1;
  analogWrite(ROJO1, rojoVal);
  analogWrite(VERDE1, verdeVal);
  analogWrite(AZUL1, azulVal);
  analogWrite(ROJO2, rojoVal);
  analogWrite(VERDE2, verdeVal);
  analogWrite(AZUL2, azulVal);
  delay(100);
  analogWrite(ROJO1, 0);
  analogWrite(VERDE1, 0);
  analogWrite(AZUL1, 0);
  analogWrite(ROJO2, 0);
  analogWrite(VERDE2, 0);
  analogWrite(AZUL2, 0);
  delay(100);

  contadorParpadeo = contadorParpadeo + 1;
  analogWrite(ROJO1, rojoVal);
  analogWrite(VERDE1, verdeVal);
  analogWrite(AZUL1, azulVal);
  analogWrite(ROJO2, rojoVal);
  analogWrite(VERDE2, verdeVal);
  analogWrite(AZUL2, azulVal);
  delay(100);
  analogWrite(ROJO1, 0);
  analogWrite(VERDE1, 0);
  analogWrite(AZUL1, 0);
  analogWrite(ROJO2, 0);
  analogWrite(VERDE2, 0);
  analogWrite(AZUL2, 0);
  delay(100);

  contadorParpadeo = contadorParpadeo + 1;
  analogWrite(ROJO1, rojoVal);
  analogWrite(VERDE1, verdeVal);
  analogWrite(AZUL1, azulVal);
  analogWrite(ROJO2, rojoVal);
  analogWrite(VERDE2, verdeVal);
  analogWrite(AZUL2, azulVal);
  delay(100);
  analogWrite(ROJO1, 0);
  analogWrite(VERDE1, 0);
  analogWrite(AZUL1, 0);
  analogWrite(ROJO2, 0);
  analogWrite(VERDE2, 0);
  analogWrite(AZUL2, 0);
  delay(100);
}
