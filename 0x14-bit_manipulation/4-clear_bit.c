#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_bin - prints binary representation of @n
 *
 * @num: is the decimal value
 *
 * Return: NULL
*/
void print_bin(unsigned long int num)
{
	if (num >> 1)
		print_bin(num >> 1);

	putc((num & 1) ? '1' : '0', stdout);
}

/**
 * clear_bit - sets the value of a bit to 1.
 *
 * @n: num
 * @ind: ind to change the value of bit to 1
 *
 * Return: 1 if it done OR -1 if it has an error
*/
int clear_bit(unsigned long int *n, unsigned int ind)
{
	unsigned long int mask = 1;
	

	/*if ind is greater */
	if (ind > INT_BITS)
		return (-1);

	mask = ~(mask << ind); /*create mask relative to the ind position*/

	*n = (*n & mask);


	return (1);
}
