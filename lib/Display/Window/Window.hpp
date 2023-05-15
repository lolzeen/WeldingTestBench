#ifndef WINDOW_H
#define WINDOW_H

#include <Arduino.h>
#include "MeasurementUnitFormat.hpp"
#include "StaticWindowContent.hpp"
#include "WindowName.hpp"

/*
attributes: 
- firstRowContent: char[16]
- secondRowContent: char[16]
- windowNumber: uint8_t
methods:
+ setFirstRowContent(char*):  void
+ setSecondRowContent(char*): void
+ getFirstRowContent(): char*  
+ getSecondRowContent(): char*
+ getWindowNumber(): uint8_t
*/

class Window {
public:
    Window(uint8_t windowNum) : windowNumber(windowNum) {};
    Window(uint8_t windowNum, char* formatSpec) : windowNumber(windowNum), firstRowFormatSpecifier(formatSpec) {};

    char* getFirstRowContent() {return firstRowContent;}
    char* getSecondRowContent() {return secondRowContent;};
    /**
     * @brief set content based on window number.
     * 
     */
    void setFirstRowContent() {rowBuilder(FIRST_ROW);}
    /**
     * @brief set content based on window number.
     * 
     */
    void setSecondRowContent() {rowBuilder(SECOND_ROW);}
    /**
     * @brief used in order to set dynamic content (e.g.: sensor reading).
     * 
     */
    void setFirstRowContent(int newContent) {rowBuilder(FIRST_ROW, newContent);}
    void setFirstRowContent(double newContent) {rowBuilder(FIRST_ROW, newContent);}
    /**
     * @brief used in order to set dynamic content (e.g.: sensor reading).
     * 
     */
    void setSecondRowContent(int newContent) {rowBuilder(SECOND_ROW, newContent);}
    void setSecondRowContent(double newContent) {rowBuilder(SECOND_ROW, newContent);}
    uint8_t getWindowNumber() const {return windowNumber;};
    
private:
    static const uint8_t DISPLAY_ROW_SIZE = 16;
    char firstRowContent[DISPLAY_ROW_SIZE];
    char secondRowContent[DISPLAY_ROW_SIZE];
    const char* firstRowFormatSpecifier;
    const uint8_t windowNumber;
    const uint8_t FIRST_ROW = 1;
    const uint8_t SECOND_ROW = 2;

    // void firstRowBuilder(String newContent);
    void rowBuilder(uint8_t row);
    void rowBuilder(uint8_t row, int newContent);
    void rowBuilder(uint8_t row, double newContent);
};

#endif // WINDOW_H