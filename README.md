Alumno: Jeremías Nieto 
Año: 4° 
División: 1 
Mail: jeremias.nietoet32@gmail.com 
Proyecto Informático 
Profesor: Gonzalo Consorti

El examen se resuelve solo con los temas visto en clase, si se resuelve con algo que no vimos en clase 1 punto menos por cada cosa que no explicamos en clase.
Antes de realizar la consigna, por favor mirar las rubricas de calificación en la tarea (descripción y nota).
Tiempo estimado de examen 80min. (los tiempos son estrictos con reloj en pantalla y alarma)

Componentes que podra ser utilizados:
Protoboard
Arduino
Resistencia (220)
Potenciómetro (10K)
PushButton
Led RGB ( no vamos a usar led comunes)
Buzzers
Fotorresistencia
Sensor Ultrasónico
Sensor PIR
Sensor Temperatura
Pantalla LCD
Sensor inclinación
sensor flexible
detector de Luz
sensor de humedad
NeoPixel
Touchpad 4x4
relé
transistor (tip120) o (nMOS)
Codificación que podrá ser utilizada  :
#Define y Macros
#ifdef  #endif
Variables (locales y globales)   ( se admiten variables  contadoras )
Condicional simple ( if - else if - else  -  if ternario )
Condicional Compuesto ( AND , OR , NOT)
pinMode ( INPUT, OUTPUT, INPUT_PULLUP)
Lectura/Escritura Digital
Lectura/Escritura Analógica
Función MAP, Constrain
delay
delayMicrosecond
Operadores aritméticos:     +   -   /   *    %
Operadores de comparación:  <  >  >=  <=  !=    !
Consola de Monitor Serial  Serial.print() y Serial.println()
------------------------------------------------------------------------------
Recomendación: realizar cada parte de forma individual y después unirlo para que todo el sistema completo ya que la rubrica de evaluación es por partes (aunque debe de quedar integrado para considerarse aprobado)
------------------------------------------------------------------------------

Consigna: Debes crear un sistema de monitoreo y visualización que esta compuesto por los siguientes componenetes y su funcionalidad:

1)Comportamiento del Anillo de NeoPixel (12 LEDs):El anillo de 12 LEDs debe comenzar todo en verde cuando la distancia es mínima y se va apagando progresivamente conforme la distancia aumenta. El color de los LEDs debe cambiar de verde a rojo, apagándose gradualmente, a medida que el sensor detecta una mayor distancia.

: El anillo completo se ilumina en verde.
: El anillo se va apagando gradualmente, y el color cambia de verde a amarillo y luego a rojo.
: El anillo parpadea, con todos los LEDs en rojo.

: La transición de color debe ser gradual, y los LEDs se deben apagar o cambiar de color de manera progresiva conforme la distancia aumenta.

Incremento de LEDs:
Como el sensor de distancia se usa para medir la proximidad, más LEDs deben transicionar de color conforme la distancia medida aumenta o disminuye. Los LEDs deben seguir una transición de colores de verde a amarillo y luego a rojo según la distancia.


Desde 0 hasta 300cm: Los LEDs deben iluminarse/apagarse de forma progresiva y cambiar de verde a medida que la distancia disminuye. (pixeles 0 al 4) (verde)
De 300 a 800cm: Los LEDs deben iluminarse/apagarse de forma progresiva y cambiar de verde a amarillo (pixeles 5 a 8).(amarillo)
De 800 a  999cm: Los LEDs deben iluminarse/apagarse de forma progresiva y cambiar  de amarillo a rojo (pixeles 6 a 11)(amarillo)
En 1000 o si no se detecta distancia:  El anillo parpadea, con todos los LEDs en rojo.(rojo)

2)Lectura del Sensor de distancia y Monitor Serial:

El sensor de distancia medirá la distancia hasta un máximo de 1000. Los valores de distancia se deben ajustar para que el sistema reaccione de manera adecuada con los LEDs y el buzzer, siguiendo la siguiente lógica:

De 0 a 1000cm: Los valores de distancia deben ajustarse para obtener una salida adecuada en los LEDs y el buzzer, de modo que los LEDs y el buzzer se comporten de acuerdo a la proximidad del objeto (con una transición progresiva desde verde a rojo, y pitidos que aumentan en frecuencia conforme la distancia disminuye).

Nota: El sensor debe ser capaz de proporcionar lecturas precisas, y el código debe ajustarse para interpretar estas lecturas de manera proporcional a la distancia real ( hasta 300cm).
Debes realizar pruebas de lectura del sensor mediante el Monitor Serial, mostrando en la consola los valores que recibe el Arduino.
mostrar la distancia leída y las escaladas.
Deshabilitar la parte del código para pruebas de sensores luego de realizar las pruebas de valores.
Se debe poder activar y desactivar bloques de código con variables de definición

3)Comportamiento del Buzzer: El buzzer debe emitir pitidos

El buzzer debe emitir pitidos que varían en función de la distancia detectada por el sensor de distancia. La velocidad de los pitidos debe ajustarse según la proximidad al objeto.

Verde (0-300cm): No debe sonar el buzzer.
Amarillo (300-500 cm): El buzzer debe emitir pitidos lentos (cada 500 ms).
Amarillo (500-800 cm): El buzzer emite pitidos más rápidos (cada 50 ms).
Rojo (800-1000 cm): El buzzer debe emitir pitidos continuos (cada 10-20 ms).

Nota: Los pitidos deben volverse más rápidos conforme la distancia se acerca al valor máximo, para indicar una proximidad creciente.
4)Pantalla LCD debe mostrar: 

La pantalla LCD debe mostrar lo siguiente:
La distancia escalada medida por el sensor, en centímetros.
Un mensaje de advertencia que indica si el objeto está demasiado cerca o demasiado lejos: Si la distancia es menor a 300 cm: "¡Distancia Optima!"
Si la distancia es mayor a 800 cm: "¡Demasiado lejos!"
El estado del sistema: Si el sistema está encendido o apagado, dependiendo de la posición del botón de encendido/apagado.
5) PushButton con funcion de boton: Un PushButton debe usarse para encender y apagar el sistema completo. Al presionar el botón (una sola vez), el sistema debe activarse o desactivarse por completo.
Cuando el sistema está apagado: Todos los LEDs deben estar apagados, el buzzer debe estar inactivo y la pantalla LCD debe mostrar "Sistema Apagado".
Cuando el sistema está encendido: Los LEDs, el buzzer y la pantalla LCD deben funcionar normalmente, y deben responder a los cambios de distancia del sensor.
