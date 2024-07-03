#include "stdio.h"
#include "stdlib.h"

/**
 * main - Multiplies two numbers
 * @argc: count the arguments
 * @argv: array of argument
 * Return: result of multiplies
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
