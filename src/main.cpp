#include <Arduino.h>
#define FLOOR1PIN 2
#define FLOOR2PIN 3
#define FLOOR3PIN 4

uint8_t call;

void setup() {
  Serial.begin(9600);
  pinMode(FLOOR1PIN, INPUT_PULLUP);
  pinMode(FLOOR2PIN, INPUT_PULLUP);
  pinMode(FLOOR3PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(FLOOR1PIN) == LOW){
    call = 1;
  }
  if (digitalRead(FLOOR2PIN) == LOW){
    call = 2;
  }
  if (digitalRead(FLOOR3PIN) == LOW){
    call = 3;
  }
  Serial.println(call);
}
