#include <Arduino.h>

const byte PIN_BUTTON = 2;
const byte PIN_LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_BUTTON, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte buttonState = digitalRead(PIN_BUTTON);

  // Turn on the LED when the button is HIGH Voltage
  if (buttonState == HIGH)
  {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  } 
}