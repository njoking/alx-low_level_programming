#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: integer n question
 * @height: character in question
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
