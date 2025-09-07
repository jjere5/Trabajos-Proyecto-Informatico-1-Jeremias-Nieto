Alumno: Jeremías Nieto 
Año: 4° 
División: 1 
Mail: jeremias.nietoet32@gmail.com 
Proyecto Informático 
Profesor: Gonzalo Consorti

Implementar un sistema para controlar un ventilador y una lámpara en una habitación, usando:
Un sensor de temperatura para medir la temperatura ambiente.
Un sensor de movimiento (PIR) para detectar si hay alguien en la habitación.
Controlar un ventilador (Motor DC gris) de 12V con velocidad variable dependiendo de la temperatura, 
y una lámpara 12V que se encienda solo cuando hay personas.
  Temperatura mayor a 50°C  
Ventilador a máxima velocidad si importar si hay o no gente dentro
 Temperatura menor a 50°C  
el ventilador esta apagado

Si hay movimiento (persona detectada) y temperatura menor a 50°C  
Ventilador se enciende con velocidad proporcional a temperatura en rangos:
Lámpara encendida 

mientras haya persona 
≤15°C → velocidad mínima PWM = 50
15–20°C → PWM = 100
20–30°C → PWM = 150
30°C → PWM = 255 (máximo)
Si no hay persona (sin movimiento) 
lámpara apagada
