#include "main.h"
/**
 * _islower - checks if char is lowercase
 * c - character to be checked
 * @c parameter: checking c char
 *
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
