/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef FONT_H
#define FONT_H

#include <stdint.h>

//extern const uint8_t gFontBig[95][16];
extern const uint8_t gFontBig[95][15];
extern const uint8_t gFontBigDigits[11][26];

//extern const uint8_t gFontSmallDigits[11][7];
extern const uint8_t gFontSmall[95][6];
#ifdef ENABLE_SMALL_BOLD
	extern const uint8_t gFontSmallBold[95][6];
#endif


#ifdef ENABLE_fagciSPTM
extern const uint8_t gFont3x5[160][3];
#endif

#endif

