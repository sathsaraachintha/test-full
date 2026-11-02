#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("System initialized - 5 second delay loop.");
}

void loop() {
  Serial.println("hello");
  delay(5000);
}
