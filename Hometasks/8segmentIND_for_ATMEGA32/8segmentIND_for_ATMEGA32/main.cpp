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
	PORTB = 1;
	
	while (1)
	{

		for(int i = 0; i<9; i++)
		{
			if(PORTB = 128)
				PORTB = 1;
			
			PORTD = seq[i];
			PORTB = PORTB << 1;
			
			_delay_ms(delay_time);

		}
	}
}
