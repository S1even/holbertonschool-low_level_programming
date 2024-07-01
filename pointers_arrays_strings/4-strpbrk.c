#include "main.h"

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: The pointer
 * @accept: It is accept string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	++s;
	}
	return (0);
}
