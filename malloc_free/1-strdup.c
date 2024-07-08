#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string give a parameter to be copied
 * Return: a new string, NULL for fails
 */

char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *duplicate;

	if (str == NULL)

		return (NULL);

	for (i = 0; i < str[i]; i++)

	duplicate = malloc(sizeof(char) * sizeof(length + 1));

	if (duplicate == NULL)

		return (NULL);

	for (i = 0; i < length; i++)

		duplicate[i] = str[i];

	duplicate[length] = '\0';
	return (duplicate);
}

