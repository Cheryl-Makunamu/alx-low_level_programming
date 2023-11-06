#include <stdio.h>
#include "dog.h"

/**
 * init_dog - variable of type struct dog
 * @d: to be initialized
 * @name: the dogs name
 * @age: the dogs age
 * @owner: dogs owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

