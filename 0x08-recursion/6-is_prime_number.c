#include "main.h"

/**
 * is_prime_number - checks if n is a prime number or not
 * @n: number to evaluate
 * Return: if n is a prime number return 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if n is a prime number or not
 * @n: number to evaluate
 * @i: iterator
 * Return: if n is a prime number return 1 else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}



