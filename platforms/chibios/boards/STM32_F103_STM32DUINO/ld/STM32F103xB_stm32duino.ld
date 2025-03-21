/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * STM32F103xB memory setup for use with the STM32Duino bootloader.
 */
f103_flash_size = 128k;
f103_ram_size = 20k;

<<<<<<<< HEAD:platforms/chibios/boards/STM32_F103_STM32DUINO/ld/STM32F103xB_stm32duino.ld
INCLUDE stm32duino_bootloader_common.ld
========
#include "annepro2.h"

void annepro2_ble_bootload(void);
void annepro2_ble_startup(void);
void annepro2_ble_broadcast(uint8_t port);
void annepro2_ble_connect(uint8_t port);
void annepro2_ble_disconnect(void);
void annepro2_ble_unpair(void);
>>>>>>>> f4dfa218ff924f0e9f964f81706474a765c88cc2:keyboards/annepro2/annepro2_ble.h
