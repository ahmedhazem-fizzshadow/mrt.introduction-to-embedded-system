
#include <Arduino.h>
float temperature ;
#define SENSOR_PIN A0
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  temperature= analogRead(A0)*5.0/1024.0*100;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" degreesCelsius");
  delay(1000);
if(temperature>40.0){
  digitalWrite(13,HIGH);
}
else{
  digitalWrite(13,LOW);
}
}
