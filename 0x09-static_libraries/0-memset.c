#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starting adress of the memory to be filled
 * @b: the parameter
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0 ; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
