#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: prints 10 times the numbers
 *
 * Return: 0 for success.
 */

void more_numbers(void)
{
	int i;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

