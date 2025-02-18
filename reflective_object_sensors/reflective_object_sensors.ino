const int IRSensor = 11; // IR Sensor input
int led = 9;
int detection;

void setup() {
  pinMode(IRSensor, INPUT); // set IR sensor pin as input
  Serial.begin(9600); // start serial communication
  pinMode(led, OUTPUT); // set the LED pin as output
}

void loop() {
  detection = digitalRead(IRSensor);
  Serial.println(detection); // print the digital value of IR Sensor input
  delay(250);
  
  if (detection == 1) {
    Serial.println("DETECTED");
    digitalWrite(led, HIGH); // pin at 75% brightness
    delay(500); // 0.5 sec delay
    digitalWrite(led, LOW); // pin at 75% brightness
    delay(500); // 0.5 sec delay
  } else {
    Serial.println("NOT DETECTED");
    digitalWrite(led, LOW);
  }
}
