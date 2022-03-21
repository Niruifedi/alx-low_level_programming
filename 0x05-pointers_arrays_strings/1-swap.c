#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
