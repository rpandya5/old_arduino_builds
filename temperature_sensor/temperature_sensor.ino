int sensorPin = A0;  // sensor connected to A0
int piezoPin = 9;    // piezo connected to pin 9

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(sensorPin);  // get sensor value
  
  // Convert reading to voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  
  // Convert voltage to temperature
  float temperature = (voltage - .5) * 100;
  
  // Map temperature to frequency range
  int frequency = map(temperature, 20, 30, 2000, 100);
  
  // Output sound based on temperature
  tone(piezoPin, frequency);
  
  // Print values to serial monitor
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  Serial.print(", Volts: ");
  Serial.print(voltage);
  Serial.print(", Temperature (C): ");
  Serial.println(temperature);
  
  delay(100);
}
