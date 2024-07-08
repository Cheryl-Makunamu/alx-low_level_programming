#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function to print sum of two diagonals
 * @a: square matrix we print sum
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int s, s1;

	s = 0;
	s1 = 0;

	for (x = 0; x < size; x++)
	{
		s += a[(size * x) + x];
		s1 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", s, s1);
}
