/*
* LCD.c
*
* Created: 2/13/2021 3:42:23 PM
*  Author: karim
*/

#include "LCD.h"

void LCD_Init(void)
{
	#if LCD_MODE == LCD_4BIT_MODE
	/*Define direction for control pins*/
	DIO_SetPin_Direction(LCD_CNTRL_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CNTRL_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CNTRL_PORT, LCD_EN, LCD_OUTPUT);
	/*Define direction for data pins*/
	DIO_SetPin_Direction(LCD_DATA_PORT, LCD_DTA4, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DATA_PORT, LCD_DTA5, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DATA_PORT, LCD_DTA6, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DATA_PORT, LCD_DTA7, LCD_OUTPUT);
	/*Define commands needed to choose 4Bit mode*/
	LCD_Write_Command(0x33);/*Define working in 4BIT mode*/
	LCD_Write_Command(0x32);/*Define working in 4BIT mode*/
	LCD_Write_Command(0x28);/*Use 4BIT mode*/
	LCD_Write_Command(0x02);/*Return home*/
	LCD_Write_Command(0x0C);/*Display ON, Cursor OFF*/
	LCD_Write_Command(0x01);/*Clear screen*/
	LCD_Write_Command(0x06);/*Increment cursor right*/
	#elif LCD_MODE == LCD_8BIT_MODE
	
	#else
	#warning "Error Mode, Please check"
	#endif
}
void LCD_Write_Command(Uint8t command)
{
	/*Register Select pin will select control register*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_RS, LCD_LOW);
	/*Read/Write pin will be write on LCD*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_RW, LCD_LOW);
	/*Be sure that enable is disabled*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Send high nipple of the command, without changing old PORTA pins(0-3)*/
	PORTA = (command & 0xF0) | (PORTA & 0x0F);
	/*Send High pulse for 1 millisecond*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Send low nipple of the command, without changing old PORTA pins(0-3)*/
	PORTA = (command << 4) | (PORTA & 0x0F);
	/*Send High pulse for 1 millisecond*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Wait controller to finish command*/
	_delay_ms(5);
}
void LCD_Write_Character(Uint8t character)
{
	/*Register Select pin will select data register*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_RS, LCD_HIGH);
	/*Read/Write pin will be write on LCD*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_RW, LCD_LOW);
	/*Be sure that enable is disabled*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Send high nipple of the command, without changing old PORTA pins(0-3)*/
	PORTA = (character & 0xF0) | (PORTA & 0x0F);
	/*Send High pulse for 1 millisecond*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Send low nipple of the command, without changing old PORTA pins(0-3)*/
	PORTA = (character << 4) | (PORTA & 0x0F);
	/*Send High pulse for 1 millisecond*/
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CNTRL_PORT, LCD_EN, LCD_LOW);
	/*Wait controller to finish command*/
	_delay_ms(5);
}
void LCD_Clear(void)
{
	LCD_Write_Command(0x01);
}
void LCD_Write_String(Uint8t* str)
{
	while(*str != '\0')
	{
		LCD_Write_Character(*str);
		_delay_ms(10);
		str++;
	}
}
void LCD_Write_Number(Uint32t number)
{
	Uint8t num[10];
	ltoa(number, (Uint8t*)num, 10);
	LCD_Write_String(num);
}