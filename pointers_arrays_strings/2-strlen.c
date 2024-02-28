#include "main.h"

/**
 * _strlen - entry point
 *
 * @s : string
 *
 * Description : return the length of a string
 *
 * Return: 0 for success
 */

int _strlen(char *s)
{
	int len;
	int index;

	len = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		len++;
	}
	return (len);
}
