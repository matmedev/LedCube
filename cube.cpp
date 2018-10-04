#include "cube.h"

#define MERET 5

byte lapokPins[MERET] = {
  A0, A1, A2, A3, A4};
  byte fr_siPins[MERET][MERET] = {
    { 23, 24, 25, 26, 27 },
    { 28, 29, 30, 31, 32 },
    { 33, 34, 35, 36, 37 },
    { 38, 39, 40, 41, 42 },
    { 43, 44, 45, 46, 47 }
  };

byte aktualisLap=0;

boolean ledek[MERET][MERET][MERET];

void initCube() {
  for(byte i=0; i<MERET; i++) {
    pinMode(lapokPins[i], OUTPUT);
  }
  for(byte i=0; i<MERET; i++) {
    for(byte j=0; j<MERET; j++) {
      pinMode(fr_siPins[i][j], OUTPUT);
    } 
  }
}

int getCubeSize() {
  return MERET;
}

void cls() {
  for(int i=0; i<MERET; i++) {
    for(int j=0; j<MERET; j++) {
      for(int k=0; k<MERET; k++){
        ledek[i][j][k] = false;
      }
    }
  }
}

void setAll(boolean ertek) {
  for(int i=0; i<MERET; i++) {
    for(int j=0; j<MERET; j++) {
      for(int k=0; k<MERET; k++){
        ledek[i][j][k] = ertek;
      }
    }
  }
}

void setPixel(byte x, byte y, byte z, boolean ertek) {
  ledek[x][y][z] =  ertek;
}

boolean getPixel(byte x, byte y, byte z) {
  return ledek[x][y][z]; 
}

void setRowFront(byte y, byte z, boolean ertek) {
  for (int i=0; i<MERET; i++){
    setPixel(i, y, z, ertek); 
  }
}

void setRowSide(byte x, byte y, boolean ertek) {
  for (int i=0; i<MERET; i++){
    setPixel(x, y, i, ertek);
  }
}


void setColoumn(byte x, byte z, boolean ertek) {
  for (int i=0; i<MERET; i++){
    setPixel(x, i, z, ertek);
  }  
}

void setLevel(byte y, boolean ertek) {
  for (int i=0; i<MERET; i++) {
    for (int j=0; j<MERET; j++) {
      setPixel(i, y, j, ertek); 
    }
  } 
}

void setSideFr (byte x, boolean ertek) {
  for (int i=0; i<MERET; i++) {
    for (int j=0; j<MERET; j++) {
      setPixel(x, i, j, ertek); 
    }
  } 
}

void setSideSi (byte z, boolean ertek) {
  for (int i=0; i<MERET; i++) {
    for (int j=0; j<MERET; j++) {
      setPixel(i, j, z, ertek); 
    }
  } 
}

void shiftSide (byte which, byte with, boolean dir) {
  for(int x=0; x<MERET; x++) {
    for(int y=0; y<MERET; y++) {
      if (dir) {
        setPixel(x,y,which-with, getPixel(x,y,which));
        setPixel(x,y,which,false);
      } 
      else {
        setPixel(x,y,which+with, getPixel(x,y,which));
        setPixel(x,y,which,false);
      }
    }
  }
}

void showNextLevel() {
  digitalWrite(lapokPins[aktualisLap], LOW);
  if(aktualisLap<MERET-1) {
    aktualisLap++;
  } 
  else {
    aktualisLap=0;
  }
  for(int i=0; i<MERET; i++) {
    for(int j=0; j<MERET; j++) {
      digitalWrite(fr_siPins[i][j], ledek[i][aktualisLap][j]);
    }
  }
  digitalWrite(lapokPins[aktualisLap], HIGH);
}
