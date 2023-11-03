#include "main.h"
#include <stdlib.h>

/**
 * _calloc - llocates memory for an array
 * @nmemb: the number member
 * @size: the size of the memory
 *
 * Return: zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	s = malloc(b);
	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = 0;
		a++;
	}
	return (s);
}
