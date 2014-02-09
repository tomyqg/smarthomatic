/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013 Uwe Freese
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

#ifndef _E2P_THERMOSTAT_H
#define _E2P_THERMOSTAT_H

// E2P Block "Thermostat"
// ======================
// Start offset (bit): 512
// Overall block length: 7680 bits

// UIntValue BaseStationPacketCounter

// Set BaseStationPacketCounter (UIntValue)
// Byte offset: 64, bit offset: 0, length bits 24, min val 0, max val 16777215
static inline void e2p_thermostat_set_basestationpacketcounter(uint32_t val)
{
  eeprom_write_UIntValue(64, 0, 24, val);
}

// Get BaseStationPacketCounter (UIntValue)
// Byte offset: 64, bit offset: 0, length bits 24, min val 0, max val 16777215
static inline uint32_t e2p_thermostat_get_basestationpacketcounter(void)
{
  return eeprom_read_UIntValue32(64, 0, 24, 0, 16777215);
}

// Reserved area with 7656 bits


#endif /* _E2P_THERMOSTAT_H */