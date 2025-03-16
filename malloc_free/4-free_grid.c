#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the grid to be freed
 * @height: number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	/*Check for NULL grid*/
	if (grid == NULL || height <= 0)
	{
		return;
	}

	/*Free each row of the grid*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/*Free the array of pointers itself*/
	free(grid);
}
