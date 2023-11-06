#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - that frees dog's memory
 * @d: struct of dog
 * Return: zero
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
