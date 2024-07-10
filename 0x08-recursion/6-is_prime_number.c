#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function to check if an int is a prime number
 * @n: parameter to check
 *
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function to check if a number is prime
 * @n: parameter
 * @i: iterator
 *
 * Return: 1 if true , 0 if false
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
