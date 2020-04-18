#define F_CPU 16000000UL  // 16 MHz
#include <avr/io.h>
#include <util/delay.h>

int main (void) {
	// Port B pin 7 as output
	DDRD = 0xFF

	// Set on match, clear on BOTTOM
	TCCR0A = (3 << COM0A0) | (3 << WGM00); //i.e. mode=WGM3
	// Fast PWM, Fcpu speed
	TCCR0B = ((1 << CS00) | (0 << WGM02)); //i.e. mode=WGM3

	for (;;) {
		OCR0A++;
		_delay_ms(5);
		}
	}

