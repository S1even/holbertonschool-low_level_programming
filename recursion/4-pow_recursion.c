#include "main.h"

/**
 * _pow_recursion - that return the value of x raised to the power of y
 * @x: the number to be raised
 * @y: the power number
 * Return: if y < 0 return -1, else the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (_pow_recursion(x, y - 1) * x);
}
