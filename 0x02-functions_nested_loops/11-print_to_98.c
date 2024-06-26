#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print numbers fron n to 98
 * @n: number to start with
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			printf("%d", a);
			if (a != 98)
				 printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);

}
