#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars intialized
 * with a given char
 * @size: array size
 * @c: char
 * Return: pointer to intalized array, Else NULL
 */
char *create_array(unsigned int size, char c)
{
char *outarr;

outarr = malloc(size * sizeof(char));
if (size == 0 || outarr == NULL)
{
return (NULL);
}
while (size > 0)
{
outarr[size - 1] = c;
size--;
}
return (outarr);
}
