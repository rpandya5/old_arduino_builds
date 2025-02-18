const int motorPin = 3; // motor speed pin 3 to DC motor

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT); // set motorPin as output
}

void loop() {
  // put your code here, to run repeatedly:
  for (int i = 127; i < 191; i++) { // increase motor to 3/4 speed
    analogWrite(motorPin, i); // set the speed of motor
    delay(500); // 0.5 sec delay
  }
  
  for (int i = 191; i >= 127; i--) { // decrease motor to 1/2 speed
    analogWrite(motorPin, i); // set the speed of motor
    delay(500); // 0.5 sec delay
  }
}
