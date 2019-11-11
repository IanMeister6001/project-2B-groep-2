/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
												INCLUDES.H

					Includes all relevant files for the rest of the software in
					a central place. Based on the original master includes file made by
					J.F. van der Bent.

					Author: Ian Baak, EV3A
					Date: 11-11-2019
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                      STANDARD LIBRARIES
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include  <stdarg.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <math.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                               SYSTEM
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "misc.h"
#include "stm32f4xx.h"
#include "stm32f4xx_conf.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"	//Systemlib for gpio
#include "stm32f4xx_usart.h" //Systemlib for uarts
#include "stm32f4xx_adc.h" //Systemlib for adc

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                            BOARD OUTPUTS
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "uart.h"
#include "lcd.h"
#include "delay.h"
#include "leds.h"
#include "buzzer.h"
#include "keys.h"

#define TRUE		1
#define FALSE		0
