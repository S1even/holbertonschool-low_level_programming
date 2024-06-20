#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, h;
	int value;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 9; i++)
		{
			value = h * i;

			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (value < 10)
				{
					_putchar (' ');
				}
			}
			if (value >= 10)
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + 0);
			}
			else
			{
				_putchar(value + '0');
			}
		}
		_putchar('\n');
	}
}
