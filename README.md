Alumno: Jeremías Nieto
Año: 4°
División: 1
Mail: jeremias.nietoet32@gmail.com
Proyecto Informático
Profesor: Gonzalo Consorti
Usando el ejercicio del TP1 como base:
Desarrollar un sistema con , controlando el tiempo entre los cambios de colores mediante una resistencia variable (potenciómetro) que valla desde 0s(aprox) min a 3s(aprox) max, y el encendido/apagado de los LEDs con un pulsador (en funcionalidad boton) que puede detener y recomenzar la secuencia en cualquier momento,  un buzzer que emitirá un sonido cuando cambien los colores (junto a la secuencia de parpadeo).

 Además, los colores de los LEDs serán personalizables por el usuario usando 3 potenciometros para ajustar los valores de RGB,  durante el tiempo entre apagar un LED y encender el siguiente, hacer que los  (aproximadamente 100ms por parpadeo) y se mostrará un mensaje en el monitor serial que indica la configuración de colores con el siguiente formato:
1° Renglón =>      Tiempo: x            Donde x es el valor en Segundos  (no en miliSegundos)
2° Renglón =>      R:x
G:x
B:x      Donde x es el valor que va a tener de color en escala 0-255

Pista:  para poder escalar el valor cíclico de las lecturas analogías a un valor estable de salida analogía se puede realizar una regla de 3 simple:  (value * 255) / 1023
