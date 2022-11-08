//Global Variables go Here

int pinActive = 2; //Digital pin number
String stringIn = ""; //initialise empty string
int timeunit = 250; //Morse code time unit
int timeDot = timeunit;
int timeDash = 3*timeunit;
int timeLetter = timeDash;
int timeWord = 7*timeunit;

void setup() {

Serial.begin(9600);
Serial1.begin(9600);
pinMode(pinActive, OUTPUT); //Set pin as an output
digitalWrite(pinActive, LOW);
Serial1.write("WELCOME?TO?UOM?");

}

void morseWord(){
  delay(timeWord);
}

void morseDot(){ //Make a dot blink
  digitalWrite(pinActive, HIGH);
  delay(timeDot);
  digitalWrite(pinActive, LOW);
  delay(timeunit);
}

void morseDash(){
  digitalWrite(pinActive,HIGH);
  delay(timeDash);
  digitalWrite(pinActive,LOW);
  delay(timeunit);
}

void morseA() { //morse code for letter A
  morseDot();
  morseDash();
}

void morseB(){ //morse code for letter B
  morseDash();
  morseDot();
  morseDot();
  morseDot();
}

void morseC(){
  morseDash();
  morseDot();
  morseDash();
  morseDot();
}

void morseD(){
  morseDash();
  morseDot();
  morseDot();
}

void morseE(){
  morseDot();
}

void morseF(){
  morseDot();
  morseDot();
  morseDash();
  morseDot();
}

void morseG(){
  morseDash();
  morseDash();
  morseDot();
}

void morseH(){
  morseDot();
  morseDot();
  morseDot();
  morseDot();
}

void morseI(){
  morseDot();
  morseDot();
}

void morseJ(){
  morseDot();
  morseDash();
  morseDash();
  morseDash();
}

void morseK(){
  morseDash();
  morseDot();
  morseDash();
}

void morseL(){
  morseDot();
  morseDash();
  morseDot();
  morseDot();
}

void morseM(){
  morseDash();
  morseDash();
}

void morseN(){
  morseDash();
  morseDot();
}

void morseO(){
  morseDash();
  morseDash();
  morseDash(); 
}

void morseP(){
  morseDot();
  morseDash();
  morseDash();
  morseDot();
}

void morseQ(){
  morseDash();
  morseDash();
  morseDot();
  morseDash();
}

void morseR(){
  morseDot();
  morseDash();
  morseDot();
}

void morseS(){
  morseDot();
  morseDot();
  morseDot();
}

void morseT(){
  morseDash();
}

void morseU(){
  morseDot();
  morseDot();
  morseDash();
}

void morseV(){
  morseDot();
  morseDot();
  morseDot();
  morseDash();
}

void morseW(){
  morseDot();
  morseDash();
  morseDash();
}

void morseX(){
  morseDash();
  morseDot();
  morseDot();
  morseDash();
}

void morseY(){
  morseDash();
  morseDot();
  morseDash();
  morseDash();
}

void morseZ(){
  morseDash();
  morseDash();
  morseDot();
  morseDot();
}

void loop() {

  if (Serial.available() > 0 && Serial1.available() == 0) { //wait here for input or until timeout
    stringIn = Serial.readString(); //read serial input string
    stringIn.trim(); //get rid of string delimiter
    Serial.println("String input is: " + stringIn);
  }
  else if (Serial1.available() > 0 && Serial.available() == 0){
    stringIn = Serial1.readString();
    stringIn.trim(); //get rid of string delimiter
    Serial.println("String input is: " + stringIn);
  }
  else{
    Serial.println(stringIn);
    int i = 0; //Initialise counter
    for(i=0; i<stringIn.length(); i++){ //check every single letter in stringIn
      if(stringIn[i] == 'A'){
        morseA();
        digitalWrite(pinActive, HIGH);
      }
      else if(stringIn[i] == 'B'){
        morseB();
      }
      else if(stringIn[i] == 'C'){
        morseC();
      }
      else if(stringIn[i] == 'D'){
        morseD();
      }
      else if(stringIn[i] == 'E'){
        morseE();
      }
      else if(stringIn[i] == 'F'){
        morseF();
      }
      else if(stringIn[i] == 'G'){
        morseG();
      }
      else if(stringIn[i] == 'H'){
        morseH();
      }
      else if(stringIn[i] == 'I'){
        morseI();
      }
      else if(stringIn[i] == 'J'){
        morseJ();
      }
      else if(stringIn[i] == 'K'){
        morseK();
      }
      else if(stringIn[i] == 'L'){
        morseL();
      }
      else if(stringIn[i] == 'M'){
        morseM();
      }
      else if(stringIn[i] == 'N'){
        morseN();
      }
      else if(stringIn[i] == 'O'){
        morseO();
      }
      else if(stringIn[i] == 'P'){
        morseP();
      }
      else if(stringIn[i] == 'Q'){
        morseQ();
      }
      else if(stringIn[i] == 'R'){
        morseR();
      }
      else if(stringIn[i] == 'S'){
        morseS();
      }
      else if(stringIn[i] == 'T'){
        morseT();
      }
      else if(stringIn[i] == 'U'){
        morseU();
      }
      else if(stringIn[i] == 'V'){
        morseV();
      }
      else if(stringIn[i] == 'W'){
        morseW();
      }
      else if(stringIn[i] == 'X'){
        morseX();
      }
      else if(stringIn[i] == 'Y'){
        morseY();
      }
      else if(stringIn[i] == 'Z'){
        morseZ();
      }
      else if(stringIn[i] == '?'){
        morseWord();
      }
      else{
        
      }
    } 
  }
}
