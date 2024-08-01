#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: the name of the file
 * @text_content: the text content to write
 * Return: 1 for success, -1 for fails
 */

int create_file(const char *filename, char *text_content)
{
	int lenght, file_description = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (lenght = 0; text_content[lenght]; lenght++)


	file_description = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_description == -1)
		return (-1);

	write(file_description, text_content, lenght);

	return (1);
}
