#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to add at the end
 * Return: 1 for success, -1 for fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_write = write(fd, text_content, len);

		if (bytes_write == -1)
		{
			close(-1);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
