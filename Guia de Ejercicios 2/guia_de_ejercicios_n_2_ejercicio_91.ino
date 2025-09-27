int pinR = 9;
int pinG = 10;
int pinB = 11;  


int L1[3] = {255, 0, 0};   
int L2[3] = {0, 255, 0};   
int L3[3] = {0, 0, 255};   


int* colores[3] = {L1, L2, L3};

void setup() {
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    analogWrite(pinR, colores[i][0]);
    analogWrite(pinG, colores[i][1]); 
    analogWrite(pinB, colores[i][2]);
    delay(1000); 
  }
}
