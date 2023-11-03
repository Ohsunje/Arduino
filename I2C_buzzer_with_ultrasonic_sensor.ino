int triggerPin = 3;
int ehcoPin = 2;
int buzzer = 4;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(ehcoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(triggerPin, 1);
  delayMicroseconds(10);
  digitalWrite(triggerPin, 0);

  int pulseWidth = pulseIn(ehcoPin, 1);
  int distance = pulseWidth / 58;


  if (distance < 10) {
    tone(4, 2000);
    delay(100);
    noTone(4);
    delay(100);
  }
  
  else if (10 < distance && distance < 20) {
    tone(4, 2000);
    delay(500);
    noTone(4);
    delay(500);
  }

  else if (distance > 20) {
    tone(4, 2000);
    delay(1000);
    noTone(4);
    delay(1000);
  }

  Serial.println("전방 장애물까지의 거리 : " + String(distance));
}