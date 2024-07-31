#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * @n: the number to flip
 * @m: the number to flip to
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lenght, number_bits, index;

	lenght = sizeof(n) * 8;

	number_bits = 0;
	index = 0;

	while (index <= lenght)
	{
		if ((n & 1) != (m & 1))
			number_bits++;

		n = n >> 1;
		m = m >> 1;

		index++;
	}

	return (number_bits);
}
