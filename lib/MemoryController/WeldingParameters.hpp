#ifndef WELDINGPARAMETERS_H
#define WELDINGPARAMETERS_H

#include <Arduino.h>
#include "Parameter.hpp"

class WeldingParameters
{
    public:
        static WeldingParameters& getInstance() {
            static WeldingParameters instance;
            return instance;
        }

        Parameter<int16_t> getShortCircuitVoltage() {return shortCircuitVoltage;};
        Parameter<int16_t> getControlVoltage() {return controlVoltage;};
        Parameter<int16_t> getArcControllerGain() {return arcControllerGain;};
        Parameter<int16_t> getControlVoltageTolerance() {return controlVoltageTolerance;};
        Parameter<int16_t> getFeedForwardDelay() {return feedForwardDelay;};
        Parameter<int16_t> getFeedForwardSpeed() {return feedForwardSpeed;};
        Parameter<int16_t> getDiveSpeed() {return diveSpeed;};

        void setShortCircuitVoltage(Parameter<int16_t> newValue) {shortCircuitVoltage = newValue;};
        void setControlVoltage(Parameter<int16_t> newValue) {controlVoltage = newValue;};
        void setArcControllerGain(Parameter<int16_t> newValue) {arcControllerGain= newValue;};
        void setControlVoltageTolerance(Parameter<int16_t> newValue) {controlVoltageTolerance = newValue;};
        void setFeedForwardDelay(Parameter<int16_t> newValue) {feedForwardDelay = newValue;};
        void setFeedForwardSpeed(Parameter<int16_t> newValue) {feedForwardSpeed = newValue;};
        void setDiveSpeed(Parameter<int16_t> newValue) {diveSpeed = newValue;};

        String toString();

        WeldingParameters(WeldingParameters const&) = delete;
        void operator=(WeldingParameters const&) = delete;

    private:
        WeldingParameters() {};

        Parameter<int16_t> shortCircuitVoltage;
        Parameter<int16_t> controlVoltage;
        Parameter<int16_t> arcControllerGain;
        Parameter<int16_t> controlVoltageTolerance;
        Parameter<int16_t> feedForwardDelay;
        Parameter<int16_t> feedForwardSpeed;
        Parameter<int16_t> diveSpeed;
};


#endif //WELDINGPARAMETERS_H


