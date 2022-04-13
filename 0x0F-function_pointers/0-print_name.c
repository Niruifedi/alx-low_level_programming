#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
