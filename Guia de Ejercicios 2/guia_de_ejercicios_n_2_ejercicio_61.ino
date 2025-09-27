int numeros[] = {2, 6, 10, 11}; 

void setup() {
  Serial.begin(9600); 
  while (!Serial);  


  for (int i = 0; i < 4; i++) { 
    Serial.print("Multiplos de ");
    Serial.print(numeros[i]);
    Serial.print(": ");
    
    for (int j = 1; j <= 5; j++) {  
      Serial.print(numeros[i] * j);  
      if (j < 5) Serial.print(", ");  
    }
    Serial.println();  
  }
}

void loop() {
 
}
