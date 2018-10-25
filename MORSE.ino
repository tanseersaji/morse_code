/*
 * Blink on-board LED
 */

#define LED 13

// The time duration of DOT (in morse code is set to 250ms)
#define DOT 250
#define DASH DOT*3
#define SEP DOT

void setup(){
//  Initialise PIN

pinMode(LED, OUTPUT);

}

/* Trinary system of morse code STARTS */

void sep(int i){
  digitalWrite(LED, LOW);
  delay(SEP*i);
}

void dot(){
  digitalWrite(LED, HIGH);
  delay(DOT);
  sep(1);
}
void dash(){
  digitalWrite(LED, HIGH);
  delay(DASH);
  sep(1);
}

/* Trinary system of morse code ENDS */


/* Alphabet morse code STARTS */

void morseA(){
  dot();
  dash();
  sep(2);
}

void morseB(){
  dash();
  dot();
  dot();
  dot();
  sep(2);
}

void morseC(){
  dash();
  dot();
  dash();
  dot();
  sep(2);
}

void morseD(){
  dash();
  dot();
  dot();
}

void morseE(){
  dot();
  sep(2);
}

void morseF(){
  dot();
  dot();
  dash();
  dot();
  sep(2);
}

void morseG(){
  dash();
  dash();
  dot();
  sep(2);
}

void morseH(){
  dot();
  dot();
  dot();
  dot();
  sep(2);
}

void morseI(){
  dot();
  dot();
  sep(2);
}

void morseJ(){
  dot();
  dash();
  dash();
  dash();
  sep(2);
}

void morseK(){
  dash();
  dot();
  dash();
  sep(2);
}

void morseL(){
  dot();
  dash();
  dot();
  dot();
  sep(2);
}

void morseM(){
  dash();
  dash();
  sep(2);
}

void morseN(){
  dash();
  dot();
  sep(2);
}

void morseO(){
  dash();
  dash();
  dash();
  sep(2);
}

void morseP(){
  dot();
  dash();
  dash();
  dot();
  sep(2);
}

void morseQ(){
  dash();
  dash();
  dot();
  dash();
  sep(2);
}

void morseR(){
  dot();
  dash();
  dot();
  sep(2);
}

void morseS(){
  dot();
  dot();
  dot();
  sep(2);
}

void morseT(){
  dash();
  sep(2);
}

void morseU(){
  dot();
  dot();
  dash();
  sep(2);
}

void morseV(){
  dot();
  dot();
  dot();
  dash();
  sep(2);
}

void morseW(){
  dot();
  dash();
  dash();
  sep(2);
}

void morseX(){
  dash();
  dot();
  dot();
  dash();
  sep(2);
}

void morseY(){
  dash();
  dot();
  dash();
  dash();
  sep(2);
}

void morseZ(){
  dash();
  dash();
  dot();
  dot();
  sep(2);
}

void morse0(){
  dash();
  dash();
  dash();
  dash();
  dash();
  sep(2);
}

void morse1(){
  dot();
  dash();
  dash();
  dash();
  dash();
  sep(2);
}

void morse2(){
  dot();
  dot();
  dash();
  dash();
  dash();
  sep(2);
}

void morse3(){
  dot();
  dot();
  dot();
  dash();
  dash();
  sep(2);
}

void morse4(){
  dot();
  dot();
  dot();
  dot();
  dash();
  sep(2);
}

void morse5(){
  dot();
  dot();
  dot();
  dot();
  dot();
  sep(2);
}

void morse6(){
  dash();
  dot();
  dot();
  dot();
  dot();
  sep(2);
}

void morse7(){
  dash();
  dash();
  dot();
  dot();
  dot();
  sep(2);
}

void morse8(){
  dash();
  dash();
  dash();
  dot();
  dot();
  sep(2);
}

void morse9(){
  dash();
  dash();
  dash();
  dash();
  dot();
  sep(2);
}

void morseStop(){
  dot();
  dash();
  dot();
  dash();
  dot();
  dash();
  sep(2);
}

void morseComma(){
  dash();
  dash();
  dot();
  dot();
  dash();
  dash();
  sep(2);
}

/* Alphabet morse codes ENDS *?

void loop(){

  // Blinks HI U in morse code.
  morseH();
  morseI();
  sep(6)
  morseU();
  sep(6);
}
