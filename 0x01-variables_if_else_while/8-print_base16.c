#include <stdio.h>

/**
 * main - prints out all the numbers of base
 * 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
