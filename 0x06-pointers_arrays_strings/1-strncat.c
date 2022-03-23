#include "main.h"
#include "string.h"

/**
 * _strncat - concatenates and use most n bytes from src
 * src does not need to be null-terminated if it contains n
 * @dest:destination to append to
 * @src: string to append
 * @n: integer value to use.
 *
 * Return: pointer of dest.
 */
char *_strncat(char *dest, char *str, int n)
{
	strncat(dest, src, n);

	return (dest);
}
