/*
 * Master.c
 *
 * Created: 3/31/2021 6:44:45 AM
 * Author : PC
 */ 


#include "UART.h"
#include "SPI.h"
#include "LCD.h"

int main(void)
{   Uint8t data=0;
	UART_Init();
	SPI_Init();
	LCD_Init();
	
	
    /* Replace with your application code */
    while (1) 
    {  
				data=UART_Receive();
				if(data=='1'){
					LCD_Clear();
					SPI_Transmit(5);
					LCD_Write_String("LED 1 : ON");
					
					
					
					
				}
				
				else if(data=='2'){
					SPI_Transmit(6);
					LCD_Clear();
					LCD_Write_String("LED 1 : OFF");
					
					
					
				}
				
				else if(data=='3'){
					SPI_Transmit(7);
					LCD_Clear();
					LCD_Write_String("LED 2 : ON");
					
					
				}
				
				else if(data=='4'){
					SPI_Transmit(8);
					LCD_Clear();
					LCD_Write_String("LED 2 : OFF");
					
					
					
				}
				data=0;
				
			}
			return 0;
		}

