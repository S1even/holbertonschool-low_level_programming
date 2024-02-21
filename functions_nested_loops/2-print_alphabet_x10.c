#include "main.h"
/**
 * print_alphabet_x10 - prints ten times the alphabet
 *
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{
	int rep = 0;
	char a;

	while (rep++ <= 9)
	{
	for (a = 'a'; a <= 'z'; a++)

		_putchar(a);

	_putchar('\n');


}
