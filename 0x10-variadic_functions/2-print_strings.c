#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - that prints strings, followed by a new line
 * @separator: seperates the strings
 * @n: number of parameters
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int index;

	va_start(strings, n);
	for (index = 0 ; index < n ; index++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
