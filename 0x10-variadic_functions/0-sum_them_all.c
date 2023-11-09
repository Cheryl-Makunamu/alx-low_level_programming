#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - that returns the sum of all its parameters
 * @n: parameters
 * Return: caltulated additions
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int a, add = 0;

	va_start(al, n);
	for (a = 0 ; a < n ; a++)
		add += va_arg(al, int);
	va_end(al);
	return (add);
}
