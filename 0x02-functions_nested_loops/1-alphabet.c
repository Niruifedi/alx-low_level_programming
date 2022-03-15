#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char text = 'a';

	while (text <= 'z')
	{
		_putchar(text);
		text++;
	}

	_putchar('\n');
}
