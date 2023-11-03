
void setup() {
  for (int i = 2; i < 10; i++)
    pinMode(i, OUTPUT);  
}

void loop() {
  //phone number :  01053553497
  /*     a
      f      b
         g  
      e      c
         d    */
  //                        0           1           0           5           3           5          5            3           4             9         7
  int phonenumber[11] = {0b00000011, 0b10011111, 0b00000011, 0b01001001, 0b00001101, 0b01001001, 0b01001001, 0b00001101, 0b10011001, 0b00011001, 0b00011111};
  for (int j = 0; j < 11; j++)
  {
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(i + 2, bitRead(phonenumber[j], 7 - i));
    }
    delay(700);
  }
}