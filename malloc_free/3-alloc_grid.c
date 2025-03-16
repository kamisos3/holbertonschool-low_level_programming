#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width:width of the array
 * @height:height of the array
 *
 * Return:pointer to the 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	/*Check for invalid dimensions*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Allocate memory for the array of pointers*/
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL); /*Return NULL if fails*/
	}
	/*Allocate memory for each row and initialize to 0*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/*Clean up already allocated rows upon failure*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);/*Return NULL if fails*/
		}
		/*Initialize the row elements to 0*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid); /*Return the pointer to the created grid*/
}
