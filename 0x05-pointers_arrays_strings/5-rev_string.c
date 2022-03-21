#include "main.h"

/**
 * rev_strings - this function reverses a string
 * @s: pointer to get string from
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char *start, *end, temp;

	start = s;
	end = s;

	for (i = 0; i < 10; i++)
		start++;

	for (i = 10; i >=0; i--)
		end--;

	temp = *start;
	*start = *end;
	*end = temp;
}
