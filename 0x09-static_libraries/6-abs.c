#include "main.h"

/**
 * _abs - finds absolute value in a number
 * @a: parameter to be checked
 * Return: a or -a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
