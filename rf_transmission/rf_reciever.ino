#include <RH_ASK.h>
RH_ASK driver;
int led = 9;

void setup() {
  driver.init();
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);
  
  if (driver.recv(buf, &buflen)) {
    if (buf[0] == '1') {
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
  }
}
