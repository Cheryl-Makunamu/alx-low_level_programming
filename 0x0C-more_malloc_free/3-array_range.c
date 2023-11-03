#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range -  creates an array of integers
 * @min: lowest number
 * @max: highest number
 *
 * Return: pointer to create array
 */
int *array_range(int min, int max)
{
	int *i, a = 0;

	if (min > max)
		return (NULL);
	i = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[a] = min;
		a++;
		min++;
	}
	return (i);
}
