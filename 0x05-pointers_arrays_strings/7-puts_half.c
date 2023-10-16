#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: checks string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	 start_index = (length - 1) / 2 + 1;
	for (i = start_index ; i < length ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

