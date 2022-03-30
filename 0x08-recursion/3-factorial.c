#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given variable
 * Return: factorial number.
 */
int factorial(int n)
{
	int i, f = 1;

	if (n < 0)
	{
		return (-1);
	}

	for (i = 1; i <= n; i++)
		f = f * i;
	return (f);
}
