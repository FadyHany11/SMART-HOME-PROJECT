/*
* LED_CONFIG.h
*
* Created: 2/6/2021 5:09:33 PM
*  Author: karim
*/


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

/*
1- Macros
2- Renaming Port names
3- Renaming Pin names
4- Renaming status
*/

#include "CPU_CONFIGURATIONS.h"

#define LED0_PORT    DIO_PORTC
#define LED0_PIN     DIO_PIN2
#define LED0_OUTPUT  DIO_PIN_OUTPUT
#define LED0_HIGH    DIO_PIN_HIGH
#define LED0_LOW     DIO_PIN_LOW

#define LED1_PORT    DIO_PORTC
#define LED1_PIN     DIO_PIN7
#define LED1_OUTPUT  DIO_PIN_OUTPUT
#define LED1_HIGH    DIO_PIN_HIGH
#define LED1_LOW     DIO_PIN_LOW

#define LED2_PORT    DIO_PORTD
#define LED2_PIN     DIO_PIN3
#define LED2_OUTPUT  DIO_PIN_OUTPUT
#define LED2_HIGH    DIO_PIN_HIGH
#define LED2_LOW     DIO_PIN_LOW

#endif /* LED_CONFIG_H_ */