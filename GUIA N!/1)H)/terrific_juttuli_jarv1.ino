int cont = 0; 
void setup() {
  pinMode(5, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  if (digitalRead(5) == LOW) {
    delay(100);
    cont = cont + 1;
    }
    if (cont >= 7) {
      cont = 0;
    }
  if (cont == 0) {
    delay(100);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
 
  }
  if (cont == 1) {
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);

  }
  if (cont == 2) {
  delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  } 
  if (cont == 3) {
    delay(100);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
   if (cont == 4) {
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
   if (cont == 5) {
    delay(100);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
   if (cont == 6) {
    delay(100);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);

  }

}