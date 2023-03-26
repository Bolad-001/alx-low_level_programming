#include "main.h"

/**
* free_grid - function that frees a 2D grid
* @grid: grid created
* @height: height of the grid
* Return: Alays 0
*/

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return (NULL);
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
