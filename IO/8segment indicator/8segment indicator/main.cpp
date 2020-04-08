/*
 * 8segment indicator.cpp
 *
 * Created: 08.04.2020 12:31:33
 * Author : timer
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#define delay_time 10

#define A 0b01100000

int Td = 0b11101000;
int Tb = 0b00100000;

int Bd = 0b00100000;
int Bb = 0b00000000;

int main(void)
{
    DDRB = 0xFF;
	DDRD = 0xFF;
	/* Replace with your application code */
    while (1) 
    { 
	
	PORTB = 4;
	PORTD = A;
	_delay_ms(delay_time);
	
	PORTB = 1+Tb;
	PORTD = Td;
	_delay_ms(delay_time);
	
	PORTB = 2;
	PORTD = Bd;
	_delay_ms(delay_time);
	
    }
}

