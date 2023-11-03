#include <IRremote.h>
int recvPin = 2;
IRrecv irrecv(recvPin);
decode_results results;
int lux = 130;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  // IR 수신 시작 코드
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results))  {
    Serial.println(results.value, HEX); // 수신 값 출력
    Serial.println(lux);

    switch(results.value) {
      case 0xFF6897: analogWrite(A1, lux);  break;
      case 0xFFA857: lux = lux + 10;  break;
      case 0xFFE01F: lux = lux - 10;  break;
    }
    irrecv.resume();  // 다음 신호 대기
  }
}
