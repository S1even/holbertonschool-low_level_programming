#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x 10
 *
 * Description: print 10 times the alphabet
 *
 * Return: 0 for success.
 */

void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		 _putchar('\n');
	}
}
