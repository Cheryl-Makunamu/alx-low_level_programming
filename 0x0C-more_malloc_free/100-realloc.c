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
	char *;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL );
		return (ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0 ; a < old_size && a < new_size ; a++)
	{
		ptr[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (ptr);
}

