#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    ADC_Init();
}

uint32_t alcohol_readADC()
{
    uint32_t readADC;
    
    readADC = ADC_Read( 7 );
    
    return readADC;
}

