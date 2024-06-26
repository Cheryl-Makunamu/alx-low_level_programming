#include "main.h"

/**
 * print_last_digit - function that print last digit
 * @i: parameter to be searched
 * Return: j
 */
int print_last_digit(int i)
{
	int i;

	k = i % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
