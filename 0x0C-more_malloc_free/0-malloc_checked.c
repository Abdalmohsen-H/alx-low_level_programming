#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * and checking if it fails or not
 * @b: given int
 * Return: pointer to allocated memory or NULL
*/
void *malloc_checked(unsigned int b)
{
void *reserv;

reserv = malloc(b);
if (!reserv)
{
exit(98);
}
return (reserv);
}
