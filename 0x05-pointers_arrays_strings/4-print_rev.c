#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: checks parameter string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int p;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (p = length ; p > 0 ; p--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}


