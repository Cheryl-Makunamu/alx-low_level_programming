#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 *@s: input value
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
