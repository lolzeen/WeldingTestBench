#ifndef MEASUREMENTUNITFORMAT_H
#define MEASUREMENTUNITFORMAT_H

struct MeasurementUnitFormat
{
    // const char speed[16] = "$$.$$ cm/min";
    // const char voltage[16] = "$$.$$ V";
    // const char minutes[16] = "$$ min";
    // const char seconds[16] = "$$ s";
    // const char dimensionless[16] = "$$";
    #define SPEED_UNIT " cm/min" // 20-21-3100-3110
    #define VOLTAGE_UNIT " V" // 3000-3010-3020
    #define SECONDS_UNIT " s" // 3040
    
};


#endif // MEASUREMENTUNITFORMAT_H