#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function to create a two dimensional array
 * @width: width
 * @height: height
 *
 * Return: pointer to matrix created
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *) malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			free(arr);
			for (y = 0; y <= x; y++)
				free(arr[y]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}
