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
 * _strcopy - copies the string
 * @src : source of the string
 * @dest: buffer that stores the string
 * Return: dest pointer
 */
char*_strcopy(char *dest, char *src)
{
	int index = 0;


	for (index = 0 ; src[index] ; index ++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog 
 * @age: dogs age
 * @name: dogs name
 * @owner: the dogd owner
 * Return: null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
        
        if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

        dog = malloc(sizeof(dog_t));
	
        if (dog == NULL)
		return (NULL);
	
	dog->name= malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->owner == NULL)
        
	{
                free(dog);
		return (NULL);
	}
	dog->owner= malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
