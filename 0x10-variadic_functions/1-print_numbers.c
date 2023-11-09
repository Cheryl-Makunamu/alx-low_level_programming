#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers,followed by a new line
 * @separator: seperates the numbers
 * @n: no of integers passed
 * Return: zero
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int index;

	va_start(no, n);

	for (index = 0 ; index < n ; index++)
	{
		printf("%d", va_arg(no, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}

