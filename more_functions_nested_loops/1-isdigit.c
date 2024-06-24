#include "main.h"

/**
 * _isdigit - Check a digit
 * @c: The number to be checked
 * Return: 1 for a digit 0 for any else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
