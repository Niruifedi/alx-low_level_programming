#include "main.h"
#include <stdio.h>

/**
 * main - the function prints numbers from 1 to 100
 * for multiple of three print Fizz instead of a  number
 * and for the multiples of five print Buzz
 * for numbers which are multipls of both three and five
 * print FizzBuzz.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d ", i);
		}
		else 
		{
			printf(" %d", i)
	}
	printf("\n");

	return (0);
}
