#include "WeldingParameters.hpp"

String WeldingParameters::toString() {
    String str;
    str += "ArcShortVol.: " + (String)getShortCircuitVoltage();
    str += "\nWeldVol.: " + (String)getWeldingVoltage();
    str += "\nArcControlGain.: " + (String)getArcControllerGain();
    str += "\nVolTol.: " + (String)getVoltageTolerance();
    str += "\nDelay.: " + (String)getDelayInitTravel();
    str += "\nTravelSpeed.: " + (String)getTravelSpeed();
    str += "\nFeedSpeed.: " + (String)getFeedSpeed();
    return str;
}