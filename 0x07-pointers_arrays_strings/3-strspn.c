#include "main.h"
#include <string.h>

/**
 * _strspn - function thaty gets the lenght of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the list of characters to match
 * Return: int from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
