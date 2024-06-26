#include "main.h"

/**
 * _strncpy - copy up to n characters from the string pointed
 * @dest: pointer to the destination array where the content is copied
 * @src: string to be copied
 * @n: numbers of character to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\n' ; a++)
	{
		dest[a] = src[a];
	}

	for (; n > a; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
