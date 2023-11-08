#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: arrays size
 * @action; pointer to function array_iterator
 * @array: the array
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);

		array++;

	}
}

