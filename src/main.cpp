#include <Arduino.h>

#define ARDULED 13

void setup() {
  Serial.begin(9600);
  pinMode(ARDULED, OUTPUT);
  Serial.println("Starting!");
}

void loop() {
  digitalWrite(ARDULED, LOW);
  Serial.println("LED is off");
  delay(1000);
  //
  digitalWrite(ARDULED, HIGH);
  Serial.println("LED is on");
  delay(1000);
}