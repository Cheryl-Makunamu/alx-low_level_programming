#include "main.h"

/**
 * *_memset - function that fills memory
 * @s: memory to be filled
 * @b: character copied
 * @n: number of times
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
