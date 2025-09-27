int numeros[10];
int buzzer = 6;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

  randomSeed(analogRead(A0)); 

 
  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11); 
  }

 
  Serial.print("Vector: ");
  for (int i = 0; i < 10; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");

    if (numeros[i] == 5) {
      tone(buzzer, 1000, 300); 
      delay(300); 
    }
  }
  Serial.println();
}

void loop() {

}
