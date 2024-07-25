#include "variadic_functions.h"

/**
 * sum_them_all - function that calculates the sum of arguments
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int s = 0;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
		s += va_arg(list, int);

	va_end(list);

	return (s);
}
