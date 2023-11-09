#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything
 * @format: list all arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *s, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'd':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'b':
					s = va_arg(list, char *);
					if (!s)
						s = "nil";
					printf("%s%s", sep, s);
					break;
				default:
					a++;
					continue;
			}
			sep = " , ";
			a++;
		}
	}
	va_end(list);
}
				
					

