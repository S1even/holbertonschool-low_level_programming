#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: The value use to fill the memory
 * @s: Function parameter
 * @n: Function parameter
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
