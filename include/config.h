/******************************************************************************
 * TCRetrophone: RP2040-based Telephone Central Office Simulator
 * (c) 2025, Tammy Cravit <tammy@tammymakesthings.com>
 *
 * File       : config.h
 * Description: Configuration Settings
 ******************************************************************************/

#pragma once

#ifndef __HAS_CONFIG_H__
#define __HAS_CONFIG_H__

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

#ifndef NUM_PHONE_INTERFACES
#define NUM_PHONE_INTERFACES 2
#endif

#endif // __HAS_CONFIG_H__
