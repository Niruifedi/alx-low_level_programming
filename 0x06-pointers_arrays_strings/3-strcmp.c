#include "main.h"
#include "string.h"

/**
 * _strcmp - this function compares 2 strings.
 * @s1: string to be compared
 * @s2: string to be compared
 * @result: int variable to store comparison.
 *
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
