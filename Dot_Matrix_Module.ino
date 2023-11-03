//DIN : Data in
#include "LedControl.h"
LedControl Ic = LedControl(12, 11, 10, 1);

const uint8_t arrow[8] = {
  0b00001000,
  0b00001100,
  0b00001110,
  0b11111111,
  0b11111111,
  0b00001110,
  0b00001100,
  0b00001000
};

/*
const uint8_t Heart1[8] = {
  0b00000000,
  0b00100100,
  0b01111110,
  0b01111110,
  0b01111110,
  0b00111100,
  0b00011000,
  0b00000000
};

const uint8_t Heart2[8] = {
  0b11111111,
  0b11011011,
  0b10000001,
  0b10000001,
  0b10000001,
  0b11000011,
  0b11100111,
  0b11111111
};
*/

void setup() {
  Ic.shutdown(0, false);  //Power-Saving Mode
  Ic.setIntensity(0, 5);  //밝기
  Ic.clearDisplay(0);     //초기화
}

void loop() {
  //arrow
  /* 
  for (int j = 0; j < 1000; j++) {
    for (int i = 0; i < 8; i++) {
      Ic.setRow(0, i, Heart1[i]);
    }
  }
  for (int j = 0; j < 1000; j++) {
    for (int i = 0; i < 8; i++) {
      Ic.setRow(0, i, Heart2[i]);
    }
  }
  */
  for (int k = -7; k < 8; k++) {
    for (int j = 0; j < 100; j++) {
      for (int i = 0; i < 8; i++) {
        Ic.setRow(0, i, arrow[i] >> k);
      }
    }
  }
  /*
  for (int k = -7; k >= 0; k++) {
    for (int j = 0; j < 100; j++) {
      for (int i = 0; i < 8; i++) {
        Ic.setRow(0, i, arrow[i] >> k);
      }
    }    
  }
  */
}