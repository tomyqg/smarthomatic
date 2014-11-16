/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013..2014 Uwe Freese
*
* smarthomatic is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your
* option) any later version.
*
* smarthomatic is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with smarthomatic. If not, see <http://www.gnu.org/licenses/>.
*
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
* ! WARNING: This file is generated by the SHC EEPROM editor and should !
* ! never be modified manually.                                         !
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

#ifndef _E2P_SOILMOISTUREMETER_H
#define _E2P_SOILMOISTUREMETER_H

#include "e2p_access.h"

// E2P Block "SoilMoistureMeter"
// =============================
// Start offset (bit): 512
// Overall block length: 7664 bits

// WakeupIntervalInit (EnumValue)
// Description: Decide about the interval between two measurements when the device is in initialization mode (after button press) to remember the dry threshold value.

#ifndef _ENUM_WakeupIntervalInit
#define _ENUM_WakeupIntervalInit
typedef enum {
  WAKEUPINTERVALINIT_10S = 1692,
  WAKEUPINTERVALINIT_60S = 2421,
  WAKEUPINTERVALINIT_120S = 2538,
  WAKEUPINTERVALINIT_4M = 2794,
  WAKEUPINTERVALINIT_8M = 3050,
  WAKEUPINTERVALINIT_15M = 3292,
  WAKEUPINTERVALINIT_20M = 3474,
  WAKEUPINTERVALINIT_30M = 4489,
  WAKEUPINTERVALINIT_1H = 4745,
  WAKEUPINTERVALINIT_2H = 5001,
  WAKEUPINTERVALINIT_3H = 5070,
  WAKEUPINTERVALINIT_4H = 5257,
  WAKEUPINTERVALINIT_6H = 5326,
  WAKEUPINTERVALINIT_8H = 5513,
  WAKEUPINTERVALINIT_12H = 5582,
  WAKEUPINTERVALINIT_16H = 5769
} WakeupIntervalInitEnum;
#endif /* _ENUM_WakeupIntervalInit */

// Set WakeupIntervalInit (EnumValue)
// Offset: 512, length bits 16
static inline void e2p_soilmoisturemeter_set_wakeupintervalinit(WakeupIntervalInitEnum val)
{
  eeprom_write_UIntValue(512, 16, val);
}

// Get WakeupIntervalInit (EnumValue)
// Offset: 512, length bits 16
static inline WakeupIntervalInitEnum e2p_soilmoisturemeter_get_wakeupintervalinit(void)
{
  return eeprom_read_UIntValue16(512, 16, 0, 65535);
}

// AveragingIntervalInit (UIntValue)
// Description: The number of values whose average is calculated before the dry threshold is remembered.

// Set AveragingIntervalInit (UIntValue)
// Offset: 528, length bits 8, min val 1, max val 16
static inline void e2p_soilmoisturemeter_set_averagingintervalinit(uint8_t val)
{
  eeprom_write_UIntValue(528, 8, val);
}

// Get AveragingIntervalInit (UIntValue)
// Offset: 528, length bits 8, min val 1, max val 16
static inline uint8_t e2p_soilmoisturemeter_get_averagingintervalinit(void)
{
  return eeprom_read_UIntValue8(528, 8, 1, 16);
}

// WakeupInterval (EnumValue)
// Description: Decide after which time the device should be woken up by the RFM12B transceiver to measure values in normal operation.

#ifndef _ENUM_WakeupInterval
#define _ENUM_WakeupInterval
typedef enum {
  WAKEUPINTERVAL_10S = 1692,
  WAKEUPINTERVAL_60S = 2421,
  WAKEUPINTERVAL_120S = 2538,
  WAKEUPINTERVAL_4M = 2794,
  WAKEUPINTERVAL_8M = 3050,
  WAKEUPINTERVAL_15M = 3292,
  WAKEUPINTERVAL_20M = 3474,
  WAKEUPINTERVAL_30M = 4489,
  WAKEUPINTERVAL_1H = 4745,
  WAKEUPINTERVAL_2H = 5001,
  WAKEUPINTERVAL_3H = 5070,
  WAKEUPINTERVAL_4H = 5257,
  WAKEUPINTERVAL_6H = 5326,
  WAKEUPINTERVAL_8H = 5513,
  WAKEUPINTERVAL_12H = 5582,
  WAKEUPINTERVAL_16H = 5769
} WakeupIntervalEnum;
#endif /* _ENUM_WakeupInterval */

// Set WakeupInterval (EnumValue)
// Offset: 536, length bits 16
static inline void e2p_soilmoisturemeter_set_wakeupinterval(WakeupIntervalEnum val)
{
  eeprom_write_UIntValue(536, 16, val);
}

// Get WakeupInterval (EnumValue)
// Offset: 536, length bits 16
static inline WakeupIntervalEnum e2p_soilmoisturemeter_get_wakeupinterval(void)
{
  return eeprom_read_UIntValue16(536, 16, 0, 65535);
}

// AveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before the current humidity is calculated and sent.

// Set AveragingInterval (UIntValue)
// Offset: 552, length bits 8, min val 1, max val 16
static inline void e2p_soilmoisturemeter_set_averaginginterval(uint8_t val)
{
  eeprom_write_UIntValue(552, 8, val);
}

// Get AveragingInterval (UIntValue)
// Offset: 552, length bits 8, min val 1, max val 16
static inline uint8_t e2p_soilmoisturemeter_get_averaginginterval(void)
{
  return eeprom_read_UIntValue8(552, 8, 1, 16);
}

// DryThreshold (UIntValue)
// Description: This is the dry threshold and maximum counter value that should happen.

// Set DryThreshold (UIntValue)
// Offset: 560, length bits 16, min val 0, max val 65535
static inline void e2p_soilmoisturemeter_set_drythreshold(uint16_t val)
{
  eeprom_write_UIntValue(560, 16, val);
}

// Get DryThreshold (UIntValue)
// Offset: 560, length bits 16, min val 0, max val 65535
static inline uint16_t e2p_soilmoisturemeter_get_drythreshold(void)
{
  return eeprom_read_UIntValue16(560, 16, 0, 65535);
}

// MinVal (UIntValue)
// Description: This is the minimum counter value measured in the current watering cycle when the soil is wet.

// Set MinVal (UIntValue)
// Offset: 576, length bits 16, min val 0, max val 65535
static inline void e2p_soilmoisturemeter_set_minval(uint16_t val)
{
  eeprom_write_UIntValue(576, 16, val);
}

// Get MinVal (UIntValue)
// Offset: 576, length bits 16, min val 0, max val 65535
static inline uint16_t e2p_soilmoisturemeter_get_minval(void)
{
  return eeprom_read_UIntValue16(576, 16, 0, 65535);
}

// Reserved area with 7584 bits
// Offset: 592


#endif /* _E2P_SOILMOISTUREMETER_H */
