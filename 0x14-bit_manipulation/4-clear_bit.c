#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function thatset the value of a bit to 0
 * @n: pointer to decimal number
 * @index: index position to change
 * Return: 1 if true
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (i = 1; h > 0; i *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
