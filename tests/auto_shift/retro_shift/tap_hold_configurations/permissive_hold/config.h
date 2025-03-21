/* Copyright 2022 Isaac Elenbaas
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

#include "test_common.h"

<<<<<<<< HEAD:tests/auto_shift/retro_shift/tap_hold_configurations/permissive_hold/config.h
========
// place overrides here
>>>>>>>> f4dfa218ff924f0e9f964f81706474a765c88cc2:keyboards/unikeyboard/diverge3/keymaps/iso_uk/config.h
#define PERMISSIVE_HOLD

#define RETRO_SHIFT 2 * TAPPING_TERM
// releases between AUTO_SHIFT_TIMEOUT and TAPPING_TERM are not tested
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_MODIFIERS
