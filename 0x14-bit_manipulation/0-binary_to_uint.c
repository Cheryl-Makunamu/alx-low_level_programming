
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function to convert a binary no to an unsigned int
 * @b: char string
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, p;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (p = 1, t = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
			t += p;
	}

	return (t);
}

