#include "main.h"
/**
 * _isdigit - check if char is a digit
 * c - character to be checked
 * @c parameter: cheking c char
 *
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
