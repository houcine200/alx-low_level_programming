#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2D array
 * @grid: the 2D array freed
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/* Free each row */
		free(grid[i]);
	}
	/*Free the array of pointers */
	free(grid);
}
