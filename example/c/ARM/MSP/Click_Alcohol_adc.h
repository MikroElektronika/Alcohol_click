#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    ADC_Init();
    ADC_Set_Input_Channel( _ADC_CHANNEL_15 );
}

uint32_t alcohol_readADC()
{
    uint32_t readADC;
    
    readADC = ADC_Read( 15 );
    
    return readADC;
}
