#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRB = 0b11111111;
	DDRC = 0b00000000;
	/*DDRD = 0b00001100;*/
	while(1)
	{
		int i=0/*j=0*/;
		bool a[8]={0,0,0,0,0,0,0,0};
		if (bit_is_set(PINC,0))
		{
			for(i=0;i<8;i++)
			{
				a[i]=1;
				PORTB = 0ba[7]a[6]a[5]a[4]a[3]a[2]a[1]a[0];
				a[i]=0;
			}
		}
		else
		{
			PORTB = 0x00000000;
		}
	}
}