#include <SPI.h>
#include <TMRpcm.h>
#include <SD.h>
#define SdChipSelectPin 10

TMRpcm tmrpcm;

int ButtonA1 = A0;
int ButtonA2 = A1;
int ButtonA3 = A2;
int ButtonA4 = A3;
int ButtonA5 = A4;
int ButtonA6 = 7;
int ButtonA7 = 6;
int ButtonA8 = 5;

int ButtonStateA1 = 0;
int ButtonStateA2= 0;
int ButtonStateA3 = 0 ;
int ButtonStateA4 = 0 ;
int ButtonStateA5 = 0;
int ButtonStateA6 = 0;
int ButtonStateA7 = 0 ;
int ButtonStateA8 = 0;



void setup() {
  tmrpcm.speakerPin=9;
  Serial.begin(9600);
  if (!SD.begin(SdChipSelectPin)) {
    Serial.println("SD initialization failed!");
  }
  tmrpcm.setVolume(6);
  tmrpcm.play("AI.WAV");

  pinMode(ButtonA1,INPUT);
  pinMode(ButtonA2,INPUT);
  pinMode(ButtonA3,INPUT);
  pinMode(ButtonA4,INPUT);
  pinMode(ButtonA5,INPUT);
  pinMode(ButtonA6,INPUT);
  pinMode(ButtonA7,INPUT);
  pinMode(ButtonA8,INPUT);

  


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

  if (ButtonStateA1 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("ONE.WAV");
    delay(1000);
    digitalWrite(ButtonStateA1,LOW);
    
    }
  if (ButtonStateA2 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("TWO.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }
  if (ButtonStateA3 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("THR.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }
  if (ButtonStateA4 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("FOU.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }

  if (ButtonStateA5 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("FIV.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }
  if (ButtonStateA6 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("SIX.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }
  if (ButtonStateA7 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("SEV.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }
  if (ButtonStateA8 ==HIGH)
  {
    tmrpcm.play("AI.WAV");
    delay(1000);
    tmrpcm.play("EIG.WAV");
    digitalWrite(ButtonStateA2,LOW);
    
    }


}
