#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: number of elements to reverse
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int *new;

i = 0;
while (i < n)
{
i++;
}
/*Allocate memory for the array using malloc()*/
new = malloc(i *sizeof(int));
/* Check if memory allocation was successful*/
if (new != NULL)
{
for (j = 0; j < n; j++)
{
new[j] = a[i - j - 1];
/*printf("%d, ", new[j]);*/
}
for (j = 0; j < n; j++)
{
a[j] = new[j];
}
/*printf("\n");*/
}
}
