#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRB = 0b00000000;
	DDRC = 0b00111111;
	DDRD = 0b00000010;
	/*DDRB &= ~(1<<0);
	DDRC |= (1<<0);
	DDRC |= (1<<1);
	DDRC |= (1<<2);
	DDRC |= (1<<3);
	DDRC |= (1<<4);
	DDRC |= (1<<5);
	DDRD |= (1<<1);*/
	while(1)
	{
		if (bit_is_set(PINB,0))
		{
			/*for 0
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC |= (1<<4);
			PORTC |= (1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00111111;
			PORTD = 0b00000000;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 1
			PORTC &= ~(1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000110;
			PORTD = 0b00000000;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 2
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC &= ~(1<<2);
			PORTC |= (1<<3);
			PORTC |= (1<<4);
			PORTC &= ~(1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00011011;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 3
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00001111;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 4
			PORTC &= ~(1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC |= (1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00100110;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 5
			PORTC |= (1<<0);
			PORTC &= ~(1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC &= ~(1<<4);
			PORTC |= (1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00101101;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 6
			PORTC |= (1<<0);
			PORTC &= ~(1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC |= (1<<4);
			PORTC |= (1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00111101;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 7
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000111;
			PORTD = 0b00000000;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 8
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC |= (1<<4);
			PORTC |= (1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00111111;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
			
			/*for 9
			PORTC |= (1<<0);
			PORTC |= (1<<1);
			PORTC |= (1<<2);
			PORTC |= (1<<3);
			PORTC &= ~(1<<4);
			PORTC |= (1<<5);
			PORTD |= (1<<1);*/
			PORTC = 0b00101111;
			PORTD = 0b00000010;
			_delay_ms(300);
			
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(50);
		}
		else
			/*PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
			PORTC &= ~(1<<2);
			PORTC &= ~(1<<3);
			PORTC &= ~(1<<4);
			PORTC &= ~(1<<5);
			PORTD &= ~(1<<1);*/
			PORTC = 0b00000000;
			PORTD = 0b00000000;
			_delay_ms(150);
	}
	return 0;
}