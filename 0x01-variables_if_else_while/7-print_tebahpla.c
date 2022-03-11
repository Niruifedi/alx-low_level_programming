#include <stdio.h>

/**
 * main - main block
 * Description: prints out the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
