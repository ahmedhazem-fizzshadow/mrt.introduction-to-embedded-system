const int potPin = A0; 
const int buzzerPin = 13; 

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  int potValue = analogRead(potPin); // Read potentiometer value
  float voltage = potValue * (5.0 / 1023.0); // Convert potentiometer value to voltage

  Serial.print("Voltage: ");
  Serial.println(voltage); // Print voltage to serial monitor

  if (voltage >= 3.0) { // If voltage is 3 volts or higher, sound buzzer
    digitalWrite(buzzerPin, HIGH);
  } else { // Otherwise, turn off buzzer
    digitalWrite(buzzerPin, LOW);
  }

  delay(500); // Delay for 500 milliseconds
}
