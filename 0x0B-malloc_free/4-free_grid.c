#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid : input
 * @height: height of 2D array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int ctr;

for (ctr = 0; ctr < height; ctr++)
{
free(grid[ctr]);
}
free(grid);
}

