// Extension 3: PWM LED brightness control
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Gradually increase LED brightness
  analogWrite(led, 31);  // 12% brightness
  delay(1000);
  analogWrite(led, 63);  // 25% brightness
  delay(1000); 
  analogWrite(led, 127);  // 50% brightness
  delay(1000);
  analogWrite(led, 191);  // 75% brightness
  delay(1000);
  analogWrite(led, 255);  // full brightness
  delay(1000);
}
