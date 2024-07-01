#include "main.h"

/**
 * swap_int - function to swap values of two int
 * @a: points to first int
 * @b: points to second int
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
