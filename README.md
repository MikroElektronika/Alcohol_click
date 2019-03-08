![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Alcohol Click

---

- **CIC Prefix**  : ALCOHOL
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Dec 2018.

---

### Software Support

We provide a library for the Alcohol Click on our [LibStock](https://libstock.mikroe.com/projects/view/1025/alcohol-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control Alcohol Click board.
Alcohol click communicates with the target board via analog ( AN ) pin. 
This library contains drivers for read ADC value of MQ-3 sensor.

Key functions :

- ``` void alcohol_adcInit() ``` - Initialization ADC function
- ``` uint32_t alcohol_readADC() ``` - Read ADC function
- ``` uint8_t alcohol_getState() ``` - Check the detecting alcohol status function

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes GPIO and LOG structures, sets AN pin as input.
- Application Initialization - Initialization driver enables GPIO and ADC, also starts write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Alcohol Click board.
     Alcohol Click reads ADC value.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart changes for every 3 sec.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1025/alcohol-click-example) page.

Other mikroE Libraries used in the example:

- ADC


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
