#include <Wire.h>

int button = 0;
int lastButton = 0;
int firstFibonacci = 0;
int secondFibonacci = 1;

void setup() {
  pinMode(5, INPUT);
  Wire.begin();
}

void loop() {
  button = digitalRead(5);
  if (button != lastButton) {
    if (button == LOW) {
      Wire.beginTransmission(5);
      Wire.write(firstFibonacci);
      Wire.endTransmission();

      int temp = firstFibonacci;
      firstFibonacci = secondFibonacci;
      secondFibonacci += temp;
    }
    lastButton = button;
  }
}