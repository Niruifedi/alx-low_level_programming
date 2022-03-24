#include "main.h"

/**
 * reverse_array - fuction reverse the content of an array
 * @a: an array of integers
 * @n: size of elements of array.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n/2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
