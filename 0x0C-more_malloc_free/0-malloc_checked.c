#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates a memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
	int *j;

	j = malloc(sizeof(unsigned int) * b);

	if (j == NULL)
		exit(98);

	return (j);
}
