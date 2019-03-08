#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    ADC1_Init();
    ADC_Set_Input_Channel( _ADC_CHANNEL_3 );
}

uint32_t alcohol_readADC()
{
    uint32_t readADC;
    
    readADC = ADC1_Read( _ADC_CHANNEL_3 );
    
    return readADC;
}
