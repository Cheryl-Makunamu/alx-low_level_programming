#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle
 * @size: checks parameter
 * Return: void
*/
void print_triangle(int size)
{
	int in1, in2;

	if (size > 0)
	{
		for (in1 = 1 ; in1 <= size ; in1++)
		{
			for ((in2 = size - in1) ; in2 > 0 ; in2--)
			{
				putchar(' ');
			}
			for (in2 = 0 ; in2 < in1 ; in2++)
			{
				putchar('#');
			}

			if (in1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');

}
