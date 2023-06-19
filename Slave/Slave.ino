#include <Wire.h>

void setup() {
  Wire.begin(5);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}

void loop() {
  
}

void receiveEvent(int numBytes) {
  while (Wire.available()) {
    int receivedValue = Wire.read();
    Serial.println(receivedValue);
  }
}