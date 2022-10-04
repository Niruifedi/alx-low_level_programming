#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: numbers of element in the array
 * @value: value to search for in the array
 * Return: value on success
 */

int binary_search(int *array, size_t size, int value)
{
    size_t l = 0;
    size_t r = size - 1;
    size_t mid, tmp1, tmp2;

    
    if (array == NULL)
        return(-1);
    
    while (l < r)
    {
        tmp1 = l;
        tmp2 = r;

        printf("Searching in array: ");
        while (tmp1 < tmp2)
        {
            printf("%d, ", array[tmp1]);
            if (tmp1 < tmp2)
            {
                printf(",");
            }
            else
            printf("\n");
            tmp1++;
        }
        for (l = 0; l < size; l++)
        {
            printf("Searching in array: %ld\n", l);
            mid = (l + r) / 2;

            if (value == array[mid])
            {
                return (mid);
            }
            else if (value < array[mid])
            {
                r = mid - 1;
            }
            else if (value > array[mid])
            {
                l = mid + 1;
            }
        }
        
    }

    return (-1);
}
