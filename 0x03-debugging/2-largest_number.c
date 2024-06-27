#include <stdio.h>
#include "main.h"

/**
* largest_number - function to print the largest of 3 integers
* @a: parameter
* @b: parameter
* @c: parameter
* Return: zero
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
