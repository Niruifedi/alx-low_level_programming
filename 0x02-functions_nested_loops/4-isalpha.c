#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
