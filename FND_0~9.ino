void setup() {
  pinMode(2, OUTPUT);   //Data  
  pinMode(3, OUTPUT);   //Shift clock
  pinMode(4, OUTPUT);   //Latch clock
 }

void loop() {
  for (int i = 0; i < 10; i++)
  {
    //                  0           1           2           3           4           5           6           7           8           9
    int fnd[10] = {0b00000011, 0b10011111, 0b00100101, 0b00001101, 0b10011001, 0b01001001, 0b11000001, 0b00011111, 0b00000001, 0b00011001};
    digitalWrite(4, 0);
    shiftOut(2, 3, LSBFIRST, fnd[i]);

    digitalWrite(4, 1);
    delay(5000);
  }
}