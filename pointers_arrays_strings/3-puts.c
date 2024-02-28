#include "main.h"

/**
 * _puts - entry point
 *
 * @str: string
 *
 * Description: prints a string
 *
 * Return: 0 for success.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
