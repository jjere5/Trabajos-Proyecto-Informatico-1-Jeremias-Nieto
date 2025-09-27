const int ledPin = 3;
int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) { 
    digitalWrite(ledPin, secuencia[i] == 1 ? HIGH : LOW); 
    delay(500); 
  }
}
