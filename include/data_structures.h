/******************************************************************************
 * TCRetrophone: RP2040-based Telephone Central Office Simulator
 * (c) 2025, Tammy Cravit <tammy@tammymakesthings.com>
 *
 * File       : data_structures.h.h
 * Description: Data Structures
 ******************************************************************************/

#pragma once

#ifndef __HAS_DATA_STRUCTURES_H__
#define __HAS_DATA_STRUCTURES_H__

#include "Arduino.h"

typedef enum {
  UNINITIALIZED = 0x00,
  ON_HOOK = 0x01,
  OFF_HOOK = 0x02
} line_status_t;

typedef struct {
  String phone_number;

  uint8_t slic_audio_mute_pin;
  uint8_t slic_fwd_rev_pin;
  uint8_t slic_ring_mode_pin;
  uint8_t slic_shk_pin;
  line_status_t line_status;
} phone_interface_t;

#endif // __HAS_DATA_STRUCTURES_H__
