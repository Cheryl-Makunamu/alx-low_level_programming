#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}

