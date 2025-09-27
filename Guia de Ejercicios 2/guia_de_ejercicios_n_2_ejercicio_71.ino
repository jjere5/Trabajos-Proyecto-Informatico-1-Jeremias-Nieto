int leds[] = {10, 9, 8, 7, 6, 5};  
int N = 6;  

void setup() {
  for (int i = 0; i < N; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < N; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }

 
  for (int i = 0; i < N; i++) {
    digitalWrite(leds[i], LOW);
    delay(200);
  }
}
