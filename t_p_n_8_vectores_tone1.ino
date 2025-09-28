#define ARRAY_LEN(array) (sizeof(array) / sizeof(array[0]))
#define Db2 78
#define Fb3 185
#define F3 175
#define D3 147
#define Db3 156
#define B2 123
#define Gb2 104
#define Ab2 117

const int midi1[40][3] = {
 {Db2, 115, 231},
 {Fb3, 231, 115},
 {F3, 231, 115},
 {D3, 231, 231},
 {Db3, 231, 115},
 {B2, 231, 115},
 {Gb2, 231, 231},
 {Ab2, 231, 231},
 {Db2, 231, 115},
 {Fb3, 231, 115},
 {F3, 231, 115},
 {D3, 231, 231},
 {Db3, 231, 115},
 {B2, 231, 115},
 {Gb2, 231, 231},
 {Ab2, 231, 231},
 {Db2, 231, 115},
 {Fb3, 231, 115},
 {F3, 231, 115},
 {D3, 231, 231},
 {Db3, 231, 115},
 {B2, 231, 115},
 {Gb2, 231, 231},
 {Ab2, 231, 231},
 {Db2, 231, 115},
 {Fb3, 231, 231},
 {B2, 231, 231},
 {Db3, 231, 115},
 {Db2, 231, 346},
 {Fb3, 231, 346},
 {B2, 231, 231},
 {Db3, 231, 115},
 {Db2, 231, 115},
 {Fb3, 231, 115},
 {F3, 231, 115},
 {D3, 231, 231},
 {Db3, 231, 115},
 {B2, 231, 115},
 {Gb2, 231, 231},
 {Ab2, 231, 231},
};

int buzzer1 = 3; // buzzer melodía
int buzzer2 = 5; // buzzer hace pitidos

// función para tocar la melodía
void playMidi(int pin, const int notes[][3], size_t len){
  for (int i = 0; i < len; i++) {
    tone(pin, notes[i][0]);   
    delay(notes[i][1]);       
    noTone(pin);
    delay(notes[i][2]);       // silencio entre notas
  }
}

void setup() {

}

void loop() {
  // 1) Reproducir la melodía en el buzzer 1
  playMidi(buzzer1, midi1, ARRAY_LEN(midi1));

  // 2) Cuando termina, el buzzer2 hace pitidos infinitos
  for (int i = 0; i < 5; i++) {   // suena 5 veces
    tone(buzzer2, 500);           // frecuencia 500 Hz
    delay(200);
    noTone(buzzer2);
    delay(200);
  }

  // 3) Pausa antes de repetir todo el loop
  delay(2000);
}

