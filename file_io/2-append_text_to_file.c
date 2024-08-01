#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to add at the end
 * Return: 1 for success, -1 for fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_description;
	ssize_t nb_write, lenght;

	if (filename == NULL)
		return (-1);

	file_description = open(filename, O_WRONLY | O_APPEND);
	if (file_description == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_description);
		return (1);
	}

	for (lenght = 0; text_content[lenght]; lenght++)

	nb_write = write(file_description, text_content, lenght);
	if (nb_write == -1)
	{
		close(file_description);
		return (-1);
	}
	close(file_description);
	return (1);
}
