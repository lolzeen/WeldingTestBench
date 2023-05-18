#include "main.hpp"

ISR(TIMER5_COMPA_vect) {
  ProcessController::readArcVoltage(); // arc voltage variable should be declared as volatile and static
  //TODO:  enable arc voltage reading
}

void setup() {
  Serial.begin(9600);
  MemoryController memoryController = &MemoryController::getInstance();
  memoryController.updateWeldingParametersFromEeprom();

  MotorController motorController = &MotorController::getInstance():
  motorController.setHorizontalAxisMotor(Motor(driver_x_pins, driver_params, EIXO_X_ID, EIXO_X_DIS, true));
  motorController.setVerticalAxismotor(Motor(driver_z_pins, driver_params, EIXO_Z_ID, EIXO_Z_DIS, true));

  EndSwitchController endSwitchController = &EndSwitchController::getInstance();
  endSwitchController.setHorizontalAxisStartPin(HORIZONTAL_ENDSWITCH_START);
  endSwitchController.setHorizontalAxisEndPin(HORIZONTAL_ENDSWITCH_END);
  endSwitchController.setVerticalAxisStartPin(VERTICAL_ENDSWITCH_START);
  endSwitchController.setVerticalAxisEndPin(VERTICAL_ENDSWITCH_END);

  ProcessController processController = &ProcessController::getInstance();
  processController.firstTimeSetup();

  DisplayController displayController = &DisplayController::getInstance();
  displayController.setRefreshRate(DISPLAY_REFRESH_RATE, DISPLAY_REFRESH_RATE_DURING_PROCESS);
  displayController.firstTimeSetup();
}

void loop() {
  MemoryController memoryController = &MemoryController::getInstance();
  ProcessController processController = &ProcessController::getInstance();
  DisplayController displayController = &DisplayController::getInstance();
  processController.monitorProcess(); // TODO: check process parameters: endswitches and arc length control
  // ProcessController.run();
  // TODO: process user input
  displayController.updateDisplay(); // TODO: update display every XX ms
}

