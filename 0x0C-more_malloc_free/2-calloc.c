#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory in blocks and size of each blocks
 * @nmemb: size of block
 * @size: size of element of each block
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) + 0;

	return ((void *)ptr);
}
