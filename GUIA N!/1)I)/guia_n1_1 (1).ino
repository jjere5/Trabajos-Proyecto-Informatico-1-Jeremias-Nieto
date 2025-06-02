int cont = 0;
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, INPUT_PULLUP);
}
void loop()
{

 if (digitalRead(12) == HIGH) {
 digitalWrite(1, HIGH);
 
 delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(2, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(3, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(4, HIGH);
delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(5, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {
 
 digitalWrite(10, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(9, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {

 digitalWrite(8, HIGH);
 delay (100);
 
 if (digitalRead(12) == HIGH) { 
 digitalWrite(7, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) { 
 
 digitalWrite(6, HIGH);
 delay (100);

 if (digitalRead(12) == HIGH) {
  digitalWrite(6, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
    delay (200);

  }
   } 
   } 
   } 
   } 
   } 
   } 
   } 
   } 
   } 
   } 
}