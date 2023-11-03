int value = 0;
int LED1 = 13, LED2 = 12;
boolean state1 = false, state2 = false;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int readvalue1 = digitalRead(2);
  int readvalue2 = digitalRead(3);
  int readvalue3 = digitalRead(4);

  attachInterrupt(0, one, FALLING);
  attachInterrupt(1, two, RISING);
  /*
  Serial.print("Read : ");
  Serial.println(readvalue1);
  state1 = !state1;
  digitalWrite(LED1, state1);
  attachInterrupt(0, blink, CHANGE);
  delay(1000); 
  */
}

/*
void blink(){
  state2 = !state2;
  digitalWrite(LED2, state2);
}
*/

void one() {
  value = value + 1000;
  Serial.print("Price : ");
  Serial.println(value);
}
void two() {
  value = value + 500;
  Serial.print("Price : ");
  Serial.println(value);
}