#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include "DisplayController.hpp"
#include "MemoryController.hpp"
#include "ProcessController.hpp"
#include "MotorController.hpp"
#include "Motor.hpp"
#include "EndSwitchController.hpp"
#include "EndSwitch.hpp"
#include "DriverPins.hpp"
#include "DisplayPins.hpp"
#include "InputPins.hpp"

/* ----- Driver Pins ----- */
// azul = EN, verde = DIR, amarelo = STEP
const int ENX = 23;
const int DIRX = 25;
const int STEPX = 5;
const int HORIZONTAL_ENDSWITCH_START = 20; 
const int HORIZONTAL_ENDSWITCH_END = 21;
const int OUTX = 33;
const int ENZ = 29;
const int DIRZ = 27;
const int STEPZ = 6;
const int VERTICAL_ENDSWITCH_START = 19;
const int VERTICAL_ENDSWITCH_END = 18;
const int OUTZ = 35;
DriverPins driver_x_pins = {DIRX, ENX, STEPX, OUTX};
DriverPins driver_z_pins = {DIRZ, ENZ, STEPZ, OUTZ};

/* ----- Display Pins ----- */
const uint8_t display_rs = 13;
const uint8_t display_en = 12;
const uint8_t display_d4 = 11;
const uint8_t display_d5 = 10;
const uint8_t display_d6 = 9;
const uint8_t display_d7 = 8;
DisplayPins display_pins = {display_rs, display_en, display_d4, display_d5, display_d6, display_d7};

/* ---- Input Pins ----- */
const uint8_t button = 31;
const uint8_t encoder_a = 3; // 3;
const uint8_t encoder_b = 2; // 25;
InputPins input_pins = {button, encoder_a, encoder_b};

/* ---- Driver Parameters ----- */
const uint16_t driver_params = 8000; // 8000 pulses per revolution
const uint8_t EIXO_X_ID = 3;
const uint8_t EIXO_Z_ID = 4; 
const uint8_t EIXO_X_DIS = 34; // cm
const uint8_t EIXO_Z_DIS = 33; // cm
const uint8_t CORRECT_HEIGHT = 1;

/* ---- MotorParameters  ----- */
const uint8_t ROLLBACK_DELAY = 200 // ms
// const uint8_t 

/* ---- DisplayParameters  ----- */
const uint8_t DISPLAY_REFRESH_RATE = 100 // ms
const uint8_t DISPLAY_REFRESH_RATE_DURING_PROCESS = 1000 // ms

/* ---- ProcessParameters  ----- */
const uint8_t ARC_VOLTAGE_SAMPLING_RATE = 10 // ms

/* ----   ----- */

#endif // MAIN_H