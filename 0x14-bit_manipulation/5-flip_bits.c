#include "main.h"

/**
 * print_bin - prints binary representation of @n
 *
 * @numb: this is the decimal value
 *
 * Return: NULL
*/
void print_bin(unsigned long int numb)
{
	if (numb >> 1)
		print_bin(numb >> 1);

	putc((numb & 1) ? '1' : '0', stdout);
}

/**
 * flip_bits - returns the numb of bits you
 *             would need to flip to get from one numb to
 *             another
 *
 * @n: the normal decimal number
 * @m: the diffrent decimal numb
 *
 * Return: numb of bits to flip to get @m from @n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int new_bits = 0;
	unsigned long int new;

	
	new = n ^ m;

	/*keep shifting*/
	do {
		

		new_bits += (new & 1);
		new >>= 1;

		
	} while (new > 0);

	return (new_bits);
}
