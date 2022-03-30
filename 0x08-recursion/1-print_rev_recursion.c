#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: variable to reverse string from
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
