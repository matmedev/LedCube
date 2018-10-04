#include "tagulo.h"

#include "cube.h"

void tagulo_kp(int sebesseg) {
  cls();
  setPixel(2,2,2,1);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setColoumn(1,1,1);
  setColoumn(1,2,1);
  setColoumn(1,3,1);
  setColoumn(2,1,1);
  setColoumn(2,2,1);
  setColoumn(2,3,1);
  setColoumn(3,1,1);    
  setColoumn(3,2,1);
  setColoumn(3,3,1);
  setLevel(0,0);
  setLevel(4,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setAll(1);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(0,0);
  setLevel(4,0);
  setSideSi(0,0);
  setSideSi(4,0);
  setSideFr(0,0);
  setSideFr(4,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(1,0);
  setLevel(3,0);
  setSideSi(1,0);
  setSideSi(3,0);
  setSideFr(1,0);
  setSideFr(3,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setAll(0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
}

void tagulo_sr(int sebesseg) {
  setPixel(0,0,0,1);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setPixel(0,0,1,1);
  setPixel(0,1,0,1);
  setPixel(1,0,0,1);
  setPixel(1,1,0,1);
  setPixel(1,0,1,1);
  setPixel(0,1,1,1);
  setPixel(1,1,1,1);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setColoumn(2,0,1);
  setColoumn(2,1,1);
  setColoumn(2,2,1);
  setColoumn(1,2,1);
  setColoumn(0,2,1);
  setColoumn(0,0,1);
  setColoumn(1,0,1);
  setColoumn(0,1,1);
  setColoumn(1,1,1);
  setLevel(4,0);
  setLevel(3,0);    
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(3,1);
  setSideSi(3,1);
  setSideFr(3,1);
  setLevel(4,0);
  setSideSi(4,0);
  setSideFr(4,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setAll(1);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(4,0);
  setSideSi(4,0);
  setSideFr(4,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(3,0);
  setSideSi(3,0);
  setSideFr(3,0);    
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(2,0);
  setSideSi(2,0);
  setSideFr(2,0);    
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setLevel(1,0);
  setSideSi(1,0);
  setSideFr(1,0);    
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setPixel(0,0,0,0);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
}
