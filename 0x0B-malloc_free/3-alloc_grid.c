#include "main.h"

/**
* alloc_grid- funtion that returns pointer to a 2 dimensional array
* @width: width of the grid
* @height: height of the grid
* Return: NULL on failure otherwise the pointer
*/

int **alloc_grid(int width, int height)
{
	int **dimen_array;
	int i;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	dimen_array = malloc(sizeof(int) * height);

	if (dimen_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		dimen_array[i] = malloc(sizeof(int) * width);

		if (dimen_array[i] == NULL)
		{
			for (j = 0; j < 1; j++)
			{
				free(dimen_array[j]);
			}
			free(dimen_array);

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			dimen_array[i][j] = 0;
		}
	}
	
	return (dimen_array);
}
