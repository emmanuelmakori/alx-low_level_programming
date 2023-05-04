#include "main.h"

/**
 * _atoi - converts the characters to integers
 *
 * @c: characters to convert
 *
 * Return: the converted integer which you have created
*/
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - returns the length of the string
 *
 * @str: get string 
 *
 * Return: the lenght of the string
*/
unsigned int _strlen(const char *str)
{
	unsigned int ind = 0;

	while (str[ind] != '\0')
		ind++;
	return (ind);
}

/**
 * binary_to_uint - this one changes the binary numers to unsinged int
 *
 * @b: string of binary
 *
 * Return: the number changed or 0
 *         when @b contains a character
 *         that is a binary or the
 *         @b is null
*/
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int result = 0, base2 = 1,  number = 0;

	/*if b is NULL return 0*/
	if (b == NULL)
		return (0);

	

	/*go through string*/
	for (ind = _strlen(b) - 1; ind >= 0; ind--)
	{
		number = _atoi(b[ind]); /*convert characters to integers*/

		

		/*if number != BINARY return 0*/
		if (number != 0 && number != 1)
			return (0);

		result += number * base2; /*enable debug to see it in action*/
		base2 *= 2;

		
	}

	return (result);

}
