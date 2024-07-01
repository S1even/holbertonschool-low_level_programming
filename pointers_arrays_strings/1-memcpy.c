#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @n: bytes
 * @src: area
 * @dest: area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
