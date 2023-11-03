int brightness;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  analogWrite(3, brightness);
  if (Serial.available() > 0)
  {
    int value = Serial.read();
    Serial.print("Value : ");
    Serial.println(value);
    Serial.print("Brightness = ");
    Serial.println(brightness);
    if (value == 43)
    {
      brightness = brightness + 10;
      if (brightness >= 255)
        brightness = 255;
    }
    else if (value == 45)
    {
      brightness = brightness - 10;
      if (brightness <= 0)
        brightness = 0;
    }
  }
}