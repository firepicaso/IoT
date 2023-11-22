#include <Arduino.h>

const int BUILTIN_PIN = 2; // GPIO pin connected to the LED

void blinkLED(int times, int delayTime) {
  for (int i = 0; i < times; i++) {
    digitalWrite(BUILTIN_PIN, HIGH);
    delay(delayTime);
    digitalWrite(BUILTIN_PIN, LOW);
    delay(delayTime);
  }
}

void setup() {
  pinMode(BUILTIN_PIN, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600); // Initialize serial communication

  blinkLED(5, 500);
  
  Serial.println("\n Blinked 5 times");
}

void loop() {
  // some code
}