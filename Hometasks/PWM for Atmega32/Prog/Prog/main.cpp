#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	ASSR = 0x00;
	
	TCCR0= 0b01101001;
	
	TCNT0 = 0x00;
	OCR0 = 0x00;
	TIMSK = 0x00;
	
	DDRB = 0xFF;
	PORTB = 0x00;
	OCR0 = 0x00;
   while (1) 
    {
		while(OCR0<255)
		{
			OCR0 += 1;
			_delay_ms(2);
		}
		
		while(OCR0>0x00)
		{
			OCR0 -= 1;
			_delay_ms(2);
		}
    }
}

