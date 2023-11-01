#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"

/**
 * free_greed - frees 2d array
 * @grid: 2d grid
 * @height: height dimention of grid
 * Description: frees memory of grid
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	
	free(grid);
}
