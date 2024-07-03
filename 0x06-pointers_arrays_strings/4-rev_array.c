#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: reversed array
 * @n: no. of elements in array
 */
void reverse_array(int *a, int n)
{
	int b, c, t;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		t = a[b];
		a[b] = a[c];
		a[c--] = t;
	}
}
