#include "main.h"

/**
 * _abs - a function that compute the absolute value of x
 * @x: integer input
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
