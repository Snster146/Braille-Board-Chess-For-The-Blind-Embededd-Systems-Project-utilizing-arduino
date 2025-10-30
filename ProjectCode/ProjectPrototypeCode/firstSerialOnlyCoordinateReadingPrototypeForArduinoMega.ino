#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

const int buttonA1 = 53;     
const int buttonA2 = 52;
const int buttonA3 = 51;     
const int buttonA4 = 50;
const int buttonA5 = 49;     
const int buttonA6 = 48;
const int buttonA7 = 47;     
const int buttonA8 = 46;

const int buttonB1 = 45;
const int buttonB2 = 44;
const int buttonB3 = 43;
const int buttonB4 = 42;
const int buttonB5 = 41;
const int buttonB6 = 40;
const int buttonB7 = 39;
const int buttonB8 = 38;

const int buttonC1 = 37;
const int buttonC2 = 36;
const int buttonC3 = 35;
const int buttonC4 = 34;
const int buttonC5 = 33;
const int buttonC6 = 32;
const int buttonC7 = 31;
const int buttonC8 = 30;

const int buttonD1 = 29;
const int buttonD2 = 28;
const int buttonD3 = 27;
const int buttonD4 = 26;
const int buttonD5 = 25;
const int buttonD6 = 24;
const int buttonD7 = 23;
const int buttonD8 = 22;

const int buttonE1 = A1;
const int buttonE2 = A2;
const int buttonE3 = A3;
const int buttonE4 = A4;
const int buttonE5 = A5;
const int buttonE6 = A6;
const int buttonE7 = A7;
const int buttonE8 = A8;

const int buttonF1 = A0;
const int buttonF2 = 21;
const int buttonF3 = 20;
const int buttonF4 = 19;
const int buttonF5 = 18;
const int buttonF6 = 17;
const int buttonF7 = 16;
const int buttonF8 = 15;

const int buttonG1 = 14;
const int buttonG2 = A9;
const int buttonG3 = A10;
const int buttonG4 = A11;
const int buttonG5 = A12;
const int buttonG6 = A13;
const int buttonG7 = A14;
const int buttonG8 = A15;

const int buttonH1 = 2;
const int buttonH2 = 3;
const int buttonH3 = 4;
const int buttonH4 = 5;
const int buttonH5 = 6;
const int buttonH6 = 7;
//const int buttonH7 = 8;//not wired to test sd mod and speaker
//const int buttonH8 = 9;//not wired to test sd mod and speaker

int buttonStateA1 = 0;
int buttonStateA2 = 0;
int buttonStateA3 = 0;
int buttonStateA4 = 0;        
int buttonStateA5 = 0;
int buttonStateA6 = 0;        
int buttonStateA7 = 0;
int buttonStateA8 = 0;    

int buttonStateB1 = 0;
int buttonStateB2 = 0;
int buttonStateB3 = 0;
int buttonStateB4 = 0;        
int buttonStateB5 = 0;
int buttonStateB6 = 0;        
int buttonStateB7 = 0;
int buttonStateB8 = 0;    

int buttonStateC1 = 0;
int buttonStateC2 = 0;
int buttonStateC3 = 0;
int buttonStateC4 = 0;        
int buttonStateC5 = 0;
int buttonStateC6 = 0;        
int buttonStateC7 = 0;
int buttonStateC8 = 0;   

int buttonStateD1 = 0;
int buttonStateD2 = 0;
int buttonStateD3 = 0;
int buttonStateD4 = 0;
int buttonStateD5 = 0;
int buttonStateD6 = 0;
int buttonStateD7 = 0;
int buttonStateD8 = 0;

int buttonStateE1 = 0;
int buttonStateE2 = 0;
int buttonStateE3 = 0;
int buttonStateE4 = 0;
int buttonStateE5 = 0;
int buttonStateE6 = 0;
int buttonStateE7 = 0;
int buttonStateE8 = 0;

int buttonStateF1 = 0;
int buttonStateF2 = 0;
int buttonStateF3 = 0;
int buttonStateF4 =0 ;
int buttonStateF5 = 0;
int buttonStateF6 = 0;
int buttonStateF7 = 0;
int buttonStateF8 =0 ;

int buttonStateG1 = 0;
int buttonStateG2 = 0 ;
int buttonStateG3 = 0;
int buttonStateG4 = 0;
int buttonStateG5 = 0 ;
int buttonStateG6 = 0;
int buttonStateG7 = 0;
int buttonStateG8 = 0 ;

int buttonStateH1 = 0 ;
int buttonStateH2 = 0 ;
int buttonStateH3 = 0 ;
int buttonStateH4 = 0 ;
int buttonStateH5 = 0 ;
int buttonStateH6 = 0 ;
//int buttonStateH7 = 0 ;//not wired to test sd mod and speaker
//int buttonStateH8 = 0 ;//not wired to test sd mod and speaker

void setup() {

  Serial.begin(9600);

//  tmrpcm.speakerPin=8;
  //Serial.begin(9600);
  //if(!SD.begin(SD_ChipSelectPin))
//{
  //Serial.println("SD fail");
  //return;
  
//}
  //tmrpcm.setVolume(6);
  
  pinMode(buttonA1, INPUT);
  pinMode(buttonA2 , INPUT);
  pinMode(buttonA3, INPUT);
  pinMode(buttonA4 , INPUT);
  pinMode(buttonA5, INPUT);
  pinMode(buttonA6 , INPUT);
  pinMode(buttonA7, INPUT);
  pinMode(buttonA8 , INPUT);

  pinMode(buttonB1 , INPUT);
  pinMode(buttonB2, INPUT);
  pinMode(buttonB3 , INPUT);
  pinMode(buttonB4, INPUT);
  pinMode(buttonB5 , INPUT);
  pinMode(buttonB6, INPUT);
  pinMode(buttonB7 , INPUT);
  pinMode(buttonB8, INPUT);

  pinMode(buttonC1 , INPUT);
  pinMode(buttonC2, INPUT);
  pinMode(buttonC3 , INPUT);
  pinMode(buttonC4, INPUT);
  pinMode(buttonC5 , INPUT);
  pinMode(buttonC6, INPUT);
  pinMode(buttonC7 , INPUT);
  pinMode(buttonC8, INPUT);

  pinMode(buttonD1 , INPUT);
  pinMode(buttonD2 , INPUT);\
  pinMode(buttonD3 , INPUT);
  pinMode(buttonD4 , INPUT);
  pinMode(buttonD5 , INPUT);
  pinMode(buttonD6 , INPUT);
  pinMode(buttonD7 , INPUT);
  pinMode(buttonD8 , INPUT);

  pinMode(buttonE1 ,INPUT);
  pinMode (buttonE2 ,INPUT);
  pinMode(buttonE3 , INPUT);
  pinMode(buttonE4 , INPUT);
  pinMode(buttonE5 ,INPUT);
  pinMode (buttonE6 ,INPUT);
  pinMode(buttonE7 , INPUT);
  pinMode(buttonE8 , INPUT);

  pinMode(buttonF1 ,INPUT);
  pinMode (buttonF2 ,INPUT);
  pinMode(buttonF3 , INPUT);
  pinMode(buttonF4 ,INPUT);
  pinMode(buttonF5 ,INPUT);
  pinMode (buttonF6 ,INPUT);
  pinMode(buttonF7 , INPUT);
  pinMode(buttonF8 ,INPUT);

  pinMode(buttonG1 ,INPUT);
  pinMode (buttonG2 ,INPUT);
  pinMode(buttonG3 , INPUT);
  pinMode(buttonG4 ,INPUT);
  pinMode (buttonG5 ,INPUT);
  pinMode(buttonG6 , INPUT);
  pinMode(buttonG7 ,INPUT);
  pinMode (buttonG8 ,INPUT);

  pinMode(buttonH1 ,INPUT);
  pinMode(buttonH2 ,INPUT);
  pinMode(buttonH3 ,INPUT);
  pinMode(buttonH4 ,INPUT);
  pinMode(buttonH5 ,INPUT);
  pinMode(buttonH6 ,INPUT);
  //pinMode(buttonH7 ,INPUT);//not wired to test sd mod and speaker
 // pinMode(buttonH8 ,INPUT);//not wired to test sd mod and speaker

}

  
void loop() {
// tmrpcm.play("F.wav");
 // delay(1000);
  buttonStateA1 = digitalRead(buttonA1);
  buttonStateA2 = digitalRead(buttonA2);
  buttonStateA3 = digitalRead(buttonA3);
  buttonStateA4 = digitalRead(buttonA4);
  buttonStateA5 = digitalRead(buttonA5);
  buttonStateA6 = digitalRead(buttonA6);
  buttonStateA7 = digitalRead(buttonA7);
  buttonStateA8 = digitalRead(buttonA8);


  buttonStateB1 = digitalRead(buttonB1);
  buttonStateB2 = digitalRead(buttonB2);
  buttonStateB3 = digitalRead(buttonB3);
  buttonStateB4 = digitalRead(buttonB4);
  buttonStateB5 = digitalRead(buttonB5);
  buttonStateB6 = digitalRead(buttonB6);
  buttonStateB7 = digitalRead(buttonB7);
  buttonStateB8 = digitalRead(buttonB8);

  buttonStateC1 = digitalRead(buttonC1);
  buttonStateC2 = digitalRead(buttonC2);
  buttonStateC3 = digitalRead(buttonC3);
  buttonStateC4 = digitalRead(buttonC4);
  buttonStateC5 = digitalRead(buttonC5);
  buttonStateC6 = digitalRead(buttonC6);
  buttonStateC7 = digitalRead(buttonC7);
  buttonStateC8 = digitalRead(buttonC8);

  buttonStateD1 = digitalRead(buttonD1);
  buttonStateD2 = digitalRead(buttonD2);
  buttonStateD3 = digitalRead(buttonD3);
  buttonStateD4 = digitalRead(buttonD4);
  buttonStateD5 = digitalRead(buttonD5);
  buttonStateD6 = digitalRead(buttonD6);
  buttonStateD7 = digitalRead(buttonD7);
  buttonStateD8 = digitalRead(buttonD8);

  buttonStateE1 = digitalRead(buttonE1);
  buttonStateE2 = digitalRead(buttonE2);
  buttonStateE3 = digitalRead(buttonE3);
  buttonStateE4 = digitalRead(buttonE4);
  buttonStateE5 = digitalRead(buttonE5);
  buttonStateE6 = digitalRead(buttonE6);
  buttonStateE7 = digitalRead(buttonE7);
  buttonStateE8 = digitalRead(buttonE8);

  buttonStateF1 = digitalRead(buttonF1);
  buttonStateF2 = digitalRead(buttonF2);
  buttonStateF3 = digitalRead(buttonF3);
  buttonStateF4 = digitalRead(buttonF4);
  buttonStateF5 = digitalRead(buttonF5);
  buttonStateF6 = digitalRead(buttonF6);
  buttonStateF7 = digitalRead(buttonF7);
  buttonStateF8 = digitalRead(buttonF8);

  buttonStateG1 = digitalRead(buttonG1);
  buttonStateG2 = digitalRead(buttonG2);
  buttonStateG3 = digitalRead(buttonG3);
  buttonStateG4 = digitalRead(buttonG4);
  buttonStateG5 = digitalRead(buttonG5);
  buttonStateG6 = digitalRead(buttonG6);
  buttonStateG7 = digitalRead(buttonG7);
  buttonStateG8 = digitalRead(buttonG8);

  buttonStateH1 = digitalRead(buttonH1);
  buttonStateH2 = digitalRead(buttonH2);
  buttonStateH3 = digitalRead(buttonH3);
  buttonStateH4 = digitalRead(buttonH4);
  buttonStateH5 = digitalRead(buttonH5);
  buttonStateH6 = digitalRead(buttonH6);
  //buttonStateH7 = digitalRead(buttonH7);//not wired to test sd mod and speaker
 // buttonStateH8 = digitalRead(buttonH8);//not wired to test sd mod and speaker


  if (buttonStateA1 == HIGH) {
    Serial.println("A1");
    delay(1000);

  } 
  else if (buttonStateA2 == HIGH){
    Serial.println("A2");
    delay(1000);
    }
  else if (buttonStateA3 == HIGH){
    Serial.println("A3");
    delay(1000);
    }
  else if (buttonStateA4 == HIGH){
    Serial.println("A4");
    delay(1000);
    }
  else if (buttonStateA5 == HIGH){
    Serial.println("A5");
    delay(1000);
    }
  else if (buttonStateA6 == HIGH){
    Serial.println("A6");
    delay(1000);
    }
  else if (buttonStateA7 == HIGH){
    Serial.println("A7");
   delay(1000);
    }
  else if (buttonStateA8 == HIGH){
    Serial.println("A8");
    delay(1000);
    }

    //B
  else if (buttonStateB1 == HIGH){
  Serial.println("B1");
  delay(1000);
  }
 else if (buttonStateB2 == HIGH){
    Serial.println("B2");
    delay(1000);
    }
  else if (buttonStateB3 == HIGH){
    Serial.println("B3");
    delay(1000);
    }
  else if (buttonStateB4 == HIGH){
    Serial.println("B4");
    delay(1000);
    }
  else if (buttonStateB5 == HIGH){
    Serial.println("B5");
    delay(1000);
    }
  else if (buttonStateB6 == HIGH){
    Serial.println("B6");
    delay(1000);
    }
  else if (buttonStateB7 == HIGH){
    Serial.println("B7");
   delay(1000);
    }
  else if (buttonStateB8 == HIGH){
    Serial.println("B8");
    delay(1000);
    }
   else if (buttonStateC1 == HIGH){
  Serial.println("C1");
  delay(1000);
  digitalWrite(buttonC1 , LOW);
  }
 else if (buttonStateC2 == HIGH){
    Serial.println("C2");
    delay(1000);
    }
  else if (buttonStateC3 == HIGH){
    Serial.println("C3");
    delay(1000);
    }
  else if (buttonStateC4 == HIGH){
    Serial.println("C4");
    delay(1000);
    }
  else if (buttonStateC5 == HIGH){
    Serial.println("C5");
    delay(1000);
    }
  else if (buttonStateC6 == HIGH){
    Serial.println("C6");
    delay(1000);
    }
 else if (buttonStateC7 == HIGH){
  Serial.println("C7");
  delay(1000);
  }
 else if (buttonStateC8 == HIGH){
  Serial.println("C8");
  delay(1000);
  }
  else if (buttonStateD1 == HIGH){
  Serial.println("D1");
  delay(1000);
  digitalWrite(buttonD1 , LOW);
  }
  else if (buttonStateD2 == HIGH){
  Serial.println("D2");
  delay(1000);
  digitalWrite(buttonD2 , LOW);
  }
 else if (buttonStateD3 == HIGH){
  Serial.println("D3");
  delay(1000);
  digitalWrite(buttonD3 , LOW);
  }
 else if (buttonStateD4 == HIGH){
  Serial.println("D4");
  delay(1000);
  digitalWrite(buttonD4 , LOW);
  }
 else if (buttonStateD5 == HIGH){
  Serial.println("D5");
  delay(1000);
  digitalWrite(buttonD5 , LOW);
  }
 else if (buttonStateD6 == HIGH){
  Serial.println("D6");
  delay(1000);
  digitalWrite(buttonD6 , LOW);
  }
 else if (buttonStateD7 == HIGH){
  Serial.println("D7");
  delay(1000);
  digitalWrite(buttonD7 , LOW);
  }
  else if (buttonStateD8 == HIGH){
  Serial.println("D8");
  delay(1000);
  digitalWrite(buttonD8 , LOW);
  }
 else if (buttonStateE1 == HIGH){
  Serial.println("E1");
  delay(1000);
  digitalWrite(buttonE1 , LOW);
  }
 else if (buttonStateE2 == HIGH){
  Serial.println("E2");
  delay(1000);
  digitalWrite(buttonE2 , LOW);
  }
 else if (buttonStateE3 == HIGH){
  Serial.println("E3");
  delay(1000);
  digitalWrite(buttonE3 , LOW);
  }
 else if (buttonStateE4 == HIGH){
  Serial.println("E4");
  delay(1000);
  digitalWrite(buttonE4 , LOW);
  }
 else if (buttonStateE5 == HIGH){
  Serial.println("E5");
  delay(1000);
  digitalWrite(buttonE5 , LOW);
  }
 else if (buttonStateE6 == HIGH){
  Serial.println("E6");
  delay(1000);
  digitalWrite(buttonE6 , LOW);
  }
 else if (buttonStateE7 == HIGH){
  Serial.println("E7");
  delay(1000);
  digitalWrite(buttonE7 , LOW);
  }
 else if (buttonStateE8 == HIGH){
  Serial.println("E8");
  delay(1000);
  digitalWrite(buttonE8 , LOW);
  }

else if (buttonStateF1 == HIGH){
  Serial.println("F1");
  delay(1000);
  digitalWrite(buttonF1 , LOW);
  }
 else if (buttonStateF2 == HIGH){
  Serial.println("F2");
  delay(1000);
  digitalWrite(buttonF2 , LOW);
  }
 else if (buttonStateF3 == HIGH){
  Serial.println("F3");
  delay(1000);
  digitalWrite(buttonF3 , LOW);
  }    
 else if (buttonStateF4 == HIGH){
  Serial.println("F4");
  delay(1000);
  digitalWrite(buttonF4 , LOW);
  }  
 else if (buttonStateF5 == HIGH){
  Serial.println("F5");
  delay(1000);
  digitalWrite(buttonF5 , LOW);
  }
 else if (buttonStateF6 == HIGH){
  Serial.println("F6");
  delay(1000);
  digitalWrite(buttonF6 , LOW);
  }
 else if (buttonStateF7 == HIGH){
  Serial.println("F7");
  delay(1000);
  digitalWrite(buttonF7 , LOW);
  }    
 else if (buttonStateF8 == HIGH){
  Serial.println("F8");
  delay(1000);
  digitalWrite(buttonF8 , LOW);
  }  

 else if (buttonStateG1 == HIGH){
  Serial.println("G1");
  delay(1000);
  digitalWrite(buttonG1 , LOW);
  }
 else if (buttonStateG2 == HIGH){
  Serial.println("G2");
  delay(1000);
  digitalWrite(buttonG2 , LOW);
  }    
 else if (buttonStateG3 == HIGH){
  Serial.println("G3");
  delay(1000);
  digitalWrite(buttonG3 , LOW);
  }  
 else if (buttonStateG4 == HIGH){
  Serial.println("G4");
  delay(1000);
  digitalWrite(buttonG4 , LOW);
  }
 else if (buttonStateG5 == HIGH){
  Serial.println("G5");
  delay(1000);
  digitalWrite(buttonG5 , LOW);
  }    
 else if (buttonStateG6 == HIGH){
  Serial.println("G6");
  delay(1000);
  digitalWrite(buttonG6 , LOW);
  }  
 else if (buttonStateG7 == HIGH){
  Serial.println("G7");
  delay(1000);
  digitalWrite(buttonG7 , LOW);
  }    
 else if (buttonStateG8 == HIGH){
  Serial.println("G8");
  delay(1000);
  digitalWrite(buttonG8 , LOW);
  }  
  
 else if (buttonStateH1 == HIGH){
  Serial.println("H1");
  delay(1000);
  digitalWrite(buttonH1 , LOW);
  }
 else if (buttonStateH2 == HIGH){
  Serial.println("H2");
  delay(1000);
  digitalWrite(buttonH2 , LOW);
  }
else if (buttonStateH3 == HIGH){
  Serial.println("H3");
  delay(1000);
  digitalWrite(buttonH3 , LOW);
  }
else if (buttonStateH4 == HIGH){
  Serial.println("H4");
  delay(1000);
  digitalWrite(buttonH4 , LOW);
  }
else if (buttonStateH5 == HIGH){
  Serial.println("H5");
  delay(1000);
  digitalWrite(buttonH5 , LOW);
  }
else if (buttonStateH6 == HIGH){
  Serial.println("H6");
  delay(1000);
  digitalWrite(buttonH6 , LOW);
  }
//else if (buttonStateH7 == HIGH){
  //Serial.println("H7");
  //delay(1000);
  //digitalWrite(buttonH7 , LOW);
  //}
//else if (buttonStateH8 == HIGH){
 // Serial.println("H8");
  //delay(1000);
  //digitalWrite(buttonH8 , LOW);
  //}
  
}
