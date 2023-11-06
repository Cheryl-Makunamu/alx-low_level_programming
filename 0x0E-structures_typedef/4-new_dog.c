#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * strlen - gets length of a string
 * @s: input value
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * strcopy - copies the string
 * @src : source of the string
 * @dest: buffer that stores the string
 * Return: dest pointer
 */
char*_strcopy(char *dest, char *src)
{
	int index = 0;


	for (index = 0 ; src[index] ;index ++;)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * strcopy - copies the string
 * @src : source of the string
 * @dest: buffer that stores the string
 * Return: dest pointer
 */

        dog_t *dog;
        int l1, l2;

        l1 = _strlen(name);
        l2 = _strlen(owner);
        dog = malloc(sizeof(dog_t));
        if (dog == NULL)
                return (NULL);
        dog->name =malloc(sizeof(char) * (l1 + 1));
        if (dog->name == NULL)
        {
                free(dog);
                return (NULL);
	}
	dog-> = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
}
