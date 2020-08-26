#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	DDRB = 0b01111111;
	DDRC = 0b00000000;
	DDRD = 0b00001111;
	int a[10];
	a[0]= 0x3f;
	a[1]= 0x06;
	a[2]= 0x5b;
	a[3]= 0x4f;
	a[4]= 0x66;
	a[5]= 0x6d;
	a[6]= 0x7d;
	a[7]= 0x07;
	a[8]= 0x7f;
	a[9]= 0x6f;
	while(1)
	{
		if (bit_is_set(PINC,0))
		{
			for (l=0;l<10;l++)
			{
				for (k=0;k<10;k++)
				{
					for (j=0;j<10;j++)
					{
						for (i=0;i<10;i++)
						{
							if (bit_is_clear(PINC,0))
							{
								break;
								return 0;
							}
							PORTD = 0b00001110;
							PORTB = a[i];
							_delay_ms(45);
							PORTD = 0b00001101;
							PORTB = a[j];
							_delay_ms(1);
							PORTD = 0b00001011;
							PORTB = a[k];
							_delay_ms(1);
							PORTD = 0b00000111;
							PORTB = a[l];
							_delay_ms(1);
						}	
						i=0;
					}
					j=0;
				}
				k=0;
			}
			l=0;
		}
		else
			PORTB = 0b00000000;
	}
	return 0;
}	