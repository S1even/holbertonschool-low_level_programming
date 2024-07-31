#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: binary number
 * Return: number converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, num = 1;
	int i = 0;


	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = i - 1; i >= 0; i--, num = num * 2)
		if (b[i] == '1')
			result = result + num;
	return (result);

}

