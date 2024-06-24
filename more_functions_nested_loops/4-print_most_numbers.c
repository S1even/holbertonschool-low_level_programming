#include "main.h"

/**
 * print_most_numbers - function that print most numbers
 * Return: always 0
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
