/*
 * Lesson2.cpp
 *
 * Created: 04.04.2020 1:59:43
 * Author : timer
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF;
	TCCR0A = 0xFF;
    /* Replace with your application code */
    while (1) 
    {
		OCR0A = 33;
		_delay_ms(1000);
		OCR0A = 100;
		_delay_ms(1000);
		OCR0A = 255;
		_delay_ms(1000);
		OCR0A = 0;
		_delay_ms(1000);
    }
}

