#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'e' && ch != 'q')

		putchar(ch);
	}

		putchar('\n');
		return (0);
}
