/*
 * SecondLab.c
 *
 * Created: 4/14/2019 6:31:48 PM
 * Author : Tung, Chris
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(void)
{
	DDRB = (1 << DDB5);

	while(1)
	{
		PORTB = (1 << DDB5);
		_delay_ms(500);
		PORTB = 0;
		_delay_ms(500);
	}
}

