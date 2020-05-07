/*
 * TempADC.cpp
 *
 * Created: 02.05.2020 11:55:37
 * Author : timer
 */ 

#define get_bit(reg,bitnum) ((reg & (1<<bitnum))>>bitnum)
#include <avr/io.h>

int main(void)
{
	int ADCOut=0;
	char Temperature;

	DDRD=0xFF; // set pin 4 on port D as output to control the buzzer
	DDRA&=~(1<<0);

	ADMUX=0b11000000;

	ADCSRA=0b10000111;


	while(1)
	{
		ADCSRA|=(1<<6); //Set bit 6 n ADCSRA to start conversion
		while(get_bit(ADCSRA,6)==1) // poll bit 6 n ADCSRA till it is back to zero again
		{
		}
		ADCOut=ADCL|(ADCH<<8); // Save the ADC reading into an integer variable ADCOut. The ADCL must be read first as written here.
		Temperature=ADCOut/4; // Calculate Temperature
		PORTD = Temperature;
		//if (Temperature>=60) // Check if temperature is above 60 Celsius degrees
		//{
			//PORTD|=255; //turn on the buzzer
		//}
		//else
		//{
			//PORTD&=~255; //turn off the buzzer
		//}
	}
}
