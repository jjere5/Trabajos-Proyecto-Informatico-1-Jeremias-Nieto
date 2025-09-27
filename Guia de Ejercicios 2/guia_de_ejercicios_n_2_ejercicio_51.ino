const int led1Pin = 13; 
const int led2Pin = 12;  
int secuenciaLED1[] = {1, 0, 0, 1, 1, 0, 1, 1};  
int secuenciaLED2[] = {0, 1, 0, 1, 0, 0, 1, 0};  

void setup() {
  pinMode(led1Pin, OUTPUT);  
  pinMode(led2Pin, OUTPUT); 
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(led1Pin, secuenciaLED1[i] == 1 ? HIGH : LOW);  
    digitalWrite(led2Pin, secuenciaLED2[i] == 1 ? HIGH : LOW); 
    delay(500); 
  }
}
