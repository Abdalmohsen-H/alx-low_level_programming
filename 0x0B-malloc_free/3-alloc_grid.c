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
int i, j;

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
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
