#include "main.h"

/**
 * main - check the code
 * Description: this program prints out the alphabet in lowercase
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
