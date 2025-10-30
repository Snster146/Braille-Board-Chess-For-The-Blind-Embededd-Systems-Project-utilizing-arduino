#include "SD.h"
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

#define SD_ChipSelectPin 10

#define ButtonA A0
#define ButtonB A1
#define ButtonC A2
#define ButtonD A3 
#define ButtonE A4
#define ButtonG A5

void setup() {
  tmrpcm.speakerPin = 9;
  pinMode(ButtonA, INPUT);
  pinMode(ButtonB , INPUT);
  pinMode(ButtonC , INPUT);
  pinMode(ButtonD , INPUT);
  pinMode(ButtonE , INPUT);
  pinMode(ButtonG, INPUT);

  Serial.begin(9600);

  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("Failed to read from SD card");
    return;
  }
  Serial.println("SD card initialized successfully");

  tmrpcm.setVolume(6);
}
void loop() {
  checkButton(ButtonA, "A");
  checkButton(ButtonB, "B");
  checkButton(ButtonC, "C");
  checkButton(ButtonD , "D");
  checkButton(ButtonE , "E");
  checkButton(ButtonG, "G");
}

//all ive changed is calling functino that reads state in loop and passing parameter button pin and button row in order to better structure code , less lines hopefully use less memory resulting (hopefully) in less errors !!!!

void checkButton(int buttonPin, String row) {
  int reading = analogRead(buttonPin);
  Serial.println(reading);
  //more elegent as only has to write the 8 if statements once 
  if (reading >= 1000 && reading <=2023) {//change for the parameter of a  button press that matches the button , for example 1018 to 1023 = button `1 of whatever row is in the parameter row 
    delay(50); // Debouncing delay
     Serial.println("Button " + row + "1 was pressed");
     //must include if statememnt for each row , place different sound files for first letter of coordinates for each , everything else stays the same i guess
     
     if (row =="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
     else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("ONE.WAV");
      delay(1000);
      }
      }
  if (reading >=508 && reading <=600){
    
   delay(50);
    Serial.println("Button" + row + "2 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }

    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("TWO.WAV");
      delay(1000);
      }
    }

  if (reading >=335 && reading <=345){
    
   delay(50);
    Serial.println("Button" + row + "3 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("THR.WAV");
      delay(1000);
      }
    }

  if (reading >=250 && reading <=300){
    
   delay(50);
    Serial.println("Button" + row + "4 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("FOU.WAV");
      delay(1000);
      }
    }

    
  if (reading >=198 && reading <=208){
    
   delay(50);
    Serial.println("Button" + row + "5 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("FIV.WAV");
      delay(1000);
      }
    }

    
  if (reading >=164 && reading <=174){
    
   delay(50);
    Serial.println("Button" + row + "6 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("SIX.WAV");
      delay(1000);
      }
    }

    
  if (reading >=140 && reading <=150){
    
   delay(50);
    Serial.println("Button" + row + "7 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("SEV.WAV");
      delay(1000);
      }
    }

    
  if (reading >=121 && reading <=131){
    
   delay(50);
    Serial.println("Button" + row + "8 was pressed");
    if (row=="A"){
      tmrpcm.play("AI.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "B"){
      tmrpcm.play("BB.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "C"){
      tmrpcm.play("CC.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "D"){
      tmrpcm.play("DD.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "E"){
      tmrpcm.play("EE.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "F"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row == "G"){
      tmrpcm.play("GG.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    }

    //ANALOG FOR ROW F AND H , COLOUM 1
  if (reading >=108 && reading <=118){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
    }

   //COLOUM 2 FOR ROW F AND H 
  if (reading >=97 && reading <=107){
    
   delay(50);
   if (row  =="E"){
    Serial.println("BUTTON F2 WAS PRESSED");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
    }
//COLOUM 3 FOR ROW F AND H 
  if (reading >=87 && reading <=96){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
    }

  //COLOUM 4 FOR ROW F AND H 

  if (reading >=79 && reading <=86){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
    }

  //COLOUM 5 FOR ROW F AND H 

  if (reading >=40 && reading <=50){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
    }

  //COLOUM 6 FOR ROW F AND H 

  if (reading >=26 && reading <=39){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
    }

  //COLOUM 7 FOR ROW F AND H 

  if (reading >=20 && reading <=25){
    
   delay(50);
   if (row  =="E"){
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   else if (row == "G"){
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
    }
  if (reading >=10 && reading <=19){
    delay(50);
    if (row=="E"){
      tmrpcm.play("FF.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
      }
    else if (row=="G"){
      tmrpcm.play("HH.WAV");
      delay(1000);
      tmrpcm.play("EIG.WAV");
      delay(1000);
    }
    }
    

    
  delay(10);
    
    
  }
