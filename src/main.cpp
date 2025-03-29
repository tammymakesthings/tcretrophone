/******************************************************************************
 * TCRetrophone: RP2040-based Telephone Central Office Simulator
 * (c) 2025, Tammy Cravit <tammy@tammymakesthings.com>
 *
 * File       : main.cpp
 * Description: Main Program
 ******************************************************************************/

#include "Arduino.h"
#include "config.h"
#include "tcretrophone.h"

void setup() {
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

  // wait for a second
  delay(1000);
}
