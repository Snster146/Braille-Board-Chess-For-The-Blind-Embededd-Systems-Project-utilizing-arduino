#include "SD.h"
#define SD_ChipSelectPin 10
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup()
{
tmrpcm.speakerPin=9;
Serial.begin(9600);
if(!SD.begin(SD_ChipSelectPin))
{
  Serial.println("SD fail");
  return;
}


tmrpcm.setVolume(6);
///tmrpcm.play("AA.wav");
Serial.println("Please input a valid coordinate on a chessboard for the speaker to play !");


}


void loop() {
//  tmrpcm.play("TWO.wav");
  //delay(1000);
  while (Serial.available()==0){
    }
  String input = Serial.readString();
  input.trim(); // it was .trim() , the reason why it wouldnt work as intended. 

 
   char firstinput = input[0]; //char is one character 
   char secondinput = input[1];


// Derbyn mewnbwn defnyddiwr ac adrodd cyfeseun cyntaf A-H gan denfyddio seinydd
   if (firstinput=='A'){
     tmrpcm.play("AI.wav");
     delay(1000);
     Serial.println("A");
    }
   else if (firstinput=='B'){
     tmrpcm.play("BB.wav");//.....
     delay(1000);
     Serial.println("B");

   }
   else if (firstinput=='C'){
    
    tmrpcm.play("CC.wav");
    delay(1000);
    Serial.println("C");
    }
   else if (firstinput=='D'){
    tmrpcm.play("DD.wav");
    delay(1000);
    Serial.println("D");

    }
   else if (firstinput=='E'){
    tmrpcm.play("EE.wav");
    delay(1000);
    Serial.println("E");
    }
   else if (firstinput=='F'){
    tmrpcm.play("FF.wav");
    delay(1000);
    Serial.println("F");
    }
   else if (firstinput=='G'){
    tmrpcm.play("GG.wav");
    delay(1000);
    Serial.println("G");
    }
   else if (firstinput=='H'){
    tmrpcm.play("HH.wav");
    delay(1000);
    Serial.println("H");
    }

 //Derbyn mewnwbwn defnyddiwr ac adrodd cyfeserun ail , 1-8
   if (secondinput=='1'){
     tmrpcm.play("ONE.wav");
     delay(1000);
     Serial.print("1");
    }
   else if (secondinput=='2'){
     tmrpcm.play("TWO.wav");
     delay(1000);
     Serial.print("2");
   }
   else if (secondinput=='3'){
     tmrpcm.play("THR.wav");
     delay(1000);
     Serial.print("3");
    }
    else if (secondinput=='4'){
     tmrpcm.play("FOU.wav");
     delay(1000);
     Serial.print("4");
    }   
    else if (secondinput=='5'){
     tmrpcm.play("FIV.wav");
     delay(1000);
     Serial.print("5");
    }
    else if (secondinput=='6'){
     tmrpcm.play("SIX.wav");
     delay(1000);
     Serial.print("6");
    }
    else if (secondinput=='7'){
     tmrpcm.play("SEV.wav");
     delay(1000);
     Serial.print("7");
    }   
    else if (secondinput=='8'){
     tmrpcm.play("EIG.wav");
     delay(1000);
     Serial.print("8");
    }   


  
}
