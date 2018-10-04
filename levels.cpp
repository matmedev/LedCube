#include "levels.h"

#include "cube.h"

int MERET = getCubeSize();

void levels_01(int sebesseg) {
  cls();
  for (byte level=0; level<MERET; level++) {
    setLevel(level,1);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  for (byte level=MERET-1; level>0; level--) {
    setLevel(level,0);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  setLevel(0,0);
}

void levels_02(int sebesseg) {
  cls();
  for (byte level=0; level<MERET; level++) {
    setLevel(level,1);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  for (byte level=0; level<MERET; level++) {
    setLevel(level,0);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  setLevel(0,0);
}

void sidesFr_01(int sebesseg) {
  cls();
  for (byte level=0; level<MERET; level++) {
    setSideFr(level,1);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  for (byte level=MERET-1; level>0; level--) {
    setSideFr(level,0);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  setLevel(0,0);
}

void sidesFr_02(int sebesseg) {
  cls();
  for (byte level=0; level<MERET; level++) {
    setSideFr(level,1);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  for (byte level=0; level<MERET; level++) {
    setSideFr(level,0);
    for(int i=0; i<sebesseg/2; i++) {
      showNextLevel();
      delay(2); 
    }
  }
  setLevel(0,0);
}
//
//void sidesSi_01(int sebesseg) {
//  cls();
//  for (byte level=0; level<MERET; level++) {
//    setSideSi(level,1);
//    for(int i=0; i<sebesseg/2; i++) {
//      showNextLevel();
//      delay(2); 
//    }
//  }
//  for (byte level=MERET-1; level>=0; level--) {
//    setSideSi(level,0);
//    for(int i=0; i<sebesseg/2; i++) {
//      showNextLevel();
//      delay(2); 
//    }
//  }
//  setLevel(0,0);
//}
//
//void sidesSi_02(int sebesseg) {
//  cls();
//  for (byte level=0; level<MERET; level++) {
//    setSideSi(level,1);
//    for(int i=0; i<sebesseg/2; i++) {
//      showNextLevel();
//      delay(2); 
//    }
//  }
//  for (byte level=0; level<MERET; level++) {
//    setSideSi(level,0);
//    for(int i=0; i<sebesseg/2; i++) {
//      showNextLevel();
//      delay(2); 
//    }
//  }
//  setLevel(0,0);
//}
