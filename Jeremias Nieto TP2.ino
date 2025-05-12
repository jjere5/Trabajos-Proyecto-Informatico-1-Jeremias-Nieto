// C++ code
int POTENCIA;
int esperartiempo;
int pulsador; 
int COLORPRIMERO;
int colorSEGUNDO;
int colorTRES;
int rojo1, verde2, azul3;
int azul2, verde3; 
const int botonPin = 12; 
bool pausa = false;
int tiemposegundos;


void esperarSiBotonPresionado() {
  if (digitalRead(botonPin) == LOW) {
    digitalWrite(13, LOW);
    Serial.println("Pausa activada");
   
    while (digitalRead(botonPin) == LOW) {
      delay(50); 
    }
    
    Serial.println("Pausa desactivada");
    delay(200); 
    
  }
  digitalWrite(13, HIGH);
}

void parpadeo(){
  
  COLORPRIMERO = analogRead(A0);
  rojo1 = (COLORPRIMERO * 255) / 1023;
  colorSEGUNDO = analogRead(A1);
  azul2 = (colorSEGUNDO * 255) / 1023;
  colorTRES = analogRead(A2);
  verde3 = (colorTRES * 255) / 1023;
    
  analogWrite(11, rojo1);
  
  
  
  analogWrite(9, azul2);
  analogWrite(3, verde3);
  analogWrite(10, rojo1);
  analogWrite(5, azul2);
  analogWrite(6, verde3);
  delay(200);
  analogWrite(11, 0);
  analogWrite(9, 0);
  analogWrite(3, 0);
  analogWrite(10, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(200);
   analogWrite(11, rojo1);
  analogWrite(9, azul2);
  analogWrite(3, verde3);
  analogWrite(10, rojo1);
  analogWrite(5, azul2);
  analogWrite(6, verde3);
  delay(200);
  analogWrite(11, 0);
  analogWrite(9, 0);
  analogWrite(3, 0);
  analogWrite(10, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(200);
   analogWrite(11, rojo1);
  analogWrite(9, azul2);
  analogWrite(3, verde3);
  analogWrite(10, rojo1);
  analogWrite(5, azul2);
  analogWrite(6, verde3);
  delay(200);
  analogWrite(11, 0);
  analogWrite(9, 0);
  analogWrite(3, 0);
  analogWrite(10, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(200);
  
}

void setup()
{
    Serial.begin(9600);


   pinMode(1, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(13, OUTPUT);
  
pinMode(botonPin, INPUT_PULLUP);
}

void loop(){ 
  tiemposegundos=esperartiempo/100;
  Serial.print("rojo: ");
  Serial.println(rojo1);
  Serial.print("azul: ");
  Serial.println(azul2);
  Serial.print("verde: ");
  Serial.println(verde3);
  
  Serial.print("Tiempo: "); 
  Serial.println(tiemposegundos);
     POTENCIA=analogRead(A3);
    esperartiempo=POTENCIA/3.33;   
  esperarSiBotonPresionado();
  //
  // primera luz
  digitalWrite(13, LOW);
  analogWrite(11, 255);
  analogWrite(9, 0);
  analogWrite(3, 0);
  delay(esperartiempo);
  analogWrite(11, 0);
  analogWrite(9, 0);
  analogWrite(3, 0);
  digitalWrite(13, HIGH);
  delay(200);
  esperarSiBotonPresionado();

  //
    parpadeo();
  esperarSiBotonPresionado();
//

  // segunda luz
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(esperartiempo);
    digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(13, HIGH);
  delay(200);
  esperarSiBotonPresionado();

  // 
     parpadeo();
  esperarSiBotonPresionado();
  //
  // tercera luz
 
 
}