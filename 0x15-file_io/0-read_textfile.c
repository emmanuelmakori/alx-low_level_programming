#include "main"

/**
 * read_textfile - a function that reads a text 
 *
 * @filename: is the data to read
 * @letters: num of letters 
 *
 * Return: 0 if it fails or number
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int data;
	ssize_t read_check, file_write;
	char *buffer_size;

	if (filename == NULL) /*check if data is available*/
		return (0);

	data = open(filename, O_RDONLY); /*open data*/

	if (data == -1)
		return (0);

	/*get the size of buffer_size*/
	buffer_size = malloc(sizeof(char) * letters);
	if (buffer_size == NULL)
	{
		free(buffer_size);
		return (0);
	}

	read_check = read(data, buffer_size, letters);
	if (read_check == -1) 
		return (0);

	file_write = write(STDOUT_FILENO, buffer_size, read_check); /*wrieout to file_write*/
	if (file_write == -1 || read_check != file_write) /*check for failed task*/
		return (0);

	free(buffer_size);

	close(data); 

	return (file_write);
}
