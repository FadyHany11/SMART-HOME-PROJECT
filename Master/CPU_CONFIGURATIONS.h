/*
* CPU_CONFIGURATIONS.h
*
* Created: 2/6/2021 2:39:29 PM
*  Author: karim
*/


#ifndef CPU_CONFIGURATIONS_H_
#define CPU_CONFIGURATIONS_H_

#undef F_CPU                 /*Neglect internal oscillator*/
#define F_CPU 16000000       /*Define external oscillator*/
#include <avr/io.h>          /*Predefined Library - Define input and output*/
#include <util/delay.h>      /*Predefined Library - Define delay function*/
#include <avr/interrupt.h>   /*Predefined Library - Define interrupts vectors*/
#include "BIT_MATH.h"        /*User Defined Library - Bit functions*/
#include "STD_TYPES.h"       /*User Defined Library - Standard Types*/
#include "DIO.h"

#endif /* CPU_CONFIGURATIONS_H_ */