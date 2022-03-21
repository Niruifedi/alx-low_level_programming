#include "main.h"

/**
 * print_rev - prints string in reverse followed by a newline
 * @s: pointer to get string from
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
