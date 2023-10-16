#include "main.h"

/**
 * swap_int - function that swaps value of integers
 *@a: check parameter
 *@b: check parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{

	int n = *a;

	*a = *b;
	*b = n;
}
