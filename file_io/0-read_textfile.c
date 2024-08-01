#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: nime of the file
 * @letters: number of letters to print
 * Return: 0 if filename NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_description;
	ssize_t nb_read, nb_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_description = open(filename, O_RDONLY);
	if (file_description == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_description);
		return (0);
	}

	nb_read = read(file_description, buffer, letters);
	if (nb_read == -1)
	{
		free(buffer);
		close(file_description);
		return (0);
	}

	nb_write = write(STDOUT_FILENO, buffer, nb_read);
	if (nb_write == -1 || nb_write != nb_read)
	{
		free(buffer);
		close(file_description);
		return (0);
	}
	free(buffer);
	close(file_description);
	return (nb_write);
}
