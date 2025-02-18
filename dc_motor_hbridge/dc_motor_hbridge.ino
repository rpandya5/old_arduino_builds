const int switchPin = 8; // switch input
const int motorPin1 = 9; // H-bridge leg 1 (pin 1)
const int motorPin2 = 10; // H-bridge leg 2 (pin 2)
const int enablePin = 11; // H-bridge enable pin

void setup() {
  // set the switch as an input:
  pinMode(switchPin, INPUT);

  // set all the other pins as outputs:
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // enable the H-bridge
  digitalWrite(enablePin, HIGH);
}

void loop() {
  if (digitalRead(switchPin) == HIGH) { // if switch is HIGH
    digitalWrite(motorPin1, LOW);  // set leg 1 of H-bridge low
    digitalWrite(motorPin2, HIGH); // set leg 2 of H-bridge high
  } else {
    digitalWrite(motorPin1, HIGH); // set leg 1 of H-bridge high
    digitalWrite(motorPin2, LOW);  // set leg 2 of H-bridge low
  }
}
