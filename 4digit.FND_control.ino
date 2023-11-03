void setup() {
  for (int i = 2; i < 14; i++)
    pinMode(i, OUTPUT);
}
void loop() {
  //                  0           1           2           3           4           5           6           7           8           9
  int fnd[10] = {0b00000011, 0b10011111, 0b00100101, 0b00001101, 0b10011001, 0b01001001, 0b11000001, 0b00011111, 0b00000001, 0b00011001};
  for (int j = 1; j < 5; j++)
  {
    for (int i = 2; i < 10; i++)
    {
      digitalWrite(i, bitRead(fnd[j], 9 - i));
    }
    digitalWrite(9 + j, 1);
    delay(3);
    fndoff();
  }
}
void fndoff()
{
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}