#include <Arduino.h>
#define FLOOR1PIN 2
#define FLOOR2PIN 3
#define FLOOR3PIN 4

uint8_t prev;

void setup() {
  Serial.begin(9600);
  pinMode(FLOOR1PIN, INPUT_PULLUP);
  pinMode(FLOOR2PIN, INPUT_PULLUP);
  pinMode(FLOOR3PIN, INPUT_PULLUP);
}

void loop() {
  if ((digitalRead(FLOOR1PIN) == LOW) && prev != FLOOR1PIN) {
    Serial.println(1);
    prev = FLOOR1PIN;
  }
  if ((digitalRead(FLOOR2PIN) == LOW) && prev != FLOOR2PIN) {
    Serial.println(2);
    prev = FLOOR2PIN;
  }
  if ((digitalRead(FLOOR3PIN) == LOW) && prev != FLOOR3PIN) {
    Serial.println(3);
    prev = FLOOR3PIN;
  }
}
