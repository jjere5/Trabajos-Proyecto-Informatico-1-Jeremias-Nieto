void setup() {
  pinMode(2, INPUT_PULLUP); 
  pinMode(1, OUTPUT);
}

void loop() {
 
  if (digitalRead(2) == LOW){
      digitalWrite(1, HIGH);
       delay(200);
      digitalWrite(1, LOW);
       delay(200);
  }
}