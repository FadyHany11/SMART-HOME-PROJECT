/*
 * LCD.h
 *
 * Created: 2/13/2021 3:42:15 PM
 *  Author: karim
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "LCD_CONFIG.h"

void LCD_Init(void);
void LCD_Write_Command(Uint8t command);
void LCD_Write_Character(Uint8t character);

void LCD_Clear(void);
void LCD_Write_String(Uint8t* str);
void LCD_Write_Number(Uint32t number);




#endif /* LCD_H_ */