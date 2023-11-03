#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block 
 * @ptr: pointer
 * @old_size: input value
 * @new_size: input value 
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;

	if (new_size == old_size)
		return (p);

	if (p == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL );
		return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(p);
			return (NULL);
		}
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	for (a = 0 ; a < old_size && a < new_size ; a++)
	{
		np[a] = ((char *) p)[a];
	}
	free(p);
	return (np);
}

