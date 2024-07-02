#include "main.h"

/**
 * divisible - checks if a number is divisible
 * @n: the number to be checked
 * @d: the divisor
 * Return:	0 if the number is divisible
 *		1 if the number is not divisible
 */

int divisible(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == (n / 2))
		return (1);
	return (divisible(n, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 * Return:	0 if the number is not prime
 *		1 if the number is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisible(n, 2));
}
