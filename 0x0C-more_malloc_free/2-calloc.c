#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  use malloc to simulate calloc
 * new allocated memory space with zeros
 * @size: size f data type in bytes
 * @nmemb: no. of elements for this data type
 * Return: pointer to new space, Else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *outarr;
unsigned int length = 0;
int i = 0;

if (nmemb == 0 || size == 0)
{return (NULL);
}
outarr = malloc(size * nmemb);
if (outarr == NULL)
{return (NULL);
}
length = size * nmemb;
while (length > 0)
{
outarr[i] = 0;
length--;
i++;
}
return (outarr);
}
