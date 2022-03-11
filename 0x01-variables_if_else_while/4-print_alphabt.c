#include <stdio.h>
/**
 * main - mian block
 * Description: print alphabets in 
 * lowercase and uppercase with 
 * the exception of 'q' and 'e'.
 * Return: 0
 */
int main (void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);

		}

		c++;
	}

	putchar ('\n');

	return (0);
}
