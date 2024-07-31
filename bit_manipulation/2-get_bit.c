#include "main.h"

/**
 * get_bit - Return the value of a bit at given index
 * @n: the number
 * @index: the index
 * Return: value of bit at index or return -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int lenght;

	lenght = sizeof(n) * 8;

	if (index > lenght)
		return (-1);

	return ((n >> index) & 1);
}
