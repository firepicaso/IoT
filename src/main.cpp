#include <Arduino.h>

const int GREEN_PIN = 14; // GPIO pin connected to the LED

void setup() {
  pinMode(GREEN_PIN, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  digitalWrite(GREEN_PIN, HIGH);
  delay(500);
  digitalWrite(GREEN_PIN, LOW);
  Serial.println("\n Blinked GREEN");
  delay(1000);
}