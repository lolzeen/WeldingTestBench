#ifndef MEMORY_CONTROLLER_H
#define MEMORY_CONTROLLER_H

#include <Arduino.h>
#include <EEPROM.h>
#include "WeldingParameters.hpp"

class MemoryController
{
public:
    MemoryController();
    ~MemoryController();
    
    void updateWeldingParametersFromEeprom();
    void updateEepromFromWeldingParameters();

private:
    WeldingParameters weldingParameters;
};

#endif // MEMORY_CONTROLLER_H