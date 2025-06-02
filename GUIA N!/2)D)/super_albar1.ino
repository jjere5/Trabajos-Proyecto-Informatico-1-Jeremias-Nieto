void setup() {
  pinMode(3, OUTPUT);  
  pinMode(5, OUTPUT);   
  pinMode(6, OUTPUT);   

  pinMode(9, OUTPUT);   
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);  
}

void loop() {
  int potenciometrossj = analogRead(A1); 

  int tiempo = potenciometrossj / 2;


  analogWrite(9, 255);   
  analogWrite(10, 0);    
  analogWrite(11, 255);  

  analogWrite(3, 255);   
  analogWrite(5, 255);   
  analogWrite(6, 0);     

  delay(tiempo); 

  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);

  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);

  delay(tiempo); 
}

