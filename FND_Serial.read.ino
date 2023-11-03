void setup() {
  pinMode(2, OUTPUT);   //Data  
  pinMode(3, OUTPUT);   //Shift clock
  pinMode(4, OUTPUT);   //Latch clock
  Serial.begin(9600);
 }
void loop() {
  if (Serial.available() > 0)
  {
    //                  0           1           2           3           4           5           6           7           8           9
    int fnd[10] = {0b00000011, 0b10011111, 0b00100101, 0b00001101, 0b10011001, 0b01001001, 0b11000001, 0b00011111, 0b00000001, 0b00011001};
    int fnddata = Serial.read();
    Serial.print("fnddata : ");
    Serial.println(fnddata);
    digitalWrite(4, 0);
    for (int i = 48; i < 58; i ++)
    {
      digitalWrite(4, 0);
      if (fnddata == i)
      {
      shiftOut(2, 3, LSBFIRST, fnd[i - 48]);
      digitalWrite(4, 1);
      }   
    }
  }
}