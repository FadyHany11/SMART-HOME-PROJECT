/*
* DIO.h
*
* Created: 2/12/2021 2:10:13 PM
*  Author: karim
*/


#ifndef DIO_H_
#define DIO_H_
/*
1- Macros
2- User Define data types{Structure, Union, Enum}(If exist)
3- Global Variables (If exist)
4- Functions Prototypes
*/
#include "DIO_CONFIG.h"
/*Pin state*/
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t status);
void DIO_TogglPin(Uint8t port, Uint8t pin);
Uint8t DIO_ReadPin_Value(Uint8t port, Uint8t pin);
/*Port state*/
void DIO_SetPort_Direction(Uint8t port, Uint8t direction);
void DIO_SetPort_Value(Uint8t port, Uint8t status);
void DIO_TogglPort(Uint8t port);
Uint8t DIO_ReadPort_Value(Uint8t port);
/*Activate internal pull up*/
void DIO_SetPullUp(Uint8t port, Uint8t pin);


#endif /* DIO_H_ */