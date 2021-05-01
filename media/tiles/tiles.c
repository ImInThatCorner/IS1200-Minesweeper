/*
Final Datateknik Project - Minesweeper
Project written by Tom�s Belmar da Costa
File written in February 2021
Last modified March 2021
*/

#include <stdint.h>
#include "tiles.h"

uint8_t mapEmpty[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
uint8_t mapFilled[8] = { 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F };
uint8_t map0[8] = {0x00, 0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00};
uint8_t map1[8] = {0x00, 0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00};
uint8_t map2[8] = {0x00, 0x00, 0x42, 0x61, 0x51, 0x49, 0x46, 0x00};
uint8_t map3[8] = {0x00, 0x00, 0x41, 0x49, 0x49, 0x49, 0x36, 0x00};
uint8_t map4[8] = {0x00, 0x00, 0x0C, 0x0A, 0x09, 0x7F, 0x08, 0x00};
uint8_t map5[8] = {0x00, 0x00, 0x4F, 0x49, 0x49, 0x49, 0x31, 0x00};
uint8_t map6[8] = {0x00, 0x00, 0x3E, 0x49, 0x49, 0x49, 0x30, 0x00};
uint8_t map7[8] = {0x00, 0x00, 0x01, 0x01, 0x79, 0x05, 0x03, 0x00};
uint8_t map8[8] = {0x00, 0x00, 0x36, 0x49, 0x49, 0x49, 0x36, 0x00};
uint8_t map9[8] = {0x00, 0x00, 0x06, 0x49, 0x49, 0x49, 0x3E, 0x00};
uint8_t mapBomb[8] = {0x00, 0x00, 0x38, 0x7D, 0x7E, 0x7C, 0x38, 0x00};
uint8_t mapFlag[8] = {0x00, 0x00, 0x7F, 0x06, 0x06, 0x0C, 0x0C, 0x00};
uint8_t mapPlayer[8] = {0x00, 0x7F, 0x63, 0x49, 0x5D, 0x49, 0x63, 0x7F};   // target
//uint8_t mapPlayer[8] = {0x00, 0x7F, 0x69, 0x49, 0x4F, 0x49, 0x69, 0x7F}; // large eyes
//uint8_t mapPlayer[8] = {0x00, 0x7F, 0x6F, 0x49, 0x4F, 0x49, 0x6F, 0x7F}; // small eyes