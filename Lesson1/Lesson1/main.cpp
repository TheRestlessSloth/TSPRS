/*
 * Lesson1.cpp
 *
 * Created: 03.04.2020 23:37:18
 * Author : timer
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
    DDRD = 0xFF;
	int i = 0;
	while (1) 
    {
		PORTD = 0b00000100;
		_delay_ms(3000);
		
		PORTD = 0b00010000;
		_delay_ms(500);
		
		PORTD = 0b01000000;
		_delay_ms(3000);
		
		while (i<4)
			{
				PORTD = 0;
				_delay_ms(300);
				
				PORTD = 0b01000000;
				_delay_ms(300);
				i++;
			}
		i = 0;
		
		PORTD = 0b00010000;
		_delay_ms(500);
		
		
    }
}

/*
	PORTD = 0xFF;
	_delay_ms(1000);
	PORTD = 0x00;
	_delay_ms(1000);
*/

/*
while(PORTD <= 0b01000000)
{
	PORTD <<= 1;
	_delay_ms(300);
}

while(PORTD>= 0b00000100)
{
	PORTD >>= 1;
	_delay_ms(300);
}
*/

/*
//if (PINC & 0b00000001)
//{
//PORTD >>= 1;
//_delay_ms(1000);
//}
//
//else if (PINC & 0b00000010)
//{
//PORTD <<= 1;
//_delay_ms(1000);
//}
//
//else {}
*/

/*
//DDRD = 0xFF; //???????? ??? ???? ????? D ?? ?????
//DDRC = 0x00; //???????? ??? ???? ????? ? ?? ????
//
//PORTD = 0b00100000; //????????? ????????? (??????? PORT?? ?????????? ?????????? ?????? ?????? ?? ????????? ????????)
////? ???? ?????? ?????????? ??????? ???????? ?? ??? ? ??????? ???? (????????: ? ?????? 0b01000101 ????? ????????? ???? 0, 2 ? 6)
*/

