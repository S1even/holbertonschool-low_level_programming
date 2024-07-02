#include "main.h"

/**
 * _strlen_recursion - function that return a length of the string
 * @s: the stringto be check
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
