#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of time to print
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n > 0)
	{
		for (diag = 0; diag < n ; diag++)
		{
			for (space = 0; space < diag; space++)
				_putchar (' ');
			_putchar('\\');
			if (diag == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
