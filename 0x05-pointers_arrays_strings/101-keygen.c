#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 127;
		sum += c;
		putchar(c);
	}
	putchar(2773 - sum);
	return (0);
}
