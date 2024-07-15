#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that print a name
 * @name: name of the person
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
