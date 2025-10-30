#include "SD.h"
#include "SPI.h"
#include "TMRpcm.h"



TMRpcm tmrpcm;
#define SD_ChipSelectPin 53


const int numRows = 8;
const int numCols = 8;
//const int rowPins[numRows] = {2,3,4,5,6,7,9,10};
//const int colPins[numCols] = {11, 12, 13, 31, 30,29,28,27};
const int rowPins[numRows] = {10,11,12,13,22,24,26,28};  // Row pins
const int colPins[numCols] = {2,3,4,5,6,7,8,9};  // Column pins
 

// Previous state of the chessboard
bool previousBoardState[numRows][numCols] = {false};

void setup() {
    tmrpcm.speakerPin = 46;

    Serial.begin(9600);
    if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("Failed to read from SD card");
    return;
  }
  else {
    Serial.println("SD card initialized successfully");
  }

  tmrpcm.setVolume(6);
  tmrpcm.play("WeL.WAV");
  delay(2000);
 
    
    for (int i = 0; i < numRows; i++) {
        pinMode(rowPins[i], INPUT_PULLUP); 
    }
    for (int i = 0; i < numCols; i++) {
        pinMode(colPins[i], OUTPUT); 
        digitalWrite(colPins[i], HIGH);
    }
    // Capture initial state of the buttons
   
    captureInitialState();
}

void loop() {
    // Continuously monitor the state of buttons
    for (int col = 0; col < numCols; col++) {
        digitalWrite(colPins[col], LOW);
        for (int row = 0; row < numRows; row++) {
            bool currentState = digitalRead(rowPins[row]) == LOW;
            if (currentState != previousBoardState[row][col]) {
                // State changed (piece moved)
                char columnLetter = 'A' + col; 
                
                if (currentState) {
                    // Button pressed (piece placed)
                    tmrpcm.play("KJ.WAV");
                    delay(1000);
                    tmrpcm.play("NU.WAV");
                    delay(1000);
                    Serial.print("Piece placed at: ");
                } else {
                    // Button released (piece moved)
                    tmrpcm.play("KJ.WAV");
                    delay(1000);
                    tmrpcm.play("VR.WAV");
                    delay(1000);
                    Serial.print("Piece moved from: ");
                    
                }
                Serial.print(columnLetter);
                PlayColomnCordinate(columnLetter);
                Serial.print(row + 1); 
                PlayRowCoordinate(row+1);
                Serial.println();
                delay(20); 
                // Update previous state of the button
                previousBoardState[row][col] = currentState;
            }
        }
        digitalWrite(colPins[col], HIGH); 
    }
}

// Function to capture the initial state of the buttons (initial position of pieces)
void captureInitialState() {
    for (int col = 0; col < numCols; col++) {
        digitalWrite(colPins[col], LOW);
        for (int row = 0; row < numRows; row++) {
            previousBoardState[row][col] = digitalRead(rowPins[row]) == LOW;
        }
        digitalWrite(colPins[col], HIGH); 
    }
}

void PlayColomnCordinate(char columnLetter) {
    if (columnLetter == 'A') {
        
        tmrpcm.play("Aaudio.WAV");
        //tmrpcm.play("AI.WAV");
        delay(1000);
    }
    else if (columnLetter == 'B') {
        tmrpcm.play("Baudio.WAV");
        //tmrpcm.play("BI.WAV");

        delay(1000);
    

    }
    if (columnLetter == 'C') {
        tmrpcm.play("Caudio.WAV");
        //tmrpcm.play("CI.WAV");
        delay(1000);
    }
    if (columnLetter == 'D') {
        tmrpcm.play("Daudio.WAV");
        //tmrpcm.play("DI.WAV");
        
        delay(1000);
    }
    if (columnLetter == 'E') {
        tmrpcm.play("Eaudio.WAV");
        //tmrpcm.play("EI.WAV");
        delay(1000);
    }
    if (columnLetter == 'F') {
        tmrpcm.play("Faudio.WAV");
        //tmrpcm.play("FI.WAV");
        delay(1000);
    }
    if (columnLetter == 'G') {
        tmrpcm.play("Gaudio.WAV");
        //tmrpcm.play("GI.WAV");
        delay(1000);
    }
    if (columnLetter == 'H') {
        tmrpcm.play("Haudio.WAV");
        //tmrpcm.play("HI.WAV");
        delay(1000);
    }
}

void PlayRowCoordinate(int row){

  if (row==1){
    tmrpcm.play("ON.WAV");
    delay(1000);
    }
  if (row==2){
    tmrpcm.play("TO.WAV");
    delay(1000);
    }
  if (row==3){
    tmrpcm.play("TR.WAV");
    delay(1000);
    }
  if (row==4){
    tmrpcm.play("FO.WAV");
    delay(1000);
    }
  if (row==5){
    tmrpcm.play("FuV.WAV");
    delay(1000);
    }
  if (row==6){
    tmrpcm.play("SI.WAV");
    delay(1000);
    }
  if (row==7){
    tmrpcm.play("SE.WAV");
    delay(1000);
    }
  if (row==8){
    tmrpcm.play("EIG.WAV");
    delay(1000);
    }
  
  }
