const int LDRPin = A0; // LDR pin connected to analog pin A0
const int LEDPin = 13; // LED pin connected to digital pin 13

int LDRValue = 0; // variable to store LDR value

void setup() {
  pinMode(LEDPin, OUTPUT); // set LED pin as output
  Serial.begin(9600); // start serial communication
}

void loop() {
  LDRValue = analogRead(LDRPin); // read LDR value
  Serial.println(LDRValue); // print LDR value to serial monitor

  if (LDRValue < 400) { // if LDR value is less than 400, turn on LED
    digitalWrite(LEDPin, HIGH);
  } else { // otherwise, turn off LED
    digitalWrite(LEDPin, LOW);
  }

  delay(100); // delay for 100 milliseconds
}
