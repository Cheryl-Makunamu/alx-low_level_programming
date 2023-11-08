#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: arrays sizei
 * @action: pointer to the function
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

