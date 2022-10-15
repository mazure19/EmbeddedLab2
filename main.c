#include <msp430.h> 


/**
 * main.c
 */

int sum(int s1, int s2);

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	int a = 0b1001100111001011;
	int b = 0b1101000110001110;

	int c = sum(a,b);

	while(1);

	return 0;
}

int sum(int s1, int s2)
{
    return s1+s2;
}

