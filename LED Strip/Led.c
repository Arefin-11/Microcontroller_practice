#include<avr/io.h>
#include<util/delay.h>
int main (void)
{
	DDRB = 0b11111111;
	DDRC = 0b00000000;
	DDRD = 0b00001100;
	while (1)
	{
		if(bit_is_set(PINC,0))
		{
			PORTB = 0b00000001;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b00000011;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b00000111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b00001111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b00011111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b00111111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b01111111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			PORTB = 0b11111111;
			PORTD = 0b00000000;
			_delay_ms(50);
			
			
			PORTB = 0b11111111;
			PORTD = 0b00000100;
			_delay_ms(50);
			
			PORTB = 0b11111111;
			PORTD = 0b00001100;
			_delay_ms(50);
			
			PORTB = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(50);
		}
		else
		{	
			PORTB = 0b00000000;
			PORTD = 0b00000000;
		}	
	}
	return 0;
}