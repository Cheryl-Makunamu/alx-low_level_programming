#include "main.h"

/**
 * _isalpha - function that prints alpha in lower case
 * @d: function parameter to check
 * Return: 1 and 0
 */
int _isalpha(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}
