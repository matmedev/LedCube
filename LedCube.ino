#include "cube.h"
#include "levels.h"
#include "tagulo.h"
#include "fordulo.h"

void setup() {
  initCube();
}

void loop() {
  for(int i=100; i>=0; i-=10) {
    sidesFr_01(i);
  }
  for(int i=100; i>=0; i-=10) {
    sidesFr_02(i);
  }
  for(int i=100; i>=0; i-=10) {
    levels_01(i);
  }
  for(int i=100; i>=0; i-=10) {
    levels_02(i);
  }
  for(int i=150; i>=75; i-=10) {
    tagulo_kp(i);
  }
  for(int i=150; i>=75; i-=10) {
    tagulo_sr(i);
  }
}
