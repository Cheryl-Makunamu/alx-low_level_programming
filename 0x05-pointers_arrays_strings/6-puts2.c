#include "main.h"

/**
 * puts2 - function to print one char out of 2 plus new line
 * @str: string to print
 */
void puts2(char *str)
{
	int leng, x;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	for (x = 0; x < leng; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
