#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - return pointer to a
* created 2D array of integers.
* @width: heigh
* @height: width
* Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, x;

if (width <= 0 || height <= 0)
{return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free just allocated memory */
for (x = 0; x < i; x++)
free(grid[x]);
free(grid);
return (NULL);
}
for (x = 0; x < width; x++)
grid[i][x] = 0;
}
return (grid);
}
