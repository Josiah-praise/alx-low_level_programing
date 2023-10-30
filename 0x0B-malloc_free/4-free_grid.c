#include <stdlib.h>

/**
 *free_grid - frees up the memory allocated by alloc_grid
 *@grid: a pointer to an array of pointers
 *Return: No return value
 *@height: the height of the grid as an integer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
