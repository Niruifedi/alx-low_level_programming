#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of byte
 * @s: the string to be scanned
 * @accept: string containing the character to match
 * Return: pointer to a character or null if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
