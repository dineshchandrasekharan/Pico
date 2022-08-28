#include <Arduino.h>

 int led = 25;
 

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Test_070722_1");
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
}