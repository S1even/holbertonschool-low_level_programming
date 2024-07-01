#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: find occurence of the substring
 * @haystack: the string
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
