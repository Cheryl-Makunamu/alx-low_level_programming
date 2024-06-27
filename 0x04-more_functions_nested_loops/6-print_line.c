#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times _ is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int t;

		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
