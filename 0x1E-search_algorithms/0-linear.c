#include "search_algos.h"

/**
 * linear_search - function searchs for a value in an array
 * @array: pointer to the first element of array
 * @size: total size of the array
 * @value: value to check in the array
 * Return: value on success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		return (-1);
	}

	return (i);
}
