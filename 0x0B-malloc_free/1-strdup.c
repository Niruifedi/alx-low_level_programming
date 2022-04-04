#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to a new string duplicate of str
 * @str: string to get duplicate form
 * Return: NULL if str is NULL, on success return pointer to the string
 */
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
