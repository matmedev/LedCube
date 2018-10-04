#ifndef _CUBE_H
#define _CUBE_H

#include "Arduino.h"

void initCube();
int getCubeSize();

void cls();
void setPixel(byte x, byte y, byte z, boolean ertek);
boolean getPixel(byte x, byte y, byte z);
void setRowFront(byte y, byte z, boolean ertek);
void setRowSide(byte x, byte y, boolean ertek);
void setColoumn(byte x, byte z, boolean ertek);
void setLevel(byte y, boolean ertek);
void setSideFr (byte x, boolean ertek);
void setSideSi (byte z, boolean ertek);
void shiftSide (byte which, byte with, boolean dir);
void setAll(boolean ertek);
void showNextLevel();

#endif
