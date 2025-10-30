#include "SD.h"
#include "TMRpcm.h"
#include "SPI.h"

#define SD_ChipSelectPin 10

const int ButtonA1 = 49;
const int ButtonA2 = 48;
const int ButtonA3 = 47;
const int ButtonA4 = 46;
const int ButtonA5 = 45;
const int ButtonA6 = 44;
const int ButtonA7 = 43;
const int ButtonA8 = 42;

const int ButtonB1 = 41;
const int ButtonB2 = 40;
const int ButtonB3 = 39;
const int ButtonB4 = 38;
const int ButtonB5 = 37;
const int ButtonB6 = 36;
const int ButtonB7 = 35; 
const int ButtonB8 = 34;

const int ButtonC1 = 33;
//const int ButtonC2 = 32;
const int ButtonC3 = 31;
const int ButtonC4 = 30;
const int ButtonC5 = 29;
const int ButtonC6 = 28;
const int ButtonC7 = 27; 
const int ButtonC8 = 26;

const int ButtonD1 = 25;
const int ButtonD2 = 24;
const int ButtonD3 = 23; 
const int ButtonD4 = 22;
const int ButtonD5 = A0;
const int ButtonD6 = A1;
const int ButtonD7 = A2; 
const int ButtonD8 = A3;

const int ButtonE1 = A4;
const int ButtonE2 = A5;
const int ButtonE3 = A6;   //F1 = A7
const int ButtonE4 = A8;
const int ButtonE5 = A9;
const int ButtonE6 = A10;
const int ButtonE7 = A11; 
const int ButtonE8 = A12;

const int ButtonF1 = A7;
const int ButtonF2 = A13;
const int ButtonF3 = A14;   
const int ButtonF4 = A15;
const int ButtonF5 = 2;
const int ButtonF6 = 3;
const int ButtonF7 = 4;
const int ButtonF8 = 6;

const int ButtonG1 = 7;
const int ButtonG2 = 8;
const int ButtonG3 = 9;   
const int ButtonG4 = 11;
const int ButtonG5 = 12;
const int ButtonG6 = 13;
const int ButtonG7 = 14;
const int ButtonG8 = 15;

const int ButtonH1 = 16;
const int ButtonH2 = 17;
const int ButtonH3 = 18;   
const int ButtonH4 = 19;
const int ButtonH5 = 20;
const int ButtonH6 = 21;
//const int ButtonH7 = 53;//NO PINS UNLESS DIGITAL 1 OR 2 CAN BE UESD
//const int ButtonH8 = ;//NO PINS UNLESS DIGITALN 1 OR 2 CAN  BE USED  PIN 53 ALSO NOT IN USE 



//BUTTON STATES (HIGH/LOW(0/1))
int ButtonStateA1 = 0;
int ButtonStateA2 = 0;
int ButtonStateA3 = 0;
int ButtonStateA4 = 0;
int ButtonStateA5 = 0 ;
int ButtonStateA6 = 0; 
int ButtonStateA7 = 0;
int ButtonStateA8 = 0 ;

int ButtonStateB1 = 0;
int ButtonStateB2 = 0;
int ButtonStateB3 = 0;
int ButtonStateB4 = 0;
int ButtonStateB5 = 0 ;
int ButtonStateB6 = 0; 
int ButtonStateB7 = 0;
int ButtonStateB8 = 0 ;

int ButtonStateC1 = 0;
//int ButtonStateC2 = 0;
int ButtonStateC3 = 0;
int ButtonStateC4 = 0;
int ButtonStateC5 = 0 ;
int ButtonStateC6 = 0; 
int ButtonStateC7 = 0;
int ButtonStateC8 = 0 ;

int ButtonStateD1 = 0;
int ButtonStateD2 = 0;
int ButtonStateD3 = 0;
int ButtonStateD4 = 0;
int ButtonStateD5 = 0 ;
int ButtonStateD6 = 0; 
int ButtonStateD7 = 0;
int ButtonStateD8 = 0 ;

int ButtonStateE1 = 0;
int ButtonStateE2 = 0;
int ButtonStateE3 = 0;
int ButtonStateE4 = 0;
int ButtonStateE5 = 0 ;
int ButtonStateE6 = 0; 
int ButtonStateE7 = 0;
int ButtonStateE8 = 0 ;

int ButtonStateF1 = 0;
int ButtonStateF2 = 0;
int ButtonStateF3 = 0;
int ButtonStateF4 = 0;
int ButtonStateF5 = 0 ;
int ButtonStateF6 = 0; 
int ButtonStateF7 = 0;
int ButtonStateF8 = 0 ;

int ButtonStateG1 = 0;
int ButtonStateG2 = 0;
int ButtonStateG3 = 0;
int ButtonStateG4 = 0;
int ButtonStateG5 = 0 ;
int ButtonStateG6 = 0; 
int ButtonStateG7 = 0 ;
int ButtonStateG8 = 0; 

int ButtonStateH1 = 0;
int ButtonStateH2 = 0;
int ButtonStateH3 = 0;
int ButtonStateH4 = 0;
int ButtonStateH5 = 0 ;
int ButtonStateH6 = 0; 
//int ButtonStateH7 = 0 ;
//int ButtonStateH8 = 0; 

TMRpcm tmrpcm;


void setup() {


  tmrpcm.speakerPin = 5;
  Serial.begin(9600);
  
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("Failed to read from SD card");
    return;
  }
  else {
    Serial.println("SD card initialized successfully");
  }

  tmrpcm.setVolume(6);
  
  pinMode(ButtonA1,INPUT);
  pinMode(ButtonA2,INPUT);
  pinMode(ButtonA3,INPUT);
  pinMode(ButtonA4,INPUT);
  pinMode(ButtonA5,INPUT);
  pinMode(ButtonA6,INPUT);
  pinMode(ButtonA7,INPUT);
  pinMode(ButtonA8,INPUT);

  pinMode(ButtonB1,INPUT);
  pinMode(ButtonB2,INPUT);
  pinMode(ButtonB3,INPUT);
  pinMode(ButtonB4,INPUT);
  pinMode(ButtonB5,INPUT);
  pinMode(ButtonB6,INPUT);
  pinMode(ButtonB7,INPUT);
  pinMode(ButtonB8,INPUT);

  pinMode(ButtonC1,INPUT);
//  pinMode(ButtonC2,INPUT);
  pinMode(ButtonC3,INPUT);
  pinMode(ButtonC4,INPUT);
  pinMode(ButtonC5,INPUT);
  pinMode(ButtonC6,INPUT);
  pinMode(ButtonC7,INPUT);
  pinMode(ButtonC8,INPUT);

  pinMode(ButtonD1,INPUT);
  pinMode(ButtonD2,INPUT);
  pinMode(ButtonD3,INPUT);
  pinMode(ButtonD4,INPUT);
  pinMode(ButtonD5,INPUT);
  pinMode(ButtonD6,INPUT);
  pinMode(ButtonD7,INPUT);
  pinMode(ButtonD8,INPUT);

  pinMode(ButtonE1,INPUT);
  pinMode(ButtonE2,INPUT);
  pinMode(ButtonE3,INPUT);
  pinMode(ButtonE4,INPUT);
  pinMode(ButtonE5,INPUT);
  pinMode(ButtonE6,INPUT);
  pinMode(ButtonE7,INPUT);
  pinMode(ButtonE8,INPUT);

  pinMode(ButtonF1,INPUT);
  pinMode(ButtonF2,INPUT);
  pinMode(ButtonF3,INPUT);
  pinMode(ButtonF4,INPUT);
  pinMode(ButtonF5,INPUT);
  pinMode(ButtonF6,INPUT);
  pinMode(ButtonF7,INPUT);
  pinMode(ButtonF8,INPUT);

  pinMode(ButtonG1,INPUT);
  pinMode(ButtonG2,INPUT);
  pinMode(ButtonG3,INPUT);
  pinMode(ButtonG4,INPUT);
  pinMode(ButtonG5,INPUT);
  pinMode(ButtonG6,INPUT);
  pinMode(ButtonG7,INPUT);
  pinMode(ButtonG8,INPUT);

  pinMode(ButtonH1,INPUT);
  pinMode(ButtonH2,INPUT);
  pinMode(ButtonH3,INPUT);
  pinMode(ButtonH4,INPUT);
  pinMode(ButtonH5,INPUT);
  pinMode(ButtonH6,INPUT);
  //pinMode(ButtonH7,INPUT);
  //pinMode(ButtonH8,INPUT);

  

  //TO TEST IF THE SPEAKER IS WORKING , CONNECTED TO GRND AND PIN 5 
  tmrpcm.play("AI.WAV"); 
  delay(2000);
  tmrpcm.play("AI.WAV"); 
  delay(2000);
  tmrpcm.play("AI.WAV"); 

}

void loop() {


  
  ButtonStateA1 = digitalRead(ButtonA1);
  ButtonStateA2 = digitalRead(ButtonA2);
  ButtonStateA3 = digitalRead(ButtonA3);
  ButtonStateA4 = digitalRead(ButtonA4);
  ButtonStateA5 = digitalRead(ButtonA5);
  ButtonStateA6 = digitalRead(ButtonA6);
  ButtonStateA7 = digitalRead(ButtonA7);
  ButtonStateA8 = digitalRead(ButtonA8);

  ButtonStateB1 = digitalRead(ButtonB1);
  ButtonStateB2 = digitalRead(ButtonB2);
  ButtonStateB3 = digitalRead(ButtonB3);
  ButtonStateB4 = digitalRead(ButtonB4);
  ButtonStateB5 = digitalRead(ButtonB5);
  ButtonStateB6 = digitalRead(ButtonB6);
  ButtonStateB7 = digitalRead(ButtonB7);
  ButtonStateB8 = digitalRead(ButtonB8);

  ButtonStateC1 = digitalRead(ButtonC1);
  //ButtonStateC2 = digitalRead(ButtonC2);
  ButtonStateC3 = digitalRead(ButtonC3);
  ButtonStateC4 = digitalRead(ButtonC4);
  ButtonStateC5 = digitalRead(ButtonC5);
  ButtonStateC6 = digitalRead(ButtonC6);
  ButtonStateC7 = digitalRead(ButtonC7);
  ButtonStateC8 = digitalRead(ButtonC8);

  ButtonStateD1 = digitalRead(ButtonD1);
  ButtonStateD2 = digitalRead(ButtonD2);
  ButtonStateD3 = digitalRead(ButtonD3);
  ButtonStateD4 = digitalRead(ButtonD4);
  ButtonStateD5 = digitalRead(ButtonD5);
  ButtonStateD6 = digitalRead(ButtonD6);
  ButtonStateD7 = digitalRead(ButtonD7);
  ButtonStateD8 = digitalRead(ButtonD8);

  ButtonStateE1 = digitalRead(ButtonE1);
  ButtonStateE2 = digitalRead(ButtonE2);
  ButtonStateE3 = digitalRead(ButtonE3);
  ButtonStateE4 = digitalRead(ButtonE4);
  ButtonStateE5 = digitalRead(ButtonE5);
  ButtonStateE6 = digitalRead(ButtonE6);
  ButtonStateE7 = digitalRead(ButtonE7);
  ButtonStateE8 = digitalRead(ButtonE8);

  ButtonStateF1 = digitalRead(ButtonF1);
  ButtonStateF2 = digitalRead(ButtonF2);
  ButtonStateF3 = digitalRead(ButtonF3);
  ButtonStateF4 = digitalRead(ButtonF4);
  ButtonStateF5 = digitalRead(ButtonF5);
  ButtonStateF6 = digitalRead(ButtonF6);
  ButtonStateF7 = digitalRead(ButtonF7);
  ButtonStateF8 = digitalRead(ButtonF8);

  ButtonStateG1 = digitalRead(ButtonG1);
  ButtonStateG2 = digitalRead(ButtonG2);
  ButtonStateG3 = digitalRead(ButtonG3);
  ButtonStateG4 = digitalRead(ButtonG4);
  ButtonStateG5 = digitalRead(ButtonG5);
  ButtonStateG6 = digitalRead(ButtonG6);
  ButtonStateG7 = digitalRead(ButtonG7);
  ButtonStateG8 = digitalRead(ButtonG8);

  ButtonStateH1 = digitalRead(ButtonH1);
  ButtonStateH2 = digitalRead(ButtonH2);
  ButtonStateH3 = digitalRead(ButtonH3);
  ButtonStateH4 = digitalRead(ButtonH4);
  ButtonStateH5 = digitalRead(ButtonH5);
  ButtonStateH6 = digitalRead(ButtonH6);
 // ButtonStateH7 = digitalRead(ButtonH7);
  

//COLOUM A
  if (ButtonStateA1==HIGH){
    Serial.println("A1");
    tmrpcm.play("AI.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateA2==HIGH){
    Serial.println("A2");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateA3==HIGH){
    Serial.println("A3");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateA4==HIGH){
    Serial.println("A4");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateA5==HIGH){
    Serial.println("A5");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateA6==HIGH){
    Serial.println("A6");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateA7==HIGH){
    Serial.println("A7");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateA8==HIGH){
    Serial.println("A8");
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
    }

//COLOUM B
   if (ButtonStateB1==HIGH){
    Serial.println("B1");
    tmrpcm.play("BB.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateB2==HIGH){
    Serial.println("B2");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateB3==HIGH){
    Serial.println("B3");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateB4==HIGH){
    Serial.println("B4");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateB5==HIGH){
    Serial.println("B5");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateB6==HIGH){
    Serial.println("B6");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateB7==HIGH){
    Serial.println("B7");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateB8==HIGH){
    Serial.println("B8");
    tmrpcm.play("BB.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
    }

   //COLOUM C

   if (ButtonStateC1==HIGH){
    Serial.println("C1");
    tmrpcm.play("CC.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
//  if (ButtonStateC2==HIGH){
  //  Serial.println("C2");
    //tmrpcm.play("CC.WAV");
    //delay(1000);
    //tmrpcm.play("TWO.WAV");
    //delay(1000);
   // }
  if (ButtonStateC3==HIGH){
    Serial.println("C3");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateC4==HIGH){
    Serial.println("C4");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateC5==HIGH){
    Serial.println("C5");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateC6==HIGH){
    Serial.println("C6");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateC7==HIGH){
    Serial.println("C7");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateC8==HIGH){
    Serial.println("C8");
    tmrpcm.play("CC.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
    }
    
  //COLUMN D
  if (ButtonStateD1==HIGH){
    Serial.println("D1");
    tmrpcm.play("DD.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateD2==HIGH){
    Serial.println("D2");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateD3==HIGH){
    Serial.println("D3");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateD4==HIGH){
    Serial.println("D4");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateD5==HIGH){
    Serial.println("D5");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateD6==HIGH){
    Serial.println("D6");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateD7==HIGH){
    Serial.println("D7");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateD8==HIGH){
    Serial.println("D8");
    tmrpcm.play("DD.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
   }

  //COLUMN E 
  if (ButtonStateE1==HIGH){
    Serial.println("E1");
    tmrpcm.play("EE.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateE2==HIGH){
    Serial.println("E2");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateE3==HIGH){
    Serial.println("E3");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateE4==HIGH){
    Serial.println("E4");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateE5==HIGH){
    Serial.println("E5");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateE6==HIGH){
    Serial.println("E6");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateE7==HIGH){
    Serial.println("E7");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateE8==HIGH){
    Serial.println("E8");
    tmrpcm.play("EE.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
   }
  //COLOUMN F

  if (ButtonStateF1==HIGH){
    Serial.println("F1");
    tmrpcm.play("FF.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateF2==HIGH){
    Serial.println("F2");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateF3==HIGH){
    Serial.println("F3");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateF4==HIGH){
    Serial.println("F4");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateF5==HIGH){
    Serial.println("F5");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateF6==HIGH){
    Serial.println("F6");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateF7==HIGH){
    Serial.println("F7");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateF8==HIGH){
    Serial.println("F8");
    tmrpcm.play("FF.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
   }

  //COLOUMN G

  if (ButtonStateG1==HIGH){
    Serial.println("G1");
    tmrpcm.play("GG.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateG2==HIGH){
    Serial.println("G2");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateG3==HIGH){
    Serial.println("G3");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateG4==HIGH){
    Serial.println("G4");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateG5==HIGH){
    Serial.println("G5");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateG6==HIGH){
    Serial.println("G6");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   if (ButtonStateG7==HIGH){
    Serial.println("G7");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    delay(1000);
    }
   if (ButtonStateG8==HIGH){
    Serial.println("G8");
    tmrpcm.play("GG.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    delay(1000);
   }

  //COLOUMN H

  if (ButtonStateH1==HIGH){
    Serial.println("H1");
    tmrpcm.play("HH.WAV"); 
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    }
  if (ButtonStateH2==HIGH){
    Serial.println("H2");
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    delay(1000);
    }
  if (ButtonStateH3==HIGH){
    Serial.println("H3");
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    delay(1000);
    }
   if (ButtonStateH4==HIGH){
    Serial.println("H4");
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    delay(1000);
    }
   if (ButtonStateH5==HIGH){
    Serial.println("H5");
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    delay(1000);
    }
   if (ButtonStateH6==HIGH){
    Serial.println("H6");
    tmrpcm.play("HH.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    delay(1000);
    }
   
  

}
