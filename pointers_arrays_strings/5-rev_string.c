#include "main.h"

/**
 * rev_string - entry point
 *
 * @s: sting
 *
 * Description: reverses a sting
 *
 * Return: 0 for success
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int temp;
	int j;

	while (s[len])
	{
		len++;
	}

	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
