#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	int i=0;
	DDRB = 0b01111111;
	DDRC = 0b00000000;
	DDRD = 0b00000011;
	int a[10];
	a[0]= 0b00111111;
	a[1]= 0b00000110;
	a[2]= 0b01011011;
	a[3]= 0b01001111;
	a[4]= 0b01100110;
	a[5]= 0b01101101;
	a[6]= 0b01111101;
	a[7]= 0b00000111;
	a[8]= 0b01111111;
	a[9]= 0b01101111;
	while(1)
	{
		if(bit_is_set(PINC,0))
		{
			for (i=0;i<10;i++)
			{
				PORTD = 0b00000010;
				PORTB = a[i];
				_delay_ms(150);
				PORTD = 0b00000001;
			
			//for 0
			PORTB = 0b00111111;
			_delay_ms(200);
			//for 1
			PORTB = 0b00000110;
			_delay_ms(200);
			//for 2
			PORTB = 0b01011011;
			_delay_ms(200);
			//for 3
			PORTB = 0b01001111;
			_delay_ms(200);
			//for 4
			PORTB = 0b01100110;
			_delay_ms(200);
			//for 5
			PORTB = 0b01101101;
			_delay_ms(200);
			//for 6 
			PORTB = 0b01111101;
			_delay_ms(200);
			//for 7
			PORTB = 0b00000111;
			_delay_ms(200);
			//for 8
			PORTB = 0b01111111;
			_delay_ms(200);
			//for 9
			PORTB = 0b01101111;
			_delay_ms(200);
			}
		}
		else
			PORTB = 0b00000000;
	}
	return 0;
}