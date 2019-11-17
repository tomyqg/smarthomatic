/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013..2019 Uwe Freese
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

#ifndef _E2P_ENVSENSOR_H
#define _E2P_ENVSENSOR_H

#include "e2p_access.h"

// E2P Block "EnvSensor"
// =====================
// Start offset (bit): 512
// Overall block length: 7680 bits

// TemperatureSensorType (EnumValue)
// Description: You can choose one of the supported temperature / humidity sensors.

#ifndef _ENUM_TemperatureSensorType
#define _ENUM_TemperatureSensorType
typedef enum {
  TEMPERATURESENSORTYPE_NOSENSOR = 0,
  TEMPERATURESENSORTYPE_SHT15 = 1,
  TEMPERATURESENSORTYPE_DS7505 = 2,
  TEMPERATURESENSORTYPE_BMP085 = 3,
  TEMPERATURESENSORTYPE_DS18X20 = 4,
  TEMPERATURESENSORTYPE_SHT2X_HTU21D = 5
} TemperatureSensorTypeEnum;
#endif /* _ENUM_TemperatureSensorType */

// Set TemperatureSensorType (EnumValue)
// Offset: 512, length bits 8
static inline void e2p_envsensor_set_temperaturesensortype(TemperatureSensorTypeEnum val)
{
  eeprom_write_UIntValue(512, 8, val);
}

// Get TemperatureSensorType (EnumValue)
// Offset: 512, length bits 8
static inline TemperatureSensorTypeEnum e2p_envsensor_get_temperaturesensortype(void)
{
  return eeprom_read_UIntValue8(512, 8, 0, 255);
}

// HumiditySensorType (EnumValue)
// Description: You can choose one of the supported air humidity sensors.

#ifndef _ENUM_HumiditySensorType
#define _ENUM_HumiditySensorType
typedef enum {
  HUMIDITYSENSORTYPE_NOSENSOR = 0,
  HUMIDITYSENSORTYPE_SHT15 = 1,
  HUMIDITYSENSORTYPE_SHT2X_HTU21D = 2
} HumiditySensorTypeEnum;
#endif /* _ENUM_HumiditySensorType */

// Set HumiditySensorType (EnumValue)
// Offset: 520, length bits 8
static inline void e2p_envsensor_set_humiditysensortype(HumiditySensorTypeEnum val)
{
  eeprom_write_UIntValue(520, 8, val);
}

// Get HumiditySensorType (EnumValue)
// Offset: 520, length bits 8
static inline HumiditySensorTypeEnum e2p_envsensor_get_humiditysensortype(void)
{
  return eeprom_read_UIntValue8(520, 8, 0, 255);
}

// BarometricSensorType (EnumValue)
// Description: You can choose one of the supported barometric pressure sensors.

#ifndef _ENUM_BarometricSensorType
#define _ENUM_BarometricSensorType
typedef enum {
  BAROMETRICSENSORTYPE_NOSENSOR = 0,
  BAROMETRICSENSORTYPE_BMP085 = 1
} BarometricSensorTypeEnum;
#endif /* _ENUM_BarometricSensorType */

// Set BarometricSensorType (EnumValue)
// Offset: 528, length bits 8
static inline void e2p_envsensor_set_barometricsensortype(BarometricSensorTypeEnum val)
{
  eeprom_write_UIntValue(528, 8, val);
}

// Get BarometricSensorType (EnumValue)
// Offset: 528, length bits 8
static inline BarometricSensorTypeEnum e2p_envsensor_get_barometricsensortype(void)
{
  return eeprom_read_UIntValue8(528, 8, 0, 255);
}

// BrightnessSensorType (EnumValue)
// Description: You can choose one of the supported light sensors.

#ifndef _ENUM_BrightnessSensorType
#define _ENUM_BrightnessSensorType
typedef enum {
  BRIGHTNESSSENSORTYPE_NOSENSOR = 0,
  BRIGHTNESSSENSORTYPE_PHOTOCELL = 1
} BrightnessSensorTypeEnum;
#endif /* _ENUM_BrightnessSensorType */

// Set BrightnessSensorType (EnumValue)
// Offset: 536, length bits 8
static inline void e2p_envsensor_set_brightnesssensortype(BrightnessSensorTypeEnum val)
{
  eeprom_write_UIntValue(536, 8, val);
}

// Get BrightnessSensorType (EnumValue)
// Offset: 536, length bits 8
static inline BrightnessSensorTypeEnum e2p_envsensor_get_brightnesssensortype(void)
{
  return eeprom_read_UIntValue8(536, 8, 0, 255);
}

// DistanceSensorType (EnumValue)
// Description: Choose one of the connected distance sensor types.

#ifndef _ENUM_DistanceSensorType
#define _ENUM_DistanceSensorType
typedef enum {
  DISTANCESENSORTYPE_NOSENSOR = 0,
  DISTANCESENSORTYPE_SRF02 = 1
} DistanceSensorTypeEnum;
#endif /* _ENUM_DistanceSensorType */

// Set DistanceSensorType (EnumValue)
// Offset: 544, length bits 8
static inline void e2p_envsensor_set_distancesensortype(DistanceSensorTypeEnum val)
{
  eeprom_write_UIntValue(544, 8, val);
}

// Get DistanceSensorType (EnumValue)
// Offset: 544, length bits 8
static inline DistanceSensorTypeEnum e2p_envsensor_get_distancesensortype(void)
{
  return eeprom_read_UIntValue8(544, 8, 0, 255);
}

// ParticulateMatterSensorType (EnumValue)
// Description: Choose one of the connected particulate matter sensor types.

#ifndef _ENUM_ParticulateMatterSensorType
#define _ENUM_ParticulateMatterSensorType
typedef enum {
  PARTICULATEMATTERSENSORTYPE_NOSENSOR = 0,
  PARTICULATEMATTERSENSORTYPE_SPS30 = 1
} ParticulateMatterSensorTypeEnum;
#endif /* _ENUM_ParticulateMatterSensorType */

// Set ParticulateMatterSensorType (EnumValue)
// Offset: 552, length bits 8
static inline void e2p_envsensor_set_particulatemattersensortype(ParticulateMatterSensorTypeEnum val)
{
  eeprom_write_UIntValue(552, 8, val);
}

// Get ParticulateMatterSensorType (EnumValue)
// Offset: 552, length bits 8
static inline ParticulateMatterSensorTypeEnum e2p_envsensor_get_particulatemattersensortype(void)
{
  return eeprom_read_UIntValue8(552, 8, 0, 255);
}

// Reserved area with 456 bits
// Offset: 560

// PowerPinMode (EnumValue)
// Description: Choose the behaviour of the power pin (PD5) while measuring. It can be turned on before measuring to switch a voltage converter to produce 5V out of the 3V battery power. This is needed for some sensors which need 5V. 5VSensor_Delay1000 means that the pin is switched on when a sensor is configured which needs 5V power (currently SRF02 and SPS30). There's a delay of 1000ms after switching the pin to stabilize the voltage and to ensure the sensor works correctly. Off means the power pin is always off.

#ifndef _ENUM_PowerPinMode
#define _ENUM_PowerPinMode
typedef enum {
  POWERPINMODE_OFF = 0,
  POWERPINMODE_5VSENSOR_DELAY1000 = 1
} PowerPinModeEnum;
#endif /* _ENUM_PowerPinMode */

// Set PowerPinMode (EnumValue)
// Offset: 1016, length bits 8
static inline void e2p_envsensor_set_powerpinmode(PowerPinModeEnum val)
{
  eeprom_write_UIntValue(1016, 8, val);
}

// Get PowerPinMode (EnumValue)
// Offset: 1016, length bits 8
static inline PowerPinModeEnum e2p_envsensor_get_powerpinmode(void)
{
  return eeprom_read_UIntValue8(1016, 8, 0, 255);
}

// WakeupInterval (EnumValue)
// Description: Decide after which time the device should be woken up by the RFM12B transceiver to measure or send values.

#ifndef _ENUM_WakeupInterval
#define _ENUM_WakeupInterval
typedef enum {
  WAKEUPINTERVAL_2S = 1018,
  WAKEUPINTERVAL_4S = 1274,
  WAKEUPINTERVAL_6S = 1467,
  WAKEUPINTERVAL_8S = 1530,
  WAKEUPINTERVAL_10S = 1692,
  WAKEUPINTERVAL_15S = 1770,
  WAKEUPINTERVAL_20S = 1948,
  WAKEUPINTERVAL_30S = 2027,
  WAKEUPINTERVAL_45S = 2224,
  WAKEUPINTERVAL_60S = 2421,
  WAKEUPINTERVAL_75S = 2450,
  WAKEUPINTERVAL_90S = 2480,
  WAKEUPINTERVAL_105S = 2509,
  WAKEUPINTERVAL_2M = 2538,
  WAKEUPINTERVAL_3M = 2736,
  WAKEUPINTERVAL_4M = 2794,
  WAKEUPINTERVAL_5M = 2962,
  WAKEUPINTERVAL_8M = 3050,
  WAKEUPINTERVAL_12M = 3248,
  WAKEUPINTERVAL_15M = 3292,
  WAKEUPINTERVAL_20M = 3474
} WakeupIntervalEnum;
#endif /* _ENUM_WakeupInterval */

// Set WakeupInterval (EnumValue)
// Offset: 1024, length bits 16
static inline void e2p_envsensor_set_wakeupinterval(WakeupIntervalEnum val)
{
  eeprom_write_UIntValue(1024, 16, val);
}

// Get WakeupInterval (EnumValue)
// Offset: 1024, length bits 16
static inline WakeupIntervalEnum e2p_envsensor_get_wakeupinterval(void)
{
  return eeprom_read_UIntValue16(1024, 16, 0, 65535);
}

// TemperatureMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set TemperatureMeasuringInterval (UIntValue)
// Offset: 1040, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_temperaturemeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1040, 8, val);
}

// Get TemperatureMeasuringInterval (UIntValue)
// Offset: 1040, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_temperaturemeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1040, 8, 1, 255);
}

// TemperatureAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set TemperatureAveragingInterval (UIntValue)
// Offset: 1048, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_temperatureaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1048, 8, val);
}

// Get TemperatureAveragingInterval (UIntValue)
// Offset: 1048, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_temperatureaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1048, 8, 1, 16);
}

// HumidityMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set HumidityMeasuringInterval (UIntValue)
// Offset: 1056, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_humiditymeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1056, 8, val);
}

// Get HumidityMeasuringInterval (UIntValue)
// Offset: 1056, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_humiditymeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1056, 8, 1, 255);
}

// HumidityAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set HumidityAveragingInterval (UIntValue)
// Offset: 1064, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_humidityaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1064, 8, val);
}

// Get HumidityAveragingInterval (UIntValue)
// Offset: 1064, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_humidityaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1064, 8, 1, 16);
}

// BarometricMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set BarometricMeasuringInterval (UIntValue)
// Offset: 1072, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_barometricmeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1072, 8, val);
}

// Get BarometricMeasuringInterval (UIntValue)
// Offset: 1072, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_barometricmeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1072, 8, 1, 255);
}

// BarometricAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set BarometricAveragingInterval (UIntValue)
// Offset: 1080, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_barometricaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1080, 8, val);
}

// Get BarometricAveragingInterval (UIntValue)
// Offset: 1080, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_barometricaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1080, 8, 1, 16);
}

// BrightnessMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set BrightnessMeasuringInterval (UIntValue)
// Offset: 1088, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_brightnessmeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1088, 8, val);
}

// Get BrightnessMeasuringInterval (UIntValue)
// Offset: 1088, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_brightnessmeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1088, 8, 1, 255);
}

// BrightnessAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set BrightnessAveragingInterval (UIntValue)
// Offset: 1096, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_brightnessaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1096, 8, val);
}

// Get BrightnessAveragingInterval (UIntValue)
// Offset: 1096, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_brightnessaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1096, 8, 1, 16);
}

// DistanceMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set DistanceMeasuringInterval (UIntValue)
// Offset: 1104, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_distancemeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1104, 8, val);
}

// Get DistanceMeasuringInterval (UIntValue)
// Offset: 1104, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_distancemeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1104, 8, 1, 255);
}

// DistanceAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set DistanceAveragingInterval (UIntValue)
// Offset: 1112, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_distanceaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1112, 8, val);
}

// Get DistanceAveragingInterval (UIntValue)
// Offset: 1112, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_distanceaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1112, 8, 1, 16);
}

// DigitalInputMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set DigitalInputMeasuringInterval (UIntValue)
// Offset: 1120, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_digitalinputmeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1120, 8, val);
}

// Get DigitalInputMeasuringInterval (UIntValue)
// Offset: 1120, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_digitalinputmeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1120, 8, 1, 255);
}

// DigitalInputAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set DigitalInputAveragingInterval (UIntValue)
// Offset: 1128, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_digitalinputaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1128, 8, val);
}

// Get DigitalInputAveragingInterval (UIntValue)
// Offset: 1128, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_digitalinputaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1128, 8, 1, 16);
}

// AnalogInputMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set AnalogInputMeasuringInterval (UIntValue)
// Offset: 1136, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_analoginputmeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1136, 8, val);
}

// Get AnalogInputMeasuringInterval (UIntValue)
// Offset: 1136, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_analoginputmeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1136, 8, 1, 255);
}

// AnalogInputAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set AnalogInputAveragingInterval (UIntValue)
// Offset: 1144, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_analoginputaveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1144, 8, val);
}

// Get AnalogInputAveragingInterval (UIntValue)
// Offset: 1144, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_analoginputaveraginginterval(void)
{
  return eeprom_read_UIntValue8(1144, 8, 1, 16);
}

// ParticulateMatterMeasuringInterval (UIntValue)
// Description: The number of times the device wakes up before this value is measured.

// Set ParticulateMatterMeasuringInterval (UIntValue)
// Offset: 1152, length bits 8, min val 1, max val 255
static inline void e2p_envsensor_set_particulatemattermeasuringinterval(uint8_t val)
{
  eeprom_write_UIntValue(1152, 8, val);
}

// Get ParticulateMatterMeasuringInterval (UIntValue)
// Offset: 1152, length bits 8, min val 1, max val 255
static inline uint8_t e2p_envsensor_get_particulatemattermeasuringinterval(void)
{
  return eeprom_read_UIntValue8(1152, 8, 1, 255);
}

// ParticulateMatterAveragingInterval (UIntValue)
// Description: The number of values whose average is calculated before sending.

// Set ParticulateMatterAveragingInterval (UIntValue)
// Offset: 1160, length bits 8, min val 1, max val 16
static inline void e2p_envsensor_set_particulatematteraveraginginterval(uint8_t val)
{
  eeprom_write_UIntValue(1160, 8, val);
}

// Get ParticulateMatterAveragingInterval (UIntValue)
// Offset: 1160, length bits 8, min val 1, max val 16
static inline uint8_t e2p_envsensor_get_particulatematteraveraginginterval(void)
{
  return eeprom_read_UIntValue8(1160, 8, 1, 16);
}

// Reserved area with 368 bits
// Offset: 1168

// DigitalInputPin (EnumValue[8])
// Description: You can choose up to 8 GPIO pins as digital input. The enum values are counting through every pin from port B, C and D, leaving out the pins that are not accessible because otherwise used.

#ifndef _ENUM_DigitalInputPin
#define _ENUM_DigitalInputPin
typedef enum {
  DIGITALINPUTPIN_UNUSED = 0,
  DIGITALINPUTPIN_PB1 = 2,
  DIGITALINPUTPIN_PB2 = 3,
  DIGITALINPUTPIN_PB6 = 7,
  DIGITALINPUTPIN_PB7 = 8,
  DIGITALINPUTPIN_PC1 = 10,
  DIGITALINPUTPIN_PC2 = 11,
  DIGITALINPUTPIN_PC3 = 12,
  DIGITALINPUTPIN_PC4 = 13,
  DIGITALINPUTPIN_PC5 = 14,
  DIGITALINPUTPIN_PD3 = 20,
  DIGITALINPUTPIN_PD4 = 21,
  DIGITALINPUTPIN_PD5 = 22,
  DIGITALINPUTPIN_PD6 = 23
} DigitalInputPinEnum;
#endif /* _ENUM_DigitalInputPin */

// Set DigitalInputPin (EnumValue)
// Offset: 1536, length bits 8
static inline void e2p_envsensor_set_digitalinputpin(uint8_t index, DigitalInputPinEnum val)
{
  eeprom_write_UIntValue(1536 + (uint16_t)index * 8, 8, val);
}

// Get DigitalInputPin (EnumValue)
// Offset: 1536, length bits 8
static inline DigitalInputPinEnum e2p_envsensor_get_digitalinputpin(uint8_t index)
{
  return eeprom_read_UIntValue8(1536 + (uint16_t)index * 8, 8, 0, 255);
}

// DigitalInputPullUpResistor (BoolValue[8])
// Description: Decide if you want to switch on the pull-up resistor at each input pin you have chosen. (If you connect a simple switch connected to ground, you typically want this.)

// Set DigitalInputPullUpResistor (BoolValue)
// Offset: 1600, length bits 8
static inline void e2p_envsensor_set_digitalinputpullupresistor(uint8_t index, bool val)
{
  eeprom_write_UIntValue(1600 + (uint16_t)index * 8, 8, val ? 1 : 0);
}

// Get DigitalInputPullUpResistor (BoolValue)
// Offset: 1600, length bits 8
static inline bool e2p_envsensor_get_digitalinputpullupresistor(uint8_t index)
{
  return eeprom_read_UIntValue8(1600 + (uint16_t)index * 8, 8, 0, 1) == 1;
}

// DigitalInputTriggerMode (EnumValue[8])
// Description: The mode decides how the device detects changes and when a new message is sent. Off means the value is sent after a full cycle time only. In any other case, the device wakes up immediately after a change. A status is then sent either when the level is going up, down or on change.

#ifndef _ENUM_DigitalInputTriggerMode
#define _ENUM_DigitalInputTriggerMode
typedef enum {
  DIGITALINPUTTRIGGERMODE_OFF = 0,
  DIGITALINPUTTRIGGERMODE_UP = 1,
  DIGITALINPUTTRIGGERMODE_DOWN = 2,
  DIGITALINPUTTRIGGERMODE_CHANGE = 3
} DigitalInputTriggerModeEnum;
#endif /* _ENUM_DigitalInputTriggerMode */

// Set DigitalInputTriggerMode (EnumValue)
// Offset: 1664, length bits 8
static inline void e2p_envsensor_set_digitalinputtriggermode(uint8_t index, DigitalInputTriggerModeEnum val)
{
  eeprom_write_UIntValue(1664 + (uint16_t)index * 8, 8, val);
}

// Get DigitalInputTriggerMode (EnumValue)
// Offset: 1664, length bits 8
static inline DigitalInputTriggerModeEnum e2p_envsensor_get_digitalinputtriggermode(uint8_t index)
{
  return eeprom_read_UIntValue8(1664 + (uint16_t)index * 8, 8, 0, 255);
}

// Reserved area with 320 bits
// Offset: 1728

// AnalogInputPin (EnumValue[5])
// Description: You can choose up to 5 ADC pins as analog input. The enum values are a reduced set of the ones from the digital input.

#ifndef _ENUM_AnalogInputPin
#define _ENUM_AnalogInputPin
typedef enum {
  ANALOGINPUTPIN_UNUSED = 0,
  ANALOGINPUTPIN_PC1 = 10,
  ANALOGINPUTPIN_PC2 = 11,
  ANALOGINPUTPIN_PC3 = 12,
  ANALOGINPUTPIN_PC4 = 13,
  ANALOGINPUTPIN_PC5 = 14
} AnalogInputPinEnum;
#endif /* _ENUM_AnalogInputPin */

// Set AnalogInputPin (EnumValue)
// Offset: 2048, length bits 8
static inline void e2p_envsensor_set_analoginputpin(uint8_t index, AnalogInputPinEnum val)
{
  eeprom_write_UIntValue(2048 + (uint16_t)index * 8, 8, val);
}

// Get AnalogInputPin (EnumValue)
// Offset: 2048, length bits 8
static inline AnalogInputPinEnum e2p_envsensor_get_analoginputpin(uint8_t index)
{
  return eeprom_read_UIntValue8(2048 + (uint16_t)index * 8, 8, 0, 255);
}

// AnalogInputTriggerMode (EnumValue[5])
// Description: The mode decides how the device detects changes and when a new message is sent. The voltage level is measured in the configured interval. When the mode is set to off, the status is only sent after a full averaging cycle. In the other modes, a status is sent when the level is going up, down or changes according to the trigger level.

#ifndef _ENUM_AnalogInputTriggerMode
#define _ENUM_AnalogInputTriggerMode
typedef enum {
  ANALOGINPUTTRIGGERMODE_OFF = 0,
  ANALOGINPUTTRIGGERMODE_UP = 1,
  ANALOGINPUTTRIGGERMODE_DOWN = 2,
  ANALOGINPUTTRIGGERMODE_CHANGE = 3
} AnalogInputTriggerModeEnum;
#endif /* _ENUM_AnalogInputTriggerMode */

// Set AnalogInputTriggerMode (EnumValue)
// Offset: 2088, length bits 8
static inline void e2p_envsensor_set_analoginputtriggermode(uint8_t index, AnalogInputTriggerModeEnum val)
{
  eeprom_write_UIntValue(2088 + (uint16_t)index * 8, 8, val);
}

// Get AnalogInputTriggerMode (EnumValue)
// Offset: 2088, length bits 8
static inline AnalogInputTriggerModeEnum e2p_envsensor_get_analoginputtriggermode(uint8_t index)
{
  return eeprom_read_UIntValue8(2088 + (uint16_t)index * 8, 8, 0, 255);
}

// AnalogInputTriggerThreshold (UIntValue[5])
// Description: The threshold in millivolts is used when the trigger mode is on.

// Set AnalogInputTriggerThreshold (UIntValue)
// Offset: 2128, length bits 16, min val 0, max val 1100
static inline void e2p_envsensor_set_analoginputtriggerthreshold(uint8_t index, uint16_t val)
{
  eeprom_write_UIntValue(2128 + (uint16_t)index * 16, 16, val);
}

// Get AnalogInputTriggerThreshold (UIntValue)
// Offset: 2128, length bits 16, min val 0, max val 1100
static inline uint16_t e2p_envsensor_get_analoginputtriggerthreshold(uint8_t index)
{
  return eeprom_read_UIntValue16(2128 + (uint16_t)index * 16, 16, 0, 1100);
}

// AnalogInputTriggerHysteresis (UIntValue[5])
// Description: The hysteresis in millivolts is used when the trigger mode is on. It can avoid the trigger firing too often if you measure a slighty changing voltage. Because of noise and accuracy limits of the ADC, you should set a positive hysteresis in any case.

// Set AnalogInputTriggerHysteresis (UIntValue)
// Offset: 2208, length bits 16, min val 0, max val 1100
static inline void e2p_envsensor_set_analoginputtriggerhysteresis(uint8_t index, uint16_t val)
{
  eeprom_write_UIntValue(2208 + (uint16_t)index * 16, 16, val);
}

// Get AnalogInputTriggerHysteresis (UIntValue)
// Offset: 2208, length bits 16, min val 0, max val 1100
static inline uint16_t e2p_envsensor_get_analoginputtriggerhysteresis(uint8_t index)
{
  return eeprom_read_UIntValue16(2208 + (uint16_t)index * 16, 16, 0, 1100);
}

// Reserved area with 272 bits
// Offset: 2288

// Reserved area with 5632 bits
// Offset: 2560


#endif /* _E2P_ENVSENSOR_H */
