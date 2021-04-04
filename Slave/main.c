/*
 * Slave.c
 *
 * Created: 3/31/2021 5:20:48 PM
 * Author : PC
 */ 


#include "SPI.h"
#include "LED.h"


int main(void)
{   SPI_Init();
	 LED0_Init();
	LED2_Init();
	
Uint8t data=0;
    /* Replace with your application code */
    while (1) 
    {
	    
	    data=SPI_Receive();
	    switch (data){
		    case 5: 
		   LED0_ON();
		   _delay_ms(100);
		    break;
		    case 6: 
		    LED0_OFF();
		    _delay_ms(100);
		    break;
		    case 7:
		    LED2_ON();
		    _delay_ms(100);
		    break;
		    case 8:
		    LED2_OFF();
		    _delay_ms(100);
		    break;
	    }
	    data=0;
    }
    }

