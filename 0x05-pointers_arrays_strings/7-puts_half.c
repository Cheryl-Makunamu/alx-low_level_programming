#include "main.h"

/**
 * puts_half - function that prints half string plus new line
 * @str: string printed
 */
void puts_half(char *str)
{
	int leng, x, a;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	if (leng % 2 == 0)
	{
		for (a = leng / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	} else if (leng % 2)
	{
		for (x = (leng - 1) / 2; x < leng - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
