#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_bin - prints binary representation of @n
 *
 * @num: decimal value of it
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
 * get_bit - gets a bit fron an index specified
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1); 

	return (bit);
}
