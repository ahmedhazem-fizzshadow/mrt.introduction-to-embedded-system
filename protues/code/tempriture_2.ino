#include <Arduino.h>

// Define the pins
const int motorPin = 9;
const int sensorPin = A0;

// Declare variables
float temperature;
int motorSpeed;

void setup() {
  // Set the motor pin as output
  pinMode(motorPin, OUTPUT);
  // Set the sensor pin as input
  pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop() {
  // Read the temperature from the sensor
  temperature = analogRead(sensorPin) * 5.0 / 1024.0;
  // Calculate the motor speed based on the temperature
  motorSpeed = (int)temperature;
  // Turn on the motor
  digitalWrite(motorPin, HIGH);
  // Set the motor speed
  analogWrite(motorPin, motorSpeed);
  Serial.print("temperature :  ");
 
  Serial.println(temperature);
  delay(1000);
}
