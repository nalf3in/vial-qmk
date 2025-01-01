/* Copyright 2023 @ Keychron(https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Caps lock LED Pin */
#define LED_CAPS_LOCK_PIN A7
#define LED_PIN_ON_STATE 1

/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U

/* Old default behavior of mod-taps */
#define HOLD_ON_OTHER_KEY_PRESS

/* Emulated EEPROM configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047

/* HC595 driver configuration */
#define HC595_STCP A0
#define HC595_SHCP A1
#define HC595_DS C15
#define HC595_START_INDEX 1
#define HC595_END_INDEX 20

/* Factory test keys */
#define FN_KEY1 MO(1)
#define FN_KEY2 MO(3)