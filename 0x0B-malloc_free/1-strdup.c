#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to a new string duplicate of str
 * @str: string to get duplicate form
 * @dest: pointer of new string duplicate
 * Return: NULL if str is NULL, on success return pointer to the string
 */
char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *dest = malloc(len);

	if (dest == NULL)
		return (NULL);

	memcpy(dest, str, len);

	return (dest);
}
