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
	int length;
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
