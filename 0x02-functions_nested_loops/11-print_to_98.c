#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all naturall number from n to 98
 * user inputs's number prints to 98, regardless < 98 0r > 98
 * @n: number input
 * Return: Always 0 (success)
 */
voi print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while(n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
