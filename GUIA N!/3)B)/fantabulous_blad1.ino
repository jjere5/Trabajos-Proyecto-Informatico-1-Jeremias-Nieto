

bool boton = false;
int pot = 0;

void setup() {
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(2, INPUT_PULLUP); 
  pinMode(A0, INPUT); 

  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == LOW) {
    boton = !boton;
    delay(200); 
  }

  if (boton) {
    pot = analogRead(A0);
    Serial.println(pot);
    delay(100);

   
    int rojo = map(pot, 0, 1023, 50, 255);
    int azul = map(pot, 0, 1023, 200, 50);
    int verde = map(pot, 0, 1023, 255, 0);

    analogWrite(3, rojo);
    analogWrite(5, azul);
    analogWrite(6, verde);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}

