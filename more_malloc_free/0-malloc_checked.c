#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory allocated
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
