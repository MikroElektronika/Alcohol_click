#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    TRISB = 0x08;
    LATB = 0;

    ADC1_Init();
}

uint32_t alcohol_readADC()
{
    uint32_t readADC;
    
    readADC = ADC1_Read( 8 );
    
    return readADC;
}
