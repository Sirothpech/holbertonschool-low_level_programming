#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fregrid from previous project
 * @grid: pointer
 * @height: height of the grid
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
