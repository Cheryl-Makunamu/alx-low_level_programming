#include "main.h"
#include <stdio.h>
/**
 * _puts - prints sring and newline
 * @str: string parameter
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}

	putchar('\n');
}
