const int buttonPin = 2;

void setup() {
  // Set button pin as input
  pinMode(buttonPin, INPUT);
  // Initialize serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Read button state
  int buttonState = digitalRead(buttonPin);
  // Print button state to serial monitor
  Serial.println(buttonState);
  
  // Add 500ms delay to avoid flooding serial port
  delay(500);
}
