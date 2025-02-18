// LED is connected to pin 13
int led = 13;

void setup() {
  pinMode(led, OUTPUT); // set the LED pin as output
}

void loop() {
  digitalWrite(led, HIGH); // turn LED on
  delay(1000); // wait 1 second
  digitalWrite(led, LOW); // turn LED off
  delay(1000); // wait 1 second
}
