#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated by malloc
 * @old_size: size of allocated memory
 * @new_size: new size of new memory
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	p2 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p1[x] = p2[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p1[x] = p2[x];
	}

	free(ptr);
	return (p2);
}
