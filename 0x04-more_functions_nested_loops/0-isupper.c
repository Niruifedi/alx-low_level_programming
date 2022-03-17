#include "main.h"
#include <ctype.h>

/**
 * main - using is upper function
 * _isupper: this fucntion checks for uppercase character and prints it out
 * @c: c is an ascii value
 * Return: 1 if c is uppercase.
 */

int main(void)
{
	int c;

	c = 'A';
	_putchar(char c, _isupper(c));

	c = 'a';
	_putchar(char c, _isupper(c));

	return (0);
}

