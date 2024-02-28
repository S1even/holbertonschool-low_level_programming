#include "main.h"

/**
 * swap_int - entry point
 *
 * @a: integrer
 * @b: integrer
 *
 * Description: swaps the values of two integers.
 *
 * Return: 0 for success.
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
