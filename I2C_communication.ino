#include <LiquidCrystal.h>
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

/*
char str[] = "Induk University";
char str2[] ="OH SUN JE";

void setup() {
  LCD.begin(16, 2);
}

void loop() {
  for (int j = 0; j < 2; j++) {
    for (int i = 0; i < 17; i++) {
      if (j == 0){
      LCD.print(str[i]);
      delay(300);
      }
      else{
        LCD.setCursor(i, j);
        LCD.print(str2[i]);
        delay(300);
        if (i == 8)
          break;
      }
    }
  }
  LCD.clear();
}
*/

byte make1[8] = {
  B00000,
  B01001,
  B01001,
  B10101,
  B10101,
  B00001,
  B00001,
  B00000
};
byte make2[8] = {
  B00000,
  B11110,
  B01010,
  B10011,
  B00010,
  B01000,
  B01110,
  B00000
};

byte make3[8] = {
  B00000,
  B00000,
  B00100,
  B00000,
  B00100,
  B00000,
  B00000,
  B00000
};

byte make4[8] = {
  B00000,
  B11101,
  B00101,
  B01011,
  B10001,
  B00001,
  B00001,
  B00000
};

byte make5[8] = {
  B00000,
  B11101,
  B00101,
  B11101,
  B10001,
  B11101,
  B00001,
  B00000
};


void setup() {
  LCD.createChar(0, make1);
  LCD.createChar(1, make2);
  LCD.createChar(2, make3);
  LCD.createChar(3, make4);
  LCD.createChar(4, make5);
  LCD.begin(16, 2);
  LCD.clear();

  LCD.write(byte(0));
  LCD.write(byte(1));
  LCD.write(byte(2));
  LCD.setCursor(0, 1);
  LCD.write(byte(3));
  LCD.write(byte(4));
  LCD.write(byte(2));
  for (int i = 0; i < 10; i++) {
    int j = 0, k = 0, l = 0;
    LCD.setCursor(3, 0);
    LCD.print(l);
    LCD.print(k);
    LCD.write(byte(2));
    LCD.print(j);
    LCD.print(i);
    delay(100);
    if (i == 8) {
      j++;
    }
    if (j == 6) {
      j = 0;
      k++;
    }
  }
}

void loop() {
}