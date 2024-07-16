#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function to create array of char
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (x < size)
	{
		*(p + x) = c;
		x++;
	}

	*(p + x) = '\0';

	return (p);
}
