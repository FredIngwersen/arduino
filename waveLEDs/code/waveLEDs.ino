/**********************************************
 *  Name: LED Wave
 *  Function: creates a wave with 8 LEDs, from left to right, then vice versa
 *  Creator: Frederik Ingwersen
 */


int ledNum = 8; //the number of the led you attach
byte ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9};    // Create array for LED pins
int ledDelay; // delay between changes
int potPin=A0;//Potentiometer attach to pinA0


void setup() {
  
    //set all leds as OUTPUT
  for (int x = 0; x < ledNum; x++) { 
    pinMode(ledPin[x], OUTPUT); 

  }  
}

void loop() {

  
  for(int i = 0; i < 8; i++) {
    ledDelay = analogRead(potPin);//read the value of A0
    digitalWrite(ledPin[i],HIGH);//turn on LEDs
    delay(ledDelay);//delay the times which read from potentiometer
    //digitalWrite(ledPin[i],LOW);//turn off leds   
     
  }

  for(int i = 0; i < 8; i++) {
    ledDelay = analogRead(potPin);//read the value of A0
    //digitalWrite(ledPin[i],HIGH);//turn on LEDs
    delay(ledDelay);//delay the times which read from potentiometer
    digitalWrite(ledPin[i],LOW);//turn off leds
  }

    for(int i = 8; i >= 0; i--) {
      ledDelay = analogRead(potPin);//read the value of A0
      //digitalWrite(ledPin[i],HIGH);//turn on LEDs
      delay(ledDelay);//delay the times which read from potentiometer
      digitalWrite(ledPin[i],HIGH);//turn off leds
  }

    for(int i = 8; i >= 0; i--) {
      ledDelay = analogRead(potPin);//read the value of A0
      //digitalWrite(ledPin[i],HIGH);//turn on LEDs
      delay(ledDelay);//delay the times which read from potentiometer
      digitalWrite(ledPin[i],LOW);//turn off leds
  }
  delay(ledDelay);
}
