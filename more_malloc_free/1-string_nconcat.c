#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	result = malloc(sizeof(char) * (n + len + 1));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
		result[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		result[len++] = s2[i];

	result[len] = '\0';

	return (result);
}
