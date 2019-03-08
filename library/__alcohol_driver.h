/*
    __alcohol_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __alcohol_driver.h
@brief    Alcohol Driver
@mainpage Alcohol Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ALCOHOL
@brief      Alcohol Click Driver
@{

| Global Library Prefix | **ALCOHOL** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Dec 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ALCOHOL_H_
#define _ALCOHOL_H_

/** 
 * @macro T_ALCOHOL_P
 * @brief Driver Abstract type 
 */
#define T_ALCOHOL_P    const uint8_t*

/** @defgroup ALCOHOL_COMPILE Compilation Config */              /** @{ */

//  #define   __ALCOHOL_DRV_SPI__                            /**<     @macro __ALCOHOL_DRV_SPI__  @brief SPI driver selector */
//  #define   __ALCOHOL_DRV_I2C__                            /**<     @macro __ALCOHOL_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ALCOHOL_DRV_UART__                           /**<     @macro __ALCOHOL_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ALCOHOL_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup ALCOHOL_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ALCOHOL_INIT Driver Initialization */              /** @{ */

#ifdef   __ALCOHOL_DRV_SPI__
void alcohol_spiDriverInit(T_ALCOHOL_P gpioObj, T_ALCOHOL_P spiObj);
#endif
#ifdef   __ALCOHOL_DRV_I2C__
void alcohol_i2cDriverInit(T_ALCOHOL_P gpioObj, T_ALCOHOL_P i2cObj, uint8_t slave);
#endif
#ifdef   __ALCOHOL_DRV_UART__
void alcohol_uartDriverInit(T_ALCOHOL_P gpioObj, T_ALCOHOL_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void alcohol_gpioDriverInit(T_ALCOHOL_P gpioObj);
                                                                       /** @} */
/** @defgroup ALCOHOL_FUNC Driver Functions */                   /** @{ */


/**
 * @brief Check the alcohol status function
 *
 * @return
 * - 0 : alcohol not detected
 * - 1 : alcohol is detected
 *
 * Function read states of AN pin and
 * will return 1 if a alcohol is detected
 * and 0 if alcohol is not detected.
 */
uint8_t alcohol_getState();






                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Alcohol_STM.c
    @example Click_Alcohol_TIVA.c
    @example Click_Alcohol_CEC.c
    @example Click_Alcohol_KINETIS.c
    @example Click_Alcohol_MSP.c
    @example Click_Alcohol_PIC.c
    @example Click_Alcohol_PIC32.c
    @example Click_Alcohol_DSPIC.c
    @example Click_Alcohol_AVR.c
    @example Click_Alcohol_FT90x.c
    @example Click_Alcohol_STM.mbas
    @example Click_Alcohol_TIVA.mbas
    @example Click_Alcohol_CEC.mbas
    @example Click_Alcohol_KINETIS.mbas
    @example Click_Alcohol_MSP.mbas
    @example Click_Alcohol_PIC.mbas
    @example Click_Alcohol_PIC32.mbas
    @example Click_Alcohol_DSPIC.mbas
    @example Click_Alcohol_AVR.mbas
    @example Click_Alcohol_FT90x.mbas
    @example Click_Alcohol_STM.mpas
    @example Click_Alcohol_TIVA.mpas
    @example Click_Alcohol_CEC.mpas
    @example Click_Alcohol_KINETIS.mpas
    @example Click_Alcohol_MSP.mpas
    @example Click_Alcohol_PIC.mpas
    @example Click_Alcohol_PIC32.mpas
    @example Click_Alcohol_DSPIC.mpas
    @example Click_Alcohol_AVR.mpas
    @example Click_Alcohol_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __alcohol_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */