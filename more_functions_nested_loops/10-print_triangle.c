#include "main.h"

/**
 * print_triangle - print a triangle
 * @size : taille
 * print a triangle, followed by a new line
 */

void print_triangle(int size)
{
	int count;
	int space;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (space = size - count; space > 1 ; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space <= count; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
