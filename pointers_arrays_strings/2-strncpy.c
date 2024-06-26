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

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
