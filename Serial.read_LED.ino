void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    int value = Serial.read();
    Serial.println(value);
    if (value == 43)
      digitalWrite(3, 1);
    else
      digitalWrite(3, 0);
  }
}