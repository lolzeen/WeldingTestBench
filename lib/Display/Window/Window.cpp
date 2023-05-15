#include "Window.hpp"

// void Window::rowBuilder(String newContent) {
//     newContent.toCharArray(firstRowContent, sizeof(firstRowContent));
// }
void Window::rowBuilder(uint8_t row) {
    if (row == FIRST_ROW) {
        switch (windowNumber)
        {
        case INIT_PROCESS:
            strcpy(firstRowContent, MES_INIT);
            break;
        case RETURN_PROCESS:
            strcpy(firstRowContent, MES_RETU);
            break;
        case EDIT_POS:
            strcpy(firstRowContent, MES_POS);
            break;
        case SYSTEM_CONFIG:
            strcpy(firstRowContent, MES_CONFIG);
            break;
        case POS_HORIZONTAL:
            strcpy(firstRowContent, MES_POS_HORI);
            break;
        case POS_VERTICAL:
            strcpy(firstRowContent, MES_POS_VERT);
            break;
        case WELDING_PARAMETERS_CONFIG:
            strcpy(firstRowContent, MES_WELDING_PARAM_CONFIG);
            break;
        case VELOCITY_PARAMETERS_CONFIG:
            strcpy(firstRowContent, MES_SPEED_PARAM_CONFIG);
            break;
        case SAVE_SETTINGS:
            strcpy(firstRowContent, MES_SAVE);
            break;
        case EDIT_POS_HORIZONTAL:
            strcpy(firstRowContent, MES_TRAVEL_SPEED);
            break;
        case EDIT_POS_VERTICAL:
            strcpy(firstRowContent, MES_FEED_SPEED);
            break;
        case :
            strcpy(firstRowContent, MES_ARC_SHORT_CIRCUIT_VOLTAGE);
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        case :
            strcpy(firstRowContent, );
            break;
        default:
            break;
        }
    } else if (row == SECOND_ROW)
    {
        /* code */
    }
    
}

void Window::rowBuilder(uint8_t row, int newContent) {
    // convert to char
    // does it need formatting??
        // apply formatting
    // save it on fisrtRowContent rowBuilder(char* newContent)
}

void Window::rowBuilder(uint8_t row, double newContent) {
    // convert to 2 ints
    // call rowBuilder(int newContentInteger, int newContentDecimal);

}

