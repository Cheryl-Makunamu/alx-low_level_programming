#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: checks parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
