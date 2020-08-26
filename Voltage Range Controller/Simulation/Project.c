#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRB = 0b00000000;
	DDRC = 0b00111111;
	DDRD = 0b00000010;