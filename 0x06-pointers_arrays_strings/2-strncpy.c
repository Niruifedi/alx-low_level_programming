#include "main.h"
#include "string.h"

/**
 * _strncpy - this function copies a number of string.
 * @dest: pointer where the content is to be copied to.
 * @src: this is the string to be copied.
 * @n: the amount of characters to copy from source.
 *
 * Return: pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
