/******************************************************************************
 * TCRetrophone: RP2040-based Telephone Central Office Simulator
 * (c) 2025, Tammy Cravit <tammy@tammymakesthings.com>
 *
 * File       : debug.h
 * Description: Debug Helpers
 ******************************************************************************/

#pragma once

#include "data_structures.h"
#ifndef __HAS_DEBUG_H__
#define __HAS_DEBUG_H__

#ifndef VERBOSE_DEBUGGING
#define VERBOSE_DEBUGGING 1
#endif // VERBOSE_DEBUGGING

void init_debugging();
void debug_line_state(phone_interface_t line, const int line_num);
void debug_switch_state(phone_interface_t line_list[]);

#endif // __HAS_DEBUG_H__
