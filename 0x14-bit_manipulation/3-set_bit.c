#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_bin - prints the binary of @n
 *
 * @num: this is the decimal value
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
 * set_bit - sets the value of a bit to 1 when given an ind
 *
 * @n: num
 * @ind: the ind you want the value of bit to 1
 *
 * Return: 1 if it worked OR -1 if it there is an error
*/
int set_bit(unsigned long int *n, unsigned int ind)
{
	unsigned long int mask = 1;
	
	if (ind > INT_BITS)
		return (-1);

	mask <<= ind; /*create mask which is relative to the ind*/

	*n = (*n | mask);

	return (1);
}
