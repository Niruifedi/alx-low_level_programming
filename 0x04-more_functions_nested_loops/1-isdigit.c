#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit
 * Return: 0 if it isn't
 */

int _isdigit(int c)
{
	if ( c > '0' && c < '9')
		return (1);
	return (0);
}
