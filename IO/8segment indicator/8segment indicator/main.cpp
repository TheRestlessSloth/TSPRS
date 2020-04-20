/*
 * 8segment indicator.cpp
 *
 * Created: 08.04.2020 12:31:33
 * Author : timer
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#define delay_time 1000

int seq[10] = {0b10100000, 0b10111011, 0b01100010, 0b00101010, 0b00111001, 0b00101100, 0b00100100, 0b10111010, 0b00100000, 0b00101000};

//f-0, a-1, b-2, e-3, d-4, dot-5,c-6, g-7
int main(void)
{
    DDRB = 0xFF;
	DDRD = 0xFF;
	/* Replace with your application code */
    while (1) 
    { 
	
	PORTD = seq[0];
	PORTB = 1; 
	_delay_ms(delay_time);
	PORTD = seq[1];
	PORTB = 2;
	_delay_ms(delay_time);
	PORTD = seq[2];
	PORTB = 4;
	_delay_ms(delay_time);
	PORTD = seq[3];
	PORTB = 1;
	_delay_ms(delay_time);
	PORTD = seq[4];
	PORTB = 2;
	_delay_ms(delay_time);
	PORTD = seq[5];
	PORTB = 4;
	_delay_ms(delay_time);
	PORTD = seq[6];
	PORTB = 1;
	_delay_ms(delay_time);
	PORTD = seq[7];
	PORTB = 2;
	_delay_ms(delay_time);
	PORTD = seq[8];
	PORTB = 4;
	_delay_ms(delay_time);
	
    }
}

