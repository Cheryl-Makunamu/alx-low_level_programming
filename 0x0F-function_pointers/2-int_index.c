#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @size: size of array
 * @cmp: pointer to function that compares values
 * @array: integers array
 * Return: if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (ind = 0 ; ind < size ; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}
	return (-1);
}
