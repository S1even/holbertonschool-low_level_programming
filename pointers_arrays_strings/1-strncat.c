#include "main.h"

/**
 * _strncat - function that append a string to another one
 * @src: string to be append
 * @dest: first string
 * @n: number of elements to concatenante in
 * Return: pointer to the result string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
