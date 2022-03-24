#include "main.h"

/**
 * cap_string - captalize strings
 * @str: variablr srting to capitalize
 *
 * Return: value of str
 */
char *cap_string(char *str)
{
	int a = 0;
	int cspc = 13;
	char spc[] = {' ', 't', '\n', ';', '.', '!', '?', '"', '(', ')','{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			i++;
		}

		a++;
	}

	return (str);
}
