// Copyright (C) 2018 Arno Ansems
// 
// This program is free software: you can redistribute it and/or modify 
// it under the terms of the GNU General Public License as published by 
// the Free Software Foundation, either version 3 of the License, or 
// (at your option) any later version. 
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
// GNU General Public License for more details. 
// 
// You should have received a copy of the GNU General Public License 
// along with this program.  If not, see http://www.gnu.org/licenses/ 
//
// EgaColor
//
// Covenient enumeration to translate the default EGA 4 bit palette into colors. 
//
#pragma once

typedef enum
{
    EgaBlack = 0,
    EgaBlue = 1,
    EgaGreen = 2,
    EgaCyan = 3,
    EgaRed = 4,
    EgaMagenta = 5,
    EgaBrown = 6,
    EgaLightGray = 7,
    EgaDarkGray = 8,
    EgaBrightBlue  = 9,
    EgaBrightGreen = 10,
    EgaBrightCyan = 11,
    EgaBrightRed = 12,
    EgaBrightMagenta = 13,
    EgaBrightYellow = 14,
    EgaBrightWhite = 15,
    EgaRange = 16
} egaColor;