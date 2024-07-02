#include "main.h"

/**
 * _print_rev_recursion - function that print a reverse string
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
