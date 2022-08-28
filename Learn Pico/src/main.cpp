#include <Arduino.h>

 int led = 25;
 

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Test_070722_1");
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  
}