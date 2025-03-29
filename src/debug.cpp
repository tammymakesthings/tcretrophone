#include "Arduino.h"

#include "config.h"
#include "data_structures.h"
#include "globals.h"

#include "debug.h"

void init_debugging() {
  Serial.begin(9600);
  Serial.println("============================================================="
                 "=================");
  Serial.println("===          tcretrophone: A Simple RP2040 Telephone CO "
                 "Simulator          ===");
  Serial.println("===               Tammy Cravit / tammy@tammymakesthings.com  "
                 "              ===");
  Serial.println(
      "===            https://github.com/tammymakesthings/tcretrophone         "
      "   ===");
  Serial.println("============================================================="
                 "=================");
  Serial.println("");
  Serial.print("- Initializing Switch with ");
  Serial.print(NUM_PHONE_INTERFACES);
  Serial.println(" lines.");
}

void debug_line_state(phone_interface_t line, int line_num) {
  Serial.print("--> Line ");
  Serial.println(line_num);
  Serial.print("\tphone_number = ");
  Serial.println(line.phone_number);
  Serial.print("\tline_status = ");
  Serial.println(line.line_status);

#ifdef VERBOSE_DEBUGGING
  Serial.print("\tslic_audio_mute_pin = ");
  Serial.println(line.slic_audio_mute_pin);
  Serial.print("\t   slic_fwd_rev_pin = ");
  Serial.println(line.slic_fwd_rev_pin);
  Serial.print("\t slic_ring_mode_pin = ");
  Serial.println(line.slic_ring_mode_pin);
  Serial.print("\t       slic_shk_pin = ");
  Serial.println(line.slic_shk_pin);
#endif
}

void debug_switch_state(phone_interface_t line_list[]) {
  Serial.println("* Dumping Switch State:");
  for (int i = 0; i < NUM_PHONE_INTERFACES; i++) {
    debug_line_state(line_list[i], i);
  }
}
