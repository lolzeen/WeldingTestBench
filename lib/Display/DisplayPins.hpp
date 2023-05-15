#ifndef DISPLAYPINS_H
#define DISPLAYPINS_H

#include <Arduino.h>

struct DisplayPins {
    uint8_t RS;
    uint8_t EN;
    uint8_t D4;
    uint8_t D5;
    uint8_t D6;
    uint8_t D7;
};

#endif // DISPLAYPINS_H