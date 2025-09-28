Alumno: Jeremías Nieto 
Año: 4° 
División: 1 
Mail: jeremias.nietoet32@gmail.com 
Proyecto Informático 
Profesor: Gonzalo Consorti

1-Crear tu propia melodía:
        Utiliza la herramienta en línea Online Sequencer para componer una melodía original. (Polifónica osea 2 arduinos con 2 buzzer haciendo sonar 2 melodías a la vez que conformen una sola al sonar al unísono)
        Configura la melodía con los siguientes parámetros:
Grid: 1/4
Time Signature: 4/4
Key: C mayor
Instrument: Grand Piano
Ajusta el BPM (beats por minuto / tempo) para que esté entre 90 y 130. Esta configuración determina la velocidad de la melodía.
MINIMO 30 notas por canal de sonido (cada conjunto de arduino + buzzer es un canal)

2-Exportar la melodía a formato MIDI:
        Una vez creada la melodía, expórtala como un archivo MIDI.

3-Convertir el archivo MIDI a datos para Arduino:
Usa la herramienta en línea MIDI to Arduino Converter para convertir tu archivo MIDI a datos que puedas usar en tu código de Arduino.
La herramienta proporcionará las notas y los tiempos correspondientes. Deberás interpretar estos datos y convertirlos en vectores para el código Arduino, siguiendo las reglas de duración y silencio descritas a continuación.

4- Implementar la melodía en Arduino:
        Notas y Duraciones:
MINIMO 30 notas por canal de sonido (cada conjunto de arduino + buzzer es un canal)    (sin contar los silencios).
La melodía debe repetirse infinitamente: una vez que termine, debe esperar unos segundos y luego comenzar nuevamente desde el principio.
5-Duraciones de las Figuras Musicales en la pagina:
En el vector de nota va la nota musical, en el vector de figura la duración de dicha nota (cuadritos)
Si no se va a tocar ninguna nota porque quieren que este sonando nada, en el vector de notas iría un 0 y en el de figura el silencio correspondiente
En arduino:
            Redonda =  2 = 32 cuadraditos
            Blanca = 4  = 16 cuadraditos
            Negra = 8 = 8 cuadraditos
            Corchea = 16 = 4 cuadraditos
            Semicorchea = 32  = 2 cuadraditos
                                    = 64  = 1 cuadraditos
           
            Silencio de Redonda = -2  con nota 0 (cero)
            Silencio de Blanca = -4  con nota 0 (cero)
            Silencio de Negra = -8con nota 0 (cero)
            Silencio de Corchea = -16con nota 0 (cero)
            Silencio de Semicorchea = -32 con nota 0 (cero)

7-Configuraciones:
Declara los valores de ajuste como constantes globales con tipo en tu código:
BMP/tempo
Utiliza las notas musicales de la biblioteca pitches.h - estas deben ser declaradas como constantes globales sin tipo y solo debes incluir las notas que vas a usar.  ( que tiene el formato NOTE_G3 = 196  )
