#include "main.h"

/**
 * factorial - function that returns factor of a number
 * @n: parameter to check
 *
 * Return: factorial of parameter
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
