#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of array integer
 * @a: checks integer
 * @n: checks integer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	if (i < n - 1)
	{
		printf(", ");
	}
	printf("\n");
}

