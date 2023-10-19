#include <Arduino.h>

const int sensorPin = A0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); 
  float voltage = sensorValue * (5.0 / 1024.0); 
  float temperatureCelsius = voltage * 100.0; 

  Serial.print("Temperature: ");
  Serial.print(temperatureCelsius);
  Serial.println(" °C");

  delay(1000); // Delay for 1 second
}
