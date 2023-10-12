#include "main.h"
#include <stdio.h>
/**
 * print_line - prints line n is positive
 * @n: check parameter
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');

}
