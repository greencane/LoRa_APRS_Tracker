#ifndef CUSTOM_CHARACTERS_H_
#define CUSTOM_CHARACTERS_H_

#include <Arduino.h>

const unsigned char runnerSymbol[] PROGMEM = {
    0b00000000, 0b11100000,
    0b00000000, 0b11100100,
    0b00000000, 0b01000100,
    0b00000000, 0b11100100,
    0b00000011, 0b11111000,
    0b00000010, 0b11100000,
    0b00000010, 0b11100000,
    0b00000010, 0b11100000,
    0b00000100, 0b11110000,
    0b00000000, 0b11110000,
    0b00000000, 0b11111000,
    0b00000001, 0b10001100,
    0b00000111, 0b00001100,
    0b00000110, 0b00000110
};  

static const unsigned char carSymbol[] PROGMEM = {   
    0b00000000, 0b00000000,
    0b00000011, 0b10000000,
    0b00000111, 0b11000000,
    0b00001111, 0b01000000,
    0b00011011, 0b01100000,
    0b00011111, 0b11111100,
    0b00111111, 0b11111110,
    0b00111111, 0b11111110,
    0b00111111, 0b11111110,
    0b00011111, 0b11111000,
    0b00001100, 0b00110000,
    0b00001100, 0b00110000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000 };

static const unsigned char bikeSymbol[] PROGMEM = {};



#endif