#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: always 0
 */


void more_numbers(void)
{
	int i = 0;
	int numbers;

	while (i < 10)
	{
		for (numbers = 0 ; numbers <= 14 ; numbers++)
		{
			if (numbers > 9)
		{
			_putchar((numbers / 10) + '0');
		}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
