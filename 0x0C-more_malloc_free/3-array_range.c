#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*#include <string.h>*/
/**
 * array_range - create array of intagers
 * return new allocated memory space
 * @min: min. integer value
 * @max: max. integer value
 * Return: pointer to new space, Else NULL
 */
int *array_range(int min, int max)
{
int *outarr;
int i = 0, length = 0, elem = min;

if (min > max)
{return (NULL);
}
length = max - min + 1;
outarr = malloc(sizeof(int) * length);
if (outarr == NULL)
{return (NULL);
}
while (length > 0)
{
outarr[i] = elem;
length--;
i++;
elem++;
}
return (outarr);
}
