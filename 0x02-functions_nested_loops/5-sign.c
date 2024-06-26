#include "main.h"

/**
 * print_sign - function to print sign
 * @m: function parameter to check
 * Return: 1,0 or -1
 */

int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
