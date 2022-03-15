#include "main.h"

/**
 * main - main block
 * Description: this program prints _putchar without using
 * the printf function.
 * Return: 0
 */

int main(void)
{
	int i;
	char msg[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');

	return 0;
}
