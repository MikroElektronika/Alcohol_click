#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    ADC_Init();
    ADC_Set_Input_Channel( _ADC_CHANNEL_4 );
}

uint16_t alcohol_readADC()
{
    uint16_t readADC;
    
    readADC = ADC_Read( 4 );
    
    return readADC;
}
