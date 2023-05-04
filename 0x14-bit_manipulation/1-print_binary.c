#include "main.h"


/**
 * print_binary - a function that changes decimal numbers to binary
 *
 * @n: decimal number to change
 *
 * Return: NULL
*/
void print_binary(unsigned long int n)
{
	int len;
	unsigned long int mask = 1;

	len = _length(n);

	if (len > 0) /*create mask from len of number*/
		mask <<= len; /*move the mask to the left by len*/
	

	while (mask > 0)
	{
		
		if (n & mask) 
			_putchar('1');
		else 
			_putchar('0');

		mask >>= 1; 

		
	}
}
