#include "main.h"
#include "string.h"

/**
 * _strcat() - this function appends two strings together
 * overwriting the null terminate (\0) of dest.
 * @dest: destination string to append to.
 * @src: string to append.
 * Return: Dest pointer.
 */
char *_strcat(char *dest, char *src)
{
	strcat (dest, src);

	return (dest);
}
