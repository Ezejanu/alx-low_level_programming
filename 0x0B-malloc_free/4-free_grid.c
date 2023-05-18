#include "main.h"
#include <stdlib.h>

/**
* free_grid - a function that frees a 2 dimensional grid
* previously created by your alloc_grid function
* @grid: grid to be freed
* @height: height of grid to be freed
*/

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
