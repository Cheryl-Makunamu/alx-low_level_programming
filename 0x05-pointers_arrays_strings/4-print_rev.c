#include "main.h"

/**
 * print_rev - function to print string in reverse plus new line
 * @s: string
 */
void print_rev(char *s)
{
	int b, c, leng;

	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	leng = b;

	for (c = leng - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
