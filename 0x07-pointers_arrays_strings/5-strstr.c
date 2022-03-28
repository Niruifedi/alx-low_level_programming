#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the frist occurence of the substring
 * @needle: pointer to string containing character to match
 * @haystack: pointer to a string to be scanned
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && strchr(haystack, *needle))
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
