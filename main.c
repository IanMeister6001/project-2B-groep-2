//////////////////////////////////////////////////////////////////////////
// File: main.c
// Auteurs: groep 2, EV3A + EV5A
// Vak: Professionalisering 2B - project 2B
//////////////////////////////////////////////////////////////////////////

#include "main.h"
#include <includes.h>

char *programinfo = "\r\nPROJECT 2B, GROEP 2\r\n\r\n"; //Introbericht bij opstarten.

//Functie die de board-outputs aan of uitzet.
void InitBoard()
{
	DELAY_init();
	UART_init();
	UART3_init();
	LCD_init();
	BUZZER_init();
	LED_init();
	KEYS_init();
}

int main(void)
{
	InitBoard(); //Initialize board outputs.
	UART_puts(programinfo); //Print programinfo to uart.

	//Test of alle board outputs werken, kan weg in volgende code:
	UART_puts("\r\nHallo\r\n");
	LCD_puts(programinfo);
	//BUZZER_set(500);
	LED_put(170); //on, off, on, off, on, off...
	while(1)
	{
		//UART_putint(KEYS_read());

		UART3_putchar(UART3_get());
		UART3_putint(50);
		UART3_puts("\r\nHalloooo\r\n");

		DELAY_ms(500);
	}

	//Nothing comes beyond this point.
    while(1)
    {
    }
}
