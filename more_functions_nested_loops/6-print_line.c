#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of time to print
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n ; line++)
			_putchar('_');
	}
	_putchar('\n');
}
