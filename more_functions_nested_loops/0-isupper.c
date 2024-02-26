#include "main.h"
/**
 * _isupper - checks if char is uppercase
 * c - character to be checked
 * @c parameter: checking c char
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
