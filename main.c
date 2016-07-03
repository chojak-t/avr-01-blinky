/*
 * main.c
 *
 *  Created on: 3 lip 2016
 *      Author: Tomasz Chojak
 */

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
	//PB1 as output
	DDRB |= (1<<PB1);

	while(1)
	{
		//toggle output
		PORTB ^= (1<<PB1);
		_delay_ms(500);
	}
}
