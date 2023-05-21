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

  versatile_encoder = new Versatile_RotaryEncoder(ENCODER_PIN_A, ENCODER_PIN_B, BUTTON_PIN);
  versatile_encoder->setHandleRotate(handleRotate);
  versatile_encoder->setHandlePress(handlePress);
}

void loop() {
  MemoryController memoryController = &MemoryController::getInstance();
  ProcessController processController = &ProcessController::getInstance();
  DisplayController displayController = &DisplayController::getInstance();
  processController.monitorProcess(); // TODO: check process parameters: endswitches and arc length control
  // ProcessController.run();
  // TODO: process user input
  if (versatile_encoder->ReadEncoder()) {
    // Do something here whenever an encoder/button action is read
  }
  displayController.updateDisplay(); // TODO: update display every XX ms
}

void handleRotate(int8_t rotation) {
  if (displayController.getAdjustMenu()) {
    displayController.adjustMenu();
  }
  else if (rotation > 0) {
    Serial.println("Right");
    displayController.nextWindow();
  } else if (rotation < 0) {
    Serial.println("Left");
    displayController.previousWindow();
  }
}
void handlePress() {
  displayController.buttonWindow();
}
