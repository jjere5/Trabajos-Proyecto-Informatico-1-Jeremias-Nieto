#define BOTON_TOSTADORA A1 
#define PERILLA_VOLANTE A0

#define FOCO_ROJO_ZAPATO 2
#define FOCO_AZUL_LINTERNA 3
#define FOCO_VERDE_PLANTA 4
#define FOCO_VERDE_TAZA 5
#define FOCO_AZUL_TAZA 6
#define FOCO_ROJO_SILLA 7
#define FOCO_AZUL_SILLA 8
#define FOCO_ROJO_MOCHILA 9
#define FOCO_VERDE_MOCHILA 10

bool palancaMicroondas = false;
bool secuenciaLicuadora = false;

void setup() {
  pinMode(FOCO_ROJO_ZAPATO, OUTPUT);
  pinMode(FOCO_AZUL_LINTERNA, OUTPUT);
  pinMode(FOCO_VERDE_PLANTA, OUTPUT);
  pinMode(FOCO_VERDE_TAZA, OUTPUT);
  pinMode(FOCO_AZUL_TAZA, OUTPUT);
  pinMode(FOCO_ROJO_SILLA, OUTPUT);
  pinMode(FOCO_AZUL_SILLA, OUTPUT);
  pinMode(FOCO_ROJO_MOCHILA, OUTPUT);
  pinMode(FOCO_VERDE_MOCHILA, OUTPUT);

  pinMode(BOTON_TOSTADORA, INPUT_PULLUP);
  pinMode(PERILLA_VOLANTE, INPUT);

  digitalWrite(FOCO_ROJO_ZAPATO, LOW);
  digitalWrite(FOCO_AZUL_LINTERNA, LOW);
  digitalWrite(FOCO_VERDE_PLANTA, LOW);
  digitalWrite(FOCO_VERDE_TAZA, LOW);
  digitalWrite(FOCO_AZUL_TAZA, LOW);
  digitalWrite(FOCO_ROJO_SILLA, LOW);
  digitalWrite(FOCO_AZUL_SILLA, LOW);
  digitalWrite(FOCO_ROJO_MOCHILA, LOW);
  digitalWrite(FOCO_VERDE_MOCHILA, LOW);
}

void loop() {
  int dedoPuerta = digitalRead(BOTON_TOSTADORA);

  if (dedoPuerta == LOW && !palancaMicroondas) {
    palancaMicroondas = true;
    secuenciaLicuadora = !secuenciaLicuadora;

    if (!secuenciaLicuadora) {
      digitalWrite(FOCO_ROJO_ZAPATO, LOW);
      digitalWrite(FOCO_AZUL_LINTERNA, LOW);
      digitalWrite(FOCO_VERDE_PLANTA, LOW);
      digitalWrite(FOCO_VERDE_TAZA, LOW);
      digitalWrite(FOCO_AZUL_TAZA, LOW);
      digitalWrite(FOCO_ROJO_SILLA, LOW);
      digitalWrite(FOCO_AZUL_SILLA, LOW);
      digitalWrite(FOCO_ROJO_MOCHILA, LOW);
      digitalWrite(FOCO_VERDE_MOCHILA, LOW);
    }
  }

  if (dedoPuerta == HIGH) {
    palancaMicroondas = false;
  }

  if (secuenciaLicuadora) {
    int giroManija = analogRead(PERILLA_VOLANTE);
    int pausaControl = map(giroManija, 0, 1023, 100, 1000);

    digitalWrite(FOCO_ROJO_ZAPATO, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_ROJO_ZAPATO, LOW);

    digitalWrite(FOCO_AZUL_LINTERNA, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_AZUL_LINTERNA, LOW);

    digitalWrite(FOCO_VERDE_PLANTA, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_VERDE_PLANTA, LOW);

    digitalWrite(FOCO_VERDE_TAZA, HIGH);
    digitalWrite(FOCO_AZUL_TAZA, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_VERDE_TAZA, LOW);
    digitalWrite(FOCO_AZUL_TAZA, LOW);

    digitalWrite(FOCO_ROJO_SILLA, HIGH);
    digitalWrite(FOCO_AZUL_SILLA, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_ROJO_SILLA, LOW);
    digitalWrite(FOCO_AZUL_SILLA, LOW);

    digitalWrite(FOCO_ROJO_MOCHILA, HIGH);
    digitalWrite(FOCO_VERDE_MOCHILA, HIGH);
    delay(pausaControl);
    digitalWrite(FOCO_ROJO_MOCHILA, LOW);
    digitalWrite(FOCO_VERDE_MOCHILA, LOW);
  }
}