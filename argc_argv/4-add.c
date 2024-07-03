#include "stdlib.h"
#include "stdio.h"

/**
 * main - adds positive numbers
 * @argc: count the arguments
 * @argv: array of argument
 * Return: result of adds
 */

int main(int argc, char *argv[])
{
	int n, number, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (number = 1; argv[number][n]; number++)
		{
			if (argv[n][number] < '0' || argv[n][number] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
