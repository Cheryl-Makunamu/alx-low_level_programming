#include "main.h"

/**
 * rot13 - enclodes a string using rot13
 * @str: input value
 * Return: returns str.
 */
char *rot13(char *str)
{
	char *j = str;
	int i = 0;

	while (str[1])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			char base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';
				str[i] = ((str[i] - base + 13) % 26) + base;
		}
		str++;
	}

	return (j);
}
