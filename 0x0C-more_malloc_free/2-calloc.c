
#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory to fill
 * @b: char to copy
 * @n: number of times to copy
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - function allocates an array's memory
 * @nmemb: number of elements in an array
 * @size: size of element
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

