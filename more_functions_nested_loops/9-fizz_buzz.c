#include <stdio.h>

/**
 * main - print number from 1 to 100
 * for multiple of 3 - print Fizz
 * for multiple of 5 - print Buzz
 * for muiltiple of both - print FizzBuzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
