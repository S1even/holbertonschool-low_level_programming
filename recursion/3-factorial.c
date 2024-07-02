#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number to get the factorial
 * Return: -1 if n < 0, or return the factorial of n if n > 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));


}
