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

<<<<<<<< HEAD:tests/auto_shift/retro_shift/tap_hold_configurations/hold_on_other_key_press/config.h
#include "test_common.h"
========
>>>>>>>> f4dfa218ff924f0e9f964f81706474a765c88cc2:keyboards/atreyu/keymaps/default/config.h

#define HOLD_ON_OTHER_KEY_PRESS

#define RETRO_SHIFT 2 * TAPPING_TERM
// releases between AUTO_SHIFT_TIMEOUT and TAPPING_TERM are not tested
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_MODIFIERS
