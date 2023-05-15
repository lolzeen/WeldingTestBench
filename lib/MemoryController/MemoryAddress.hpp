#ifndef MEMORYADDRESSES_H
#define MEMORYADDRESSES_H

#include <Arduino.h>

enum class MemoryAddress : int {
    SHORT_CIRCUIT_VOLTAGE_ADDR=0,
    WELDING_VOLTAGE_ADDR=sizeof(int16_t),
    ARC_CONTROLLER_GAIN_ADDR=sizeof(int16_t)*2,
    VOLTAGE_TOLERANCE_ADDR=sizeof(int16_t)*3,
    DELAY_INIT_TRAVEL_ADDR=sizeof(int16_t)*4,
    FEED_SPEED_ADDR=sizeof(int16_t)*5,
    TRAVEL_SPEED_ADDR=sizeof(int16_t)*6,
    LAST
};

#endif // MEMORYADDRESSES_H