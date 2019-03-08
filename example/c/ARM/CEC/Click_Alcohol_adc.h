#include "Click_Alcohol_types.h"


void alcohol_adcInit()
{
    ADC1_Init();
    ADC_Set_Input_Channel( 0x01 );
}

uint32_t alcohol_readADC()
{
    uint32_t readADC;
    
    readADC = ADC1_Read(1);
    
    return readADC;
}
