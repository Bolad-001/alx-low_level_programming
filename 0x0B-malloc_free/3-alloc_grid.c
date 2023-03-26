#include "main.h"

/**
* alloc_grid- funtion that returns pointer to a 2 dimensional array
* @width: width of the grid
* @height: height of the grid
* Return: NULL on failure otherwise the pointer
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);

}
