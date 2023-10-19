#include "main.h"

/**
 * reverse_array - reverse content in array integer
 * @a: an array
 * @n: the number of elements of array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (k = 0 ; k < n-- ; k++)
	{
		j = a[k];
		a[k] = a[n];
		a[n] = j;
	}
}

