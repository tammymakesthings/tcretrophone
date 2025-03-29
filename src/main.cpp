/******************************************************************************
 * TCRetrophone: RP2040-based Telephone Central Office Simulator
 * (c) 2025, Tammy Cravit <tammy@tammymakesthings.com>
 *
 * File       : main.cpp
 * Description: Main Program
 ******************************************************************************/

#include "Arduino.h"

#include "config.h"
#include "data_structures.h"
#include "debug.h"
#include "tcretrophone.h"

phone_interface_t PHONE_LINES[NUM_PHONE_INTERFACES] = {
    {"5205551234", 13, 14, 15, 16, UNINITIALIZED},
    {"5205559876", 21, 22, 23, 24, UNINITIALIZED}};

void setup() {
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 0; i < NUM_PHONE_INTERFACES; i++) {
    PHONE_LINES[i].line_status = ON_HOOK;
  }
  init_debugging();
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
