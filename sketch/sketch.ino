#include <Arduino.h>
#include <PCA9539.h>
void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("System initialized - USB CDC on boot is disabled.");
}

void loop() {
  Serial.println("hello");
  delay(3000);
}
