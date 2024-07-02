#include "main.h"

/**
 * find_sqrt - finds square root of @num
 * @num: int
 * @root: root
 * Return: if num has natural square root, the sqrt,
 * if no have natural sqrt: -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number of return sqrt
 * Return: if n has natural sqrt, if no: -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
