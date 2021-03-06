/*
Example for Alcohol Click

    Date          : Dec 2018.
    Author        : Nenad Filipovic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.3.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG structures, sets AN pin as input.
- Application Initialization - Initialization driver enables GPIO and ADC, also starts write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Alcohol Click board.
     Alcohol Click reads ADC value.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart changes for every 3 sec.


*/

#include "Click_Alcohol_types.h"
#include "Click_Alcohol_config.h"
#include "Click_Alcohol_adc.h"


uint16_t valueADC;
char logText[ 50 ];

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_INPUT );

    mikrobus_logInit( _LOG_USBUART, 9600 );

    Delay_100ms();
}

void applicationInit()
{
    // Alcohol click initialization
    alcohol_gpioDriverInit( (T_ALCOHOL_P)&_MIKROBUS1_GPIO );
    
    Delay_100ms();
    
    // ADC initialization
    alcohol_adcInit();
    
    Delay_100ms();
    
    mikrobus_logWrite( "-------------------", _LOG_LINE );
    mikrobus_logWrite( "   Alcohol Click   ", _LOG_LINE );
    mikrobus_logWrite( "-------------------", _LOG_LINE );
}

void applicationTask()
{
    valueADC = alcohol_readADC();

    Delay_100ms();

    WordToHex( valueADC, logText );
    mikrobus_logWrite( " ADC value: 0x", _LOG_TEXT );
    mikrobus_logWrite( logText, _LOG_LINE );
    mikrobus_logWrite( "-------------------", _LOG_LINE );

    Delay_1sec();
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}