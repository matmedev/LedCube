#include "fordulo.h"

#include "cube.h"

void fordulo(int sebesseg) {
  setSideSi(4,true);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(4,3,true);
  setRowFront(4,4,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(4,2,true);
  setRowFront(3,3,true);
  setRowFront(4,3,false);
  setRowFront(3,4,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(4,1,true);
  setRowFront(3,2,true);
  setRowFront(2,3,true);
  setRowFront(4,2,false);
  setRowFront(3,3,false);
  setRowFront(2,4,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(4,0,true);
  setRowFront(3,1,true);
  setRowFront(2,2,true);
  setRowFront(1,3,true);
  setRowFront(4,1,false);
  setRowFront(3,2,false);
  setRowFront(2,3,false);
  setRowFront(1,4,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(3,0,true);
  setRowFront(2,1,true);
  setRowFront(3,1,false);
  setRowFront(4,0,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(1,2,true);
  setRowFront(0,3,true);
  setRowFront(1,3,false);
  setRowFront(2,2,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(0,2,true);
  setRowFront(1,1,true);
  setRowFront(2,0,true);
  setRowFront(1,2,false);
  setRowFront(2,1,false);
  setRowFront(3,0,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(0,1,true);
  setRowFront(1,0,true);
  setRowFront(1,1,false);
  setRowFront(2,0,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
  setRowFront(0,0,true);
  setRowFront(1,0,false);
  for(int i=0; i<sebesseg/2; i++) {
    showNextLevel();
    delay(2); 
  }
}
