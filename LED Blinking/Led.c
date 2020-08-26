#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRB &= ~(1<<0);
	DDRC |= 1<<0;
	DDRC |= 1<<1;
	DDRC |= 1<<2;
	DDRC |= 1<<3;
	DDRC |= 1<<4;
	DDRC |= 1<<5;
	while(1)
	{
		if(bit_is_set(PINB,0))
		{
			PORTC |= 1<<0;
			_delay_ms(100);
			
			PORTC &= ~(1<<0);
			_delay_ms(100);
			
			PORTC |= 1<<1;
			_delay_ms(100);
			
			PORTC &= ~(1<<1);
			_delay_ms(100);
			
			PORTC |= 1<<2;
			_delay_ms(100);
			
			PORTC &= ~(1<<2);
			_delay_ms(100);
			
			PORTC |= 1<<3;
			_delay_ms(100);
			
			PORTC &= ~(1<<3);
			_delay_ms(100);
			
			PORTC |= 1<<4;
			_delay_ms(100);
			
			PORTC &= ~(1<<4);
			_delay_ms(100);
			
			PORTC |= 1<<5;
			_delay_ms(100);
			
			
			PORTC &= ~(1<<5);
			_delay_ms(100);
			
			PORTC |= 1<<4;
			_delay_ms(100);
			
			PORTC &= ~(1<<4);
			_delay_ms(100);
			
			PORTC |= 1<<3;
			_delay_ms(100);
			
			PORTC &= ~(1<<3);
			_delay_ms(100);
			
			PORTC |= 1<<2;
			_delay_ms(100);
			
			PORTC &= ~(1<<2);
			_delay_ms(100);
			
			PORTC |= 1<<1;
			_delay_ms(100);
			
			PORTC &= ~(1<<1);
			_delay_ms(100);	
		}
		else
			PORTB &= ~(1<<1);	
		
	}
	return 0;
}