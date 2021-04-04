/*
* DIO_CONFIG.h
*
* Created: 2/12/2021 2:10:05 PM
*  Author: karim
*/


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

/*
1- Macros
2- Address of registers
3- Renaming Port names
4- Renaming Pin names
5- Renaming status
*/
#include "CPU_CONFIGURATIONS.h"
/*DIO Address registers*/
/*
#define PORTA (*(volatile Uint8t*)(0x3B))
#define DDRA  (*(volatile Uint8t*)(0x3A))
#define PINA  (*(volatile Uint8t*)(0x39))
#define PORTB (*(volatile Uint8t*)(0x38))
#define DDRB  (*(volatile Uint8t*)(0x37))
#define PINB  (*(volatile Uint8t*)(0x36))
#define PORTC (*(volatile Uint8t*)(0x35))
#define DDRC  (*(volatile Uint8t*)(0x34))
#define PINC  (*(volatile Uint8t*)(0x33))
#define PORTD (*(volatile Uint8t*)(0x32))
#define DDRD  (*(volatile Uint8t*)(0x31))
#define PIND  (*(volatile Uint8t*)(0x30))
*/
/*Renaming port names*/
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
/*Renaming pin names*/
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
/*Renaming pin status*/
#define DIO_PIN_INPUT   0
#define DIO_PIN_OUTPUT  1
#define DIO_PIN_LOW     0
#define DIO_PIN_HIGH    1
/*Renaming port status*/
#define DIO_PORT_INPUT  0x00 //0b00000000
#define DIO_PORT_OUTPUT 0xFF //0b11111111
#define DIO_PORT_LOW    0x00 //0b00000000
#define DIO_PORT_HIGH   0xFF //0b11111111
#endif /* DIO_CONFIG_H_ */