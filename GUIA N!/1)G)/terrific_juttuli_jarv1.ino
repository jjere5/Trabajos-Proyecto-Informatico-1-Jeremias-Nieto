
int cont = 0;

void setup() {
  pinMode(5, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);


  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}

void loop() {
  if (digitalRead(5) == LOW) {
    cont = cont + 1;

    if (cont >= 4) {
      cont = 0;
    }


    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);


    if (cont == 0) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }

    if (cont == 1) {
      digitalWrite(2, HIGH);
    }

    if (cont == 2) {
      digitalWrite(3, HIGH);
    }

    if (cont == 3) {
      digitalWrite(4, HIGH);
    }

    delay(200);
  }
}