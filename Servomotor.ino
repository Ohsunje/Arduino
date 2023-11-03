#include <Servo.h>
unsigned int INTERVAL;

Servo microServo;
int servoPin = 9;
int angle = 0, angleStep = 1;
int valuestep;
int value = 0;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  microServo.attach(servoPin);
  microServo.write(angle);
  Serial.begin(9600);
}

void loop() { /*
  angle += angleStep;

  if (angle == 180) {
    angleStep = -1;
    digitalWrite(5, 1);
    digitalWrite(7, 0);
  } else if (angle == 0) {
    angleStep = 1;
    digitalWrite(5, 0);
    digitalWrite(7, 1);
  }

  microServo.write(angle);
  delay(10);
  */

  /* 가변저항 모터 제어
  int resist = analogRead(A5);
  int value = resist / 5.683; 
  // Serial.println(resist);
  Serial.println(value);
  analogWrite(A0, resist);
  microServo.write(resist);
  */

  /* + - 제어
  int inputdata = Serial.read();
  Serial.print("Input data : ");
  Serial.println(inputdata);
  Serial.print("Value : ");
  Serial.println(value);
  if (inputdata == 43)
    value++;
  else if (inputdata == 45)
    value--;
  else if (value > 180)
    value = 180;
  else if (value < 0)
    value = 0;
  microServo.write(value);
  */
}