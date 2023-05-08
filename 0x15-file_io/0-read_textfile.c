#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           
 *
 * Return: If the function fails or filename is NULL - 0.
 *         first_var/third_var - the actual number of bytes 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t first_var, second_var, third_var;
	char *space;

	if (filename == NULL)
		return (0);

	space = malloc(sizeof(char) * letters);
	if (space == NULL)
		return (0);

	first_var = open(filename, O_RDONLY);
	second_var = read(first_var, space, letters);
	third_var = write(STDOUT_FILENO, space, second_var);

	if (first_var == -1 || second_var == -1 || third_var == -1 || third_var != second_var)
	{
		free(space);
		return (0);
	}

	free(space);
	close(first_var);

	return (third_var);
}
