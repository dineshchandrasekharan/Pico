#include <Arduino.h>

int FIRST_LED = 0;
int SECOND_LED = 1;
int THIRD_LED = 2;
int FOURTH_LED = 3;

void setup() {
  pinMode(FIRST_LED, OUTPUT);
  pinMode(SECOND_LED, OUTPUT);
  pinMode(THIRD_LED, OUTPUT);
  pinMode(FOURTH_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SECOND_LED, LOW);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, LOW);
  digitalWrite(FIRST_LED, HIGH);
  delay(200);
  digitalWrite(FIRST_LED, LOW);
  digitalWrite(SECOND_LED, HIGH);
  delay(200);
  digitalWrite(SECOND_LED, LOW);
  digitalWrite(THIRD_LED, HIGH);
  delay(200);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, HIGH);
  delay(200);
  
  
}