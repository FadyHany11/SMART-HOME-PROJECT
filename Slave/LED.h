/*
* LED.h
*
* Created: 2/6/2021 5:09:41 PM
*  Author: karim
*/


#ifndef LED_H_
#define LED_H_

/*
1- Macros
2- User Define data types{Structure, Union, Enum}(If exist)
3- Global Variables (If exist)
4- Functions Prototypes
*/

#include "LED_CONFIG.h"

void LED0_Init(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_TGL(void);

void LED2_Init(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_TGL(void);
#endif /* LED_H_ */