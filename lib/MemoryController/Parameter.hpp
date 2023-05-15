#ifndef PARAMETER_H
#define PARAMETER_H

#include <Arduino.h>
#include "MemoryAddress.hpp"

template <typename T>
struct Parameter
{
    MemoryAddress identifier;
    T value;
};

template struct Parameter<int16_t>; // TODO: verify sintax
#endif // PARAMETER_H