/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Standard Marlin Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 *
 * Please note that using the high-res version takes 402Bytes of PROGMEM.
 */

//#define START_BMPHIGH

#if ENABLED(SHOW_BOOTSCREEN)
  #if ENABLED(START_BMPHIGH)
    #define START_BMPWIDTH      112
    #define START_BMPHEIGHT      38

    const unsigned char start_bmp[] PROGMEM = {
      0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF,
      0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
      0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF,
      0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x3F, 0xFF,
      0xC0, 0x0F, 0xC0, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x18, 0x00, 0x1F, 0xFF,
      0xC0, 0x3F, 0xE1, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x0F, 0xFF,
      0xC0, 0x7F, 0xF3, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x07, 0xFF,
      0xC0, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x03, 0xFF,
      0xC1, 0xF8, 0x7F, 0x87, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x01, 0xFF,
      0xC1, 0xF0, 0x3F, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0xFF,
      0xC1, 0xE0, 0x1E, 0x01, 0xE0, 0x1F, 0x00, 0x03, 0xE0, 0x78, 0x3C, 0x03, 0xF0, 0x7F,
      0xC1, 0xE0, 0x1E, 0x01, 0xE0, 0x7F, 0xC0, 0x0F, 0xF8, 0x78, 0x3C, 0x07, 0xFC, 0x3F,
      0xC1, 0xE0, 0x1E, 0x01, 0xE1, 0xFF, 0xE0, 0x1F, 0xFC, 0x78, 0x3C, 0x0F, 0xFE, 0x1F,
      0xC1, 0xE0, 0x1E, 0x01, 0xE3, 0xFF, 0xF0, 0x3F, 0xFE, 0x78, 0x3C, 0x1F, 0xFE, 0x0F,
      0xC1, 0xE0, 0x1E, 0x01, 0xE3, 0xF3, 0xF8, 0x3F, 0x3E, 0x78, 0x3C, 0x3F, 0x3F, 0x07,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0xE0, 0xFC, 0x7C, 0x1F, 0x78, 0x3C, 0x3E, 0x1F, 0x07,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0xC0, 0x7C, 0x7C, 0x0F, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0x80, 0x7C, 0x78, 0x0F, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0x80, 0x3C, 0x78, 0x00, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0x80, 0x3C, 0x78, 0x00, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0x80, 0x3C, 0x78, 0x00, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE7, 0xC0, 0x3C, 0x78, 0x00, 0x78, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE3, 0xE0, 0x3C, 0x78, 0x00, 0x7C, 0x3C, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE3, 0xFF, 0x3F, 0xF8, 0x00, 0x7F, 0xBC, 0x3C, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE1, 0xFF, 0x3F, 0xF8, 0x00, 0x3F, 0xBF, 0xFC, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE0, 0xFF, 0x3F, 0xF8, 0x00, 0x1F, 0xBF, 0xFC, 0x0F, 0x03,
      0xC1, 0xE0, 0x1E, 0x01, 0xE0, 0x7F, 0x3F, 0xF8, 0x00, 0x0F, 0xBF, 0xFC, 0x0F, 0x03,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
      0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E,
      0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
      0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
      0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80 };
  #else
    #define START_BMPWIDTH      56
    #define START_BMPHEIGHT     19

    const unsigned char start_bmp[] PROGMEM = {
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
      0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
      0x83, 0xCF, 0x00, 0x00, 0x0C, 0x30, 0x3F,
      0x87, 0xFF, 0x80, 0x00, 0x0C, 0x30, 0x1F,
      0x86, 0x79, 0x80, 0x00, 0x0C, 0x00, 0x0F,
      0x8C, 0x30, 0xC7, 0x83, 0x8C, 0x30, 0xE7,
      0x8C, 0x30, 0xCF, 0xC7, 0xCC, 0x31, 0xF3,
      0x8C, 0x30, 0xDC, 0xEC, 0xEC, 0x33, 0xB9,
      0x8C, 0x30, 0xD8, 0x6C, 0x6C, 0x33, 0x19,
      0x8C, 0x30, 0xD0, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xD8, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xDC, 0x6C, 0x0E, 0x3B, 0x19,
      0x8C, 0x30, 0xCF, 0x7C, 0x07, 0x9F, 0x19,
      0x8C, 0x30, 0xC7, 0x7C, 0x03, 0x8F, 0x19,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8 };
  #endif
#endif

// Here comes a compile-time operation to match the extruder symbols
// on the info screen to the set number of extruders in configuration.h
//
// When only one extruder is selected, the "1" on the symbol will not
// be displayed.

#define STATUS_SCREENWIDTH     115 // Width in pixels
#define STATUS_SCREENHEIGHT     19 // Height in pixels

#if HAS_TEMP_BED
  #if HOTENDS == 0
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 1
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 2
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #else
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
    };
  #endif // HOTENDS
#else
  #if HOTENDS == 0
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 1
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #elif HOTENDS == 2
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #else
    const unsigned char status_screen0_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    const unsigned char status_screen1_bmp[] PROGMEM = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
      0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
      0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
      0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
      0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
      0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
      0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
      0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
      0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
      0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
  #endif // HOTENDS
#endif // HAS_TEMP_BED

#if ENABLED(BABYSTEP_ZPROBE_GFX_OVERLAY) || ENABLED(MESH_EDIT_GFX_OVERLAY)

  const unsigned char cw_bmp[] PROGMEM = {
    0x03,0xF8,0x00, // 000000111111100000000000
    0x0F,0xF7,0x00, // 000011111111111000000000
    0x17,0x0F,0x00, // 000111100000111100000000
    0x38,0x07,0x00, // 001110000000011100000000
    0x38,0x03,0x80, // 001110000000001110000000
    0x70,0x03,0x80, // 011100000000001110000000
    0x70,0x0F,0xE0, // 011100000000111111100000
    0x70,0x07,0xC0, // 011100000000011111000000
    0x70,0x03,0x80, // 011100000000001110000000
    0x70,0x01,0x00, // 011100000000000100000000
    0x70,0x00,0x00, // 011100000000000000000000
    0x68,0x00,0x00, // 001110000000000000000000
    0x38,0x07,0x00, // 001110000000011100000000
    0x17,0x0F,0x00, // 000111100000111100000000
    0x0F,0xFE,0x00, // 000011111111111000000000
    0x03,0xF8,0x00  // 000000111111100000000000
  };

  const unsigned char ccw_bmp[] PROGMEM = {
    0x00,0xFE,0x00, // 000000001111111000000000
    0x03,0xFF,0x80, // 000000111111111110000000
    0x07,0x83,0xC0, // 000001111000001111000000
    0x0E,0x01,0xC0, // 000011100000000111000000
    0x0E,0x00,0xE0, // 000011100000000011100000
    0x1C,0x00,0xE0, // 000111000000000011100000
    0x7F,0x00,0xE0, // 011111110000000011100000
    0x3E,0x00,0xE0, // 001111100000000011100000
    0x1C,0x00,0xE0, // 000111000000000011100000
    0x08,0x00,0xE0, // 000010000000000011100000
    0x00,0x00,0xE0, // 000000000000000011100000
    0x00,0x01,0xC0, // 000000000000000111000000
    0x0E,0x01,0xC0, // 000011100000000111000000
    0x0F,0x07,0x80, // 000011110000011110000000
    0x07,0xFF,0x00, // 000001111111111100000000
    0x01,0xFC,0x00  // 000000011111110000000000
  };

  const unsigned char up_arrow_bmp[] PROGMEM = {
    0x04,0x00, // 000001000000
    0x0E,0x00, // 000011100000
    0x1F,0x00, // 000111110000
    0x3F,0x80, // 001111111000
    0x7F,0xC0, // 011111111100
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00  // 000011100000
  };

  const unsigned char down_arrow_bmp[] PROGMEM = {
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x0E,0x00, // 000011100000
    0x7F,0xC0, // 011111111100
    0x3F,0x80, // 001111111000
    0x1F,0x00, // 000111110000
    0x0E,0x00, // 000011100000
    0x04,0x00  // 000001000000
  };

  const unsigned char offset_bedline_bmp[] PROGMEM = {
    0xFF,0xFF,0xFF // 111111111111111111111111
  };

  const unsigned char nozzle_bmp[] PROGMEM = {
    0x7F,0x80, // 0111111110000000
    0xFF,0xC0, // 1111111111000000
    0xFF,0xC0, // 1111111111000000
    0xFF,0xC0, // 1111111111000000
    0x7F,0x80, // 0111111110000000
    0x7F,0x80, // 0111111110000000
    0xFF,0xC0, // 1111111111000000
    0xFF,0xC0, // 1111111111000000
    0xFF,0xC0, // 1111111111000000
    0x3F,0x00, // 0011111100000000
    0x1E,0x00, // 0001111000000000
    0x0C,0x00  // 0000110000000000
  };
#endif // BABYSTEP_ZPROBE_GFX_OVERLAY || MESH_EDIT_GFX_OVERLAY


