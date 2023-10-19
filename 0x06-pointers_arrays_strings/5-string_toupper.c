#include "main.h"

/**
 * string_toupper - changes all lower cases to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	char *i = n;

	while (*n)
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n  = *n - 'a' + 'A';
		}

		n++;
	}
	return (i);
}
