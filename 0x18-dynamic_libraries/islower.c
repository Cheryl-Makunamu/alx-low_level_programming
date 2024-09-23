#include "main.h"

/**
 * _islower - search for lower case
 * @c: parameter to be searched
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
