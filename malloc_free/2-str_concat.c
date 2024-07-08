#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL for fails else return result
 */

char *str_concat(char *s1, char *s2)
{
	int i, length = 0, length2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	result = malloc(length * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[length2++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[length2++] = s2[i];

	return (result);
}

