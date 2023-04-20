#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - searches integer
* @array: pointer to array to search
* @size: array size
* @cmp: pointer function to func for comparing
* Return: the index of the first element that match
* else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int k;

if (array && cmp && size > 0)
{
for (k = 0; k < size; k++)
{
/* Compare element with cmp function */
if (cmp(array[k]) != 0)
/* Return index of first match */
{return (k);
}
}
}
/* Return -1 if no match found */
/* or wrong inputs */
return (-1);
}
