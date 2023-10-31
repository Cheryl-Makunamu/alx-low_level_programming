#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address to two dimensional grid
 * @height: height of grid
 * Return: zero
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0 ; a < height ; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
