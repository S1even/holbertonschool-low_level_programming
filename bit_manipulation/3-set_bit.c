#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked, or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, lenght;

	lenght = sizeof(*n) * 8;

	if (index > lenght)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);
}
