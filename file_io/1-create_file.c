#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: the name of the file
 * @text_content: the text content to write
 * Return: 1 for success, -1 for fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;
	mode_t file_perm = S_IRUSR | S_IWUSR;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_perm);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_write = write(fd, text_content, len);

		if (bytes_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
