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

#include "font.h"

//const uint8_t gFontBig[95][16] =
const uint8_t gFontBig[95][15] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // , 0x00},     // ' '
	{0x00, 0x00, 0x70, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00},  // , 0x00},     // '!'
	{0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // , 0x00},     // '"'
	{0x40, 0xF0, 0xF0, 0x40, 0xF0, 0xF0, 0x40, 0x00, 0x04, 0x1F, 0x1F, 0x04, 0x1F, 0x1F, 0x04},  // , 0x00},     // '#'
	{0x70, 0xF8, 0x88, 0x8F, 0x8F, 0x98, 0x30, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07},  // , 0x00},     // '$'
	{0x60, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x18, 0x18},  // , 0x00},     // '%'
	{0x00, 0xB0, 0xF8, 0xC8, 0x78, 0xB0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x11, 0x0F, 0x1F, 0x10},  // , 0x00},     // '&'
	{0x00, 0x20, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // , 0x00},     // '''
	{0x00, 0x00, 0xE0, 0xF0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x00},  // , 0x00},     // '('
	{0x00, 0x00, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x00},  // , 0x00},     // ')'
	{0x00, 0x40, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x00, 0x01, 0x05, 0x07, 0x03, 0x03, 0x07, 0x05},  // , 0x01},     // '*'
	{0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01},  // , 0x00},     // '+'
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x00, 0x00},  // , 0x00},     // ','
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},  // , 0x00},     // '-'
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00},  // , 0x00},     // '.'
	{0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00},  // , 0x00},     // '/'
	{0xF0, 0xF8, 0x08, 0x88, 0x48, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x12, 0x11, 0x10, 0x1F, 0x0F},  // , 0x00},     // '0'
	{0x00, 0x20, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10},  // , 0x00},     // '1'
	{0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x18},  // , 0x00},     // '2'
	{0x10, 0x18, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x08, 0x18, 0x10, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // '3'
	{0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0x1F, 0x1F, 0x11},  // , 0x00},     // '4'
	{0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x08, 0x18, 0x10, 0x10, 0x11, 0x1F, 0x0F},  // , 0x00},     // '5'
	{0xE0, 0xF0, 0x98, 0x88, 0x88, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // '6'
	{0x18, 0x18, 0x08, 0x08, 0x88, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00},  // , 0x00},     // '7'
	{0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // '8'
	{0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07},  // , 0x00},     // '9'
	{0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00},  // , 0x00},     // ':'
	{0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00},  // , 0x00},     // ';'
	{0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10},  // , 0x00},     // '<'
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04},  // , 0x00},     // '='
	{0x00, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01},  // , 0x00},     // '>'
	{0x30, 0x38, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00},  // , 0x00},     // '?'
	{0xE0, 0xF0, 0x10, 0x90, 0x90, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x17, 0x17, 0x17, 0x03},  // , 0x00},     // '@'
	{0xC0, 0xE0, 0x30, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F},  // , 0x00},     // 'A'
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // 'B'
	{0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0C},  // , 0x00},     // 'C'
	{0x08, 0xF8, 0xF8, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x18, 0x0F, 0x07},  // , 0x00},     // 'D'
	{0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x11, 0x18, 0x1C},  // , 0x00},     // 'E'
	{0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x01, 0x00, 0x00},  // , 0x00},     // 'F'
	{0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x11, 0x11, 0x0F, 0x1F},  // , 0x00},     // 'G'
	{0xF8, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F},  // , 0x00},     // 'H'
	{0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00},  // , 0x00},     // 'I'
	{0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x1F, 0x0F, 0x00},  // , 0x00},     // 'J'
	{0x08, 0xF8, 0xF8, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x10, 0x1F, 0x1F, 0x01, 0x03, 0x1E, 0x1C},  // , 0x00},     // 'K'
	{0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x18, 0x1C},  // , 0x00},     // 'L'
	{0xF8, 0xF8, 0x70, 0xE0, 0x70, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F},  // , 0x00},     // 'M'
	{0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x1F, 0x1F},  // , 0x00},     // 'N'
	{0xE0, 0xF0, 0x18, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07},  // , 0x00},     // 'O'
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00},  // , 0x00},     // 'P'
	{0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x10, 0x1C, 0x78, 0x7F, 0x4F},  // , 0x00},     // 'Q'
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x01, 0x1F, 0x1E},  // , 0x00},     // 'R'
	{0x30, 0x78, 0xC8, 0x88, 0x88, 0x38, 0x30, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x11, 0x1F, 0x0E},  // , 0x00},     // 'S'
	{0x00, 0x38, 0x18, 0xF8, 0xF8, 0x18, 0x38, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00},  // , 0x00},     // 'T'
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // 'U'
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03},  // , 0x00},     // 'V'
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x07, 0x1F, 0x1C, 0x07, 0x1C, 0x1F, 0x07},  // , 0x00},     // 'W'
	{0x18, 0x78, 0xE0, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x07, 0x1E, 0x18},  // , 0x00},     // 'X'
	{0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00},  // , 0x00},     // 'Y'
	{0x38, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x38, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x1C},  // , 0x00},     // 'Z'
	{0x00, 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00},  // , 0x00},     // '['
	{0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C},  // , 0x00},     // '"\'
	{0x00, 0x00, 0x08, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00},  // , 0x00},     // ']'
	{0x10, 0x18, 0x0E, 0x07, 0x0E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // , 0x00},     // '^'
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40},  // , 0x40},     // '_'
	{0x00, 0x00, 0x07, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},  // , 0x00},     // '`'
	{0x00, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x0F, 0x1F, 0x10},  // , 0x00},     // 'a'
	{0x08, 0xF8, 0xF8, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // 'b'
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x08},  // , 0x00},     // 'c'
	{0x00, 0x80, 0xC0, 0x48, 0xF8, 0xF8, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10},  // , 0x00},     // 'd'
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x11, 0x11, 0x11, 0x19, 0x09},  // , 0x00},     // 'e'
	{0x80, 0xF0, 0xF8, 0x88, 0x18, 0x30, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00},  // , 0x00},     // 'f'
	{0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x4F, 0xDF, 0x90, 0x90, 0xFF, 0x7F, 0x00},  // , 0x00},     // 'g'
	{0x08, 0xF8, 0xF8, 0x80, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F},  // , 0x00},     // 'h'
	{0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00},  // , 0x00},     // 'i'
	{0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xFF, 0x7F},  // , 0x00},     // 'j'
	{0x08, 0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x1F, 0x1F, 0x03, 0x07, 0x1C, 0x18},  // , 0x00},     // 'k'
	{0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00},  // , 0x00},     // 'l'
	{0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x1F},  // , 0x00},     // 'm'
	{0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F},  // , 0x00},     // 'n'
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F},  // , 0x00},     // 'o'
	{0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x90, 0x10, 0x1F, 0x0F},  // , 0x00},     // 'p'
	{0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x0F, 0x1F, 0x10, 0x90, 0xFF, 0xFF, 0x80},  // , 0x00},     // 'q'
	{0x40, 0xC0, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x01},  // , 0x00},     // 'r'
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x08, 0x19, 0x13, 0x12, 0x16, 0x1C, 0x08},  // , 0x00},     // 's'
	{0x40, 0x40, 0xF0, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x18, 0x08},  // , 0x00},     // 't'
	{0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10},  // , 0x00},     // 'u'
	{0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x18, 0x0F, 0x07},  // , 0x00},     // 'v'
	{0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x0E, 0x18, 0x1F, 0x0F},  // , 0x00},     // 'w'
	{0x40, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x0F, 0x18, 0x10},  // , 0x00},     // 'x'
	{0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x8F, 0x9F, 0x90, 0x90, 0xD0, 0x7F, 0x3F},  // , 0x00},     // 'y'
	{0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x18, 0x18},  // , 0x00},     // 'z'
	{0x00, 0x80, 0x80, 0xF0, 0x78, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10},  // , 0x00},     // '{'
	{0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00},  // , 0x00},     // '|'
	{0x00, 0x08, 0x08, 0x78, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00},  // , 0x00},     // '}'
	{0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}   // , 0x00}      // '->'
};                                                                                                        

#if 0
	// original font
	const uint8_t gFontBigDigits[11][26] =
	{
		{0x00, 0xC0, 0xF0, 0xF8, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x07, 0x1F, 0x3F, 0x78, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x0F},
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00},
		{0x00, 0x10, 0x38, 0x38, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x7C, 0x6E, 0x66, 0x67, 0x67, 0x63, 0x61, 0x60, 0x00},
		{0x00, 0x10, 0x18, 0x18, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0xCC, 0xF8, 0xF8, 0x70, 0x00, 0x30, 0x30, 0x30, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x3F, 0x1E},
		{0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1E, 0x1F, 0x1F, 0x19, 0x18, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x18},
		{0x00, 0x00, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8C, 0x0C, 0x00, 0x00, 0x18, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7B, 0x3F, 0x1F},
		{0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0x9C, 0x38, 0x30, 0x00, 0x0F, 0x1F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x33, 0x3F, 0x1E},
		{0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x8C, 0xEC, 0xFC, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x40, 0x60, 0x78, 0x7C, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x78, 0xF8, 0xDC, 0x8C, 0x8C, 0x8C, 0x8C, 0xDC, 0xF8, 0x78, 0x00, 0x00, 0x1E, 0x3F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x3F, 0x1E},
		{0x00, 0xF0, 0xF8, 0xB8, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xB8, 0xF0, 0xE0, 0x00, 0x11, 0x33, 0x77, 0x67, 0x66, 0x66, 0x66, 0x76, 0x33, 0x3F, 0x1F, 0x07},
		{0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00}
	};
#else
	// VCR font
	const uint8_t gFontBigDigits[11][26] =
	{
		{0x00, 0x00, 0xF8, 0xFC, 0x06, 0x86, 0xC6, 0xE6, 0xF6, 0x76, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x77, 0x67, 0x63, 0x61, 0x60, 0x70, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x7F, 0x7F, 0x60, 0x60, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x18, 0x1C, 0x86, 0x86, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x63, 0x61, 0x61, 0x61, 0x61, 0x61, 0x60, 0x60, 0x00},
		{0x00, 0x00, 0x18, 0x1C, 0x06, 0x06, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x18, 0x38, 0x70, 0x60, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x00},
		{0x00, 0x00, 0x7E, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x66, 0xE6, 0xC6, 0x86, 0x00, 0x00, 0x00, 0x18, 0x38, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0xF8, 0xFC, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x71, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0x7E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x78, 0xFC, 0xC6, 0x86, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x78, 0xFC, 0xC6, 0x86, 0x86, 0x86, 0x86, 0x86, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x18, 0x38, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00}
	};
#endif

const uint8_t gFontSmallDigits[11][7] =
{
	{0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00},
	{0x00, 0x62, 0x51, 0x51, 0x49, 0x49, 0x46},
	{0x00, 0x22, 0x41, 0x49, 0x49, 0x4D, 0x32},
	{0x00, 0x18, 0x14, 0x12, 0x11, 0x7F, 0x10},
	{0x00, 0x27, 0x45, 0x45, 0x45, 0x45, 0x39},
	{0x00, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x30},
	{0x00, 0x01, 0x71, 0x09, 0x05, 0x03, 0x00},
	{0x00, 0x36, 0x49, 0x49, 0x49, 0x49, 0x36},
	{0x00, 0x46, 0x49, 0x49, 0x49, 0x29, 0x1E},
	{0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}
};

const uint8_t gFontSmall[95][7] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x5E, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00},
	{0x00, 0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00},
	{0x00, 0x26, 0x49, 0x7F, 0x49, 0x32, 0x00},
	{0x00, 0x63, 0x13, 0x08, 0x04, 0x62, 0x61},
	{0x00, 0x30, 0x4B, 0x4D, 0x55, 0x22, 0x50},
	{0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00},
	{0x00, 0x00, 0x1C, 0x22, 0x41, 0x00, 0x00},
	{0x00, 0x00, 0x41, 0x22, 0x1C, 0x00, 0x00},
	{0x00, 0x00, 0x2A, 0x1C, 0x1C, 0x2A, 0x00},
	{0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00},
	{0x00, 0x00, 0x40, 0x60, 0x20, 0x00, 0x00},
	{0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00},
	{0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00},
	{0x00, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02},
	{0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x00, 0x40, 0x42, 0x7F, 0x40, 0x40},
	{0x00, 0x62, 0x51, 0x51, 0x49, 0x49, 0x46},
	{0x00, 0x22, 0x41, 0x49, 0x49, 0x49, 0x36},
	{0x00, 0x18, 0x14, 0x12, 0x11, 0x7F, 0x10},
	{0x00, 0x27, 0x45, 0x45, 0x45, 0x45, 0x39},
	{0x00, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x32},
	{0x00, 0x01, 0x01, 0x71, 0x09, 0x05, 0x03},
	{0x00, 0x36, 0x49, 0x49, 0x49, 0x49, 0x36},
	{0x00, 0x26, 0x49, 0x49, 0x49, 0x49, 0x3E},
	{0x00, 0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00},
	{0x00, 0x00, 0x40, 0x6C, 0x2C, 0x00, 0x00},
	{0x00, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00},
	{0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00},
	{0x00, 0x00, 0x41, 0x22, 0x14, 0x08, 0x00},
	{0x00, 0x02, 0x01, 0x51, 0x09, 0x06, 0x00},
	{0x00, 0x30, 0x4A, 0x4A, 0x52, 0x3C, 0x00},
	{0x00, 0x7E, 0x09, 0x09, 0x09, 0x09, 0x7E},
	{0x00, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x36},
	{0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x22},
	{0x00, 0x7F, 0x41, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x7F, 0x49, 0x49, 0x49, 0x49, 0x41},
	{0x00, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x01},
	{0x00, 0x3E, 0x41, 0x49, 0x49, 0x49, 0x3A},
	{0x00, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x7F},
	{0x00, 0x41, 0x41, 0x7F, 0x41, 0x41, 0x00},
	{0x00, 0x20, 0x41, 0x41, 0x3F, 0x01, 0x01},
	{0x00, 0x7F, 0x08, 0x0C, 0x12, 0x21, 0x40},
	{0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40},
	{0x00, 0x7F, 0x02, 0x04, 0x04, 0x02, 0x7F},
	{0x00, 0x7F, 0x02, 0x04, 0x08, 0x10, 0x7F},
	{0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x06},
	{0x00, 0x3E, 0x41, 0x51, 0x61, 0x41, 0x3E},
	{0x00, 0x7F, 0x09, 0x09, 0x19, 0x29, 0x46},
	{0x00, 0x26, 0x49, 0x49, 0x49, 0x49, 0x32},
	{0x00, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x00},
	{0x00, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x3F},
	{0x00, 0x07, 0x38, 0x40, 0x40, 0x38, 0x07},
	{0x00, 0x3F, 0x40, 0x30, 0x30, 0x40, 0x3F},
	{0x00, 0x63, 0x14, 0x08, 0x08, 0x14, 0x63},
	{0x00, 0x07, 0x08, 0x70, 0x08, 0x07, 0x00},
	{0x00, 0x61, 0x51, 0x49, 0x45, 0x43, 0x41},
	{0x00, 0x00, 0x7F, 0x41, 0x41, 0x00, 0x00},
	{0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x60},
	{0x00, 0x00, 0x00, 0x41, 0x41, 0x7F, 0x00},
	{0x00, 0x04, 0x02, 0x01, 0x02, 0x04, 0x00},
	{0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40},
	{0x00, 0x00, 0x03, 0x07, 0x06, 0x00, 0x00},
	{0x00, 0x20, 0x54, 0x54, 0x54, 0x78, 0x00},
	{0x00, 0x7F, 0x44, 0x44, 0x44, 0x38, 0x00},
	{0x00, 0x38, 0x44, 0x44, 0x44, 0x28, 0x00},
	{0x00, 0x38, 0x44, 0x44, 0x44, 0x7F, 0x00},
	{0x00, 0x38, 0x54, 0x54, 0x54, 0x48, 0x00},
	{0x00, 0x7C, 0x0A, 0x0A, 0x0A, 0x02, 0x00},
	{0x00, 0x58, 0x54, 0x54, 0x54, 0x3C, 0x00},
	{0x00, 0x7F, 0x04, 0x04, 0x04, 0x78, 0x00},
	{0x00, 0x00, 0x00, 0x7A, 0x00, 0x00, 0x00},
	{0x00, 0x20, 0x40, 0x40, 0x3D, 0x00, 0x00},
	{0x00, 0x00, 0x7F, 0x10, 0x28, 0x44, 0x00},
	{0x00, 0x00, 0x00, 0x3F, 0x40, 0x00, 0x00},
	{0x00, 0x7C, 0x08, 0x10, 0x10, 0x08, 0x7C},
	{0x00, 0x7C, 0x04, 0x04, 0x04, 0x78, 0x00},
	{0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00},
	{0x00, 0x7C, 0x14, 0x14, 0x14, 0x08, 0x00},
	{0x00, 0x08, 0x14, 0x14, 0x14, 0x7C, 0x40},
	{0x00, 0x7C, 0x04, 0x04, 0x04, 0x08, 0x00},
	{0x00, 0x08, 0x54, 0x54, 0x54, 0x20, 0x00},
	{0x00, 0x3F, 0x44, 0x44, 0x44, 0x40, 0x00},
	{0x00, 0x3C, 0x40, 0x40, 0x40, 0x3C, 0x00},
	{0x00, 0x0C, 0x30, 0x40, 0x30, 0x0C, 0x00},
	{0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00},
	{0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00},
	{0x00, 0x0C, 0x50, 0x50, 0x50, 0x3C, 0x00},
	{0x00, 0x44, 0x64, 0x54, 0x4C, 0x44, 0x00},
	{0x00, 0x08, 0x36, 0x41, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x41, 0x36, 0x08, 0x00},
	{0x00, 0x04, 0x02, 0x04, 0x08, 0x04, 0x00}
};

#ifdef ENABLE_fagciSPTM
const uint8_t gFont3x5[160][3] = {
	{0x00, 0x00, 0x00}, //  32 - space
	{0x00, 0x17, 0x00}, //  33 - exclam
	{0x03, 0x00, 0x03}, //  34 - quotedbl
	{0x1f, 0x0a, 0x1f}, //  35 - numbersign
	{0x0a, 0x1f, 0x05}, //  36 - dollar
	{0x09, 0x04, 0x12}, //  37 - percent
	{0x0f, 0x17, 0x1c}, //  38 - ampersand
	{0x00, 0x03, 0x00}, //  39 - quotesingle
	{0x00, 0x0e, 0x11}, //  40 - parenleft
	{0x11, 0x0e, 0x00}, //  41 - parenright
	{0x05, 0x02, 0x05}, //  42 - asterisk
	{0x04, 0x0e, 0x04}, //  43 - plus
	{0x10, 0x08, 0x00}, //  44 - comma
	{0x04, 0x04, 0x04}, //  45 - hyphen
	{0x00, 0x10, 0x00}, //  46 - period
	{0x18, 0x04, 0x03}, //  47 - slash
	{0x1e, 0x11, 0x0f}, //  48 - zero
	{0x02, 0x1f, 0x00}, //  49 - one
	{0x19, 0x15, 0x12}, //  50 - two
	{0x11, 0x15, 0x0a}, //  51 - three
	{0x07, 0x04, 0x1f}, //  52 - four
	{0x17, 0x15, 0x09}, //  53 - five
	{0x1e, 0x15, 0x1d}, //  54 - six
	{0x19, 0x05, 0x03}, //  55 - seven
	{0x1f, 0x15, 0x1f}, //  56 - eight
	{0x17, 0x15, 0x0f}, //  57 - nine
	{0x00, 0x0a, 0x00}, //  58 - colon
	{0x10, 0x0a, 0x00}, //  59 - semicolon
	{0x04, 0x0a, 0x11}, //  60 - less
	{0x0a, 0x0a, 0x0a}, //  61 - equal
	{0x11, 0x0a, 0x04}, //  62 - greater
	{0x01, 0x15, 0x03}, //  63 - question
	{0x0e, 0x15, 0x16}, //  64 - at
	{0x1e, 0x05, 0x1e}, //  65 - A
	{0x1f, 0x15, 0x0a}, //  66 - B
	{0x0e, 0x11, 0x11}, //  67 - C
	{0x1f, 0x11, 0x0e}, //  68 - D
	{0x1f, 0x15, 0x15}, //  69 - E
	{0x1f, 0x05, 0x05}, //  70 - F
	{0x0e, 0x15, 0x1d}, //  71 - G
	{0x1f, 0x04, 0x1f}, //  72 - H
	{0x11, 0x1f, 0x11}, //  73 - I
	{0x08, 0x10, 0x0f}, //  74 - J
	{0x1f, 0x04, 0x1b}, //  75 - K
	{0x1f, 0x10, 0x10}, //  76 - L
	{0x1f, 0x06, 0x1f}, //  77 - M
	{0x1f, 0x0e, 0x1f}, //  78 - N
	{0x0e, 0x11, 0x0e}, //  79 - O
	{0x1f, 0x05, 0x02}, //  80 - P
	{0x0e, 0x19, 0x1e}, //  81 - Q
	{0x1f, 0x0d, 0x16}, //  82 - R
	{0x12, 0x15, 0x09}, //  83 - S
	{0x01, 0x1f, 0x01}, //  84 - T
	{0x0f, 0x10, 0x1f}, //  85 - U
	{0x07, 0x18, 0x07}, //  86 - V
	{0x1f, 0x0c, 0x1f}, //  87 - W
	{0x1b, 0x04, 0x1b}, //  88 - X
	{0x03, 0x1c, 0x03}, //  89 - Y
	{0x19, 0x15, 0x13}, //  90 - Z
	{0x1f, 0x11, 0x11}, //  91 - bracketleft
	{0x02, 0x04, 0x08}, //  92 - backslash
	{0x11, 0x11, 0x1f}, //  93 - bracketright
	{0x02, 0x01, 0x02}, //  94 - asciicircum
	{0x10, 0x10, 0x10}, //  95 - underscore
	{0x01, 0x02, 0x00}, //  96 - grave
	{0x1a, 0x16, 0x1c}, //  97 - a
	{0x1f, 0x12, 0x0c}, //  98 - b
	{0x0c, 0x12, 0x12}, //  99 - c
	{0x0c, 0x12, 0x1f}, // 100 - d
	{0x0c, 0x1a, 0x16}, // 101 - e
	{0x04, 0x1e, 0x05}, // 102 - f
	{0x0c, 0x2a, 0x1e}, // 103 - g
	{0x1f, 0x02, 0x1c}, // 104 - h
	{0x00, 0x1d, 0x00}, // 105 - i
	{0x10, 0x20, 0x1d}, // 106 - j
	{0x1f, 0x0c, 0x12}, // 107 - k
	{0x11, 0x1f, 0x10}, // 108 - l
	{0x1e, 0x0e, 0x1e}, // 109 - m
	{0x1e, 0x02, 0x1c}, // 110 - n
	{0x0c, 0x12, 0x0c}, // 111 - o
	{0x3e, 0x12, 0x0c}, // 112 - p
	{0x0c, 0x12, 0x3e}, // 113 - q
	{0x1c, 0x02, 0x02}, // 114 - r
	{0x14, 0x1e, 0x0a}, // 115 - s
	{0x02, 0x1f, 0x12}, // 116 - t
	{0x0e, 0x10, 0x1e}, // 117 - u
	{0x0e, 0x18, 0x0e}, // 118 - v
	{0x1e, 0x1c, 0x1e}, // 119 - w
	{0x12, 0x0c, 0x12}, // 120 - x
	{0x06, 0x28, 0x1e}, // 121 - y
	{0x1a, 0x1e, 0x16}, // 122 - z
	{0x04, 0x1b, 0x11}, // 123 - braceleft
	{0x00, 0x1b, 0x00}, // 124 - bar
	{0x11, 0x1b, 0x04}, // 125 - braceright
	{0x02, 0x03, 0x01}, // 126 - asciitilde
	{0x00, 0x00, 0x00}, // 127 - empty
	{0x00, 0x00, 0x00}, // 128 - empty
	{0x00, 0x00, 0x00}, // 129 - empty
	{0x00, 0x00, 0x00}, // 130 - empty
	{0x00, 0x00, 0x00}, // 131 - empty
	{0x00, 0x00, 0x00}, // 132 - empty
	{0x00, 0x00, 0x00}, // 133 - empty
	{0x00, 0x00, 0x00}, // 134 - empty
	{0x00, 0x00, 0x00}, // 135 - empty
	{0x00, 0x00, 0x00}, // 136 - empty
	{0x00, 0x00, 0x00}, // 137 - empty
	{0x00, 0x00, 0x00}, // 138 - empty
	{0x00, 0x00, 0x00}, // 139 - empty
	{0x00, 0x00, 0x00}, // 140 - empty
	{0x00, 0x00, 0x00}, // 141 - empty
	{0x00, 0x00, 0x00}, // 142 - empty
	{0x00, 0x00, 0x00}, // 143 - empty
	{0x00, 0x00, 0x00}, // 144 - empty
	{0x00, 0x00, 0x00}, // 145 - empty
	{0x00, 0x00, 0x00}, // 146 - empty
	{0x00, 0x00, 0x00}, // 147 - empty
	{0x00, 0x00, 0x00}, // 148 - empty
	{0x00, 0x00, 0x00}, // 149 - empty
	{0x00, 0x00, 0x00}, // 150 - empty
	{0x00, 0x00, 0x00}, // 151 - empty
	{0x00, 0x00, 0x00}, // 152 - empty
	{0x00, 0x00, 0x00}, // 153 - empty
	{0x00, 0x00, 0x00}, // 154 - empty
	{0x00, 0x00, 0x00}, // 155 - empty
	{0x00, 0x00, 0x00}, // 156 - empty
	{0x00, 0x00, 0x00}, // 157 - empty
	{0x00, 0x00, 0x00}, // 158 - empty
	{0x00, 0x00, 0x00}, // 159 - empty
	{0x00, 0x00, 0x00}, // 160 - empty
	{0x00, 0x1d, 0x00}, // 161 - exclamdown
	{0x0e, 0x1b, 0x0a}, // 162 - cent
	{0x14, 0x1f, 0x15}, // 163 - sterling
	{0x15, 0x0e, 0x15}, // 164 - currency
	{0x0b, 0x1c, 0x0b}, // 165 - yen
	{0x00, 0x1b, 0x00}, // 166 - brokenbar
	{0x14, 0x1b, 0x05}, // 167 - section
	{0x01, 0x00, 0x01}, // 168 - dieresis
	{0x02, 0x05, 0x05}, // 169 - copyright
	{0x16, 0x15, 0x17}, // 170 - ordfeminine
	{0x02, 0x05, 0x00}, // 171 - guillemotleft
	{0x02, 0x02, 0x06}, // 172 - logicalnot
	{0x04, 0x04, 0x00}, // 173 - softhyphen
	{0x07, 0x03, 0x04}, // 174 - registered
	{0x01, 0x01, 0x01}, // 175 - macron
	{0x02, 0x05, 0x02}, // 176 - degree
	{0x12, 0x17, 0x12}, // 177 - plusminus
	{0x01, 0x07, 0x04}, // 178 - twosuperior
	{0x05, 0x07, 0x07}, // 179 - threesuperior
	{0x00, 0x02, 0x01}, // 180 - acute
	{0x1f, 0x08, 0x07}, // 181 - mu
	{0x02, 0x1d, 0x1f}, // 182 - paragraph
	{0x0e, 0x0e, 0x0e}, // 183 - periodcentered
	{0x10, 0x14, 0x08}, // 184 - cedilla
	{0x00, 0x07, 0x00}, // 185 - onesuperior
	{0x12, 0x15, 0x12}, // 186 - ordmasculine
	{0x00, 0x05, 0x02}, // 187 - guillemotright
	{0x03, 0x08, 0x18}, // 188 - onequarter
	{0x0b, 0x18, 0x10}, // 189 - onehalf
	{0x03, 0x0b, 0x18}, // 190 - threequarters
	{0x18, 0x15, 0x10}, // 191 - questiondown
};
#endif