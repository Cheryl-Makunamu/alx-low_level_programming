#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *st;

	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		st = va_arg(list, char *);
		if (!st)
			st = "(nil)";
		if (!separator)
			printf("%s", st);
		else if (separator && x == 0)
			printf("%s", st);
		else
			printf("%s%s", separator, st);
	}

	printf("\n");

	va_end(list);
}

