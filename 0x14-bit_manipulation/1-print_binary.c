#include "main.h"
/**
 * print_binary - decimal to binary
 * @n: the decimal number
 * 
 * 
 * Return: NILL
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1;

    /*this allocates 63*/
	mask <<= 63;
	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		if ((n & mask) != 0)/*this checkes if it is not 0*/
		{
			_putchar('1');
			flag = 1;
		}

		mask = mask >> 1;
	}
}
