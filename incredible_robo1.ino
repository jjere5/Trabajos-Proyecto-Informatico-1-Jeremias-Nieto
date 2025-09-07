#define PIN_PIR 2
#define PIN_TEMP A0
#define PIN_LAMPARA 3
#define PIN_VENTILADOR 5

void setup()
{
  pinMode(PIN_TEMP, INPUT);
  pinMode(PIN_PIR, INPUT);
  pinMode(PIN_VENTILADOR, OUTPUT);
  pinMode(PIN_LAMPARA, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lecturaTemp = analogRead(PIN_TEMP);
  float temperatura = ((float)lecturaTemp * 5.0 / 1024) * 100 - 50;
  
  bool hayMovimiento = digitalRead(PIN_PIR);
  Serial.println(temperatura);
  
  if (hayMovimiento == HIGH){
    if (temperatura < 15){
      analogWrite(PIN_VENTILADOR, 50);
    }
    if (temperatura >= 15 && temperatura < 20){
      analogWrite(PIN_VENTILADOR, 100);
    }
    if (temperatura >= 20 && temperatura < 30) {
      analogWrite(PIN_VENTILADOR, 150);
    }
    if (temperatura >= 30){
      analogWrite(PIN_VENTILADOR, 255 );
    }
  }
  if (temperatura >= 50){
    analogWrite(PIN_LAMPARA, 255);
  }
}
