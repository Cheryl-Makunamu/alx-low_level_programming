#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int t;

	for (t = 0 ; t < 9 ; t++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				putchar((n / 10) + '0');
			}
			putchar((n % 10) + '0');
		}
		putchar('\n');
	}
}

