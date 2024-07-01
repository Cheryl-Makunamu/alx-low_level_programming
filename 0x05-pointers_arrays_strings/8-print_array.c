#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n of an array plus new line
 * @a: array printed
 * @n: no. of elements printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
		printf("\n");
}
