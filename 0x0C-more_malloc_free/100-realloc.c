#include "main.h"
#include <stdlib.h>
/**
* _realloc - use malloc and free (only)
* to simulate realloc, reallocates a memory block
* @ptr: input pointer needs reallocation
* @old_size: old size in bytes for input (ptr)
* @new_size: new size in bytes to allocate for ptr
* Return: pointer to new reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

/*If new_size == old_size, just return ptr*/
if (new_size == old_size)
{return (ptr);
}
/*If ptr is NULL, then use malloc(new_size)*/
/* and return new_ptr, unless it is NULL */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
/* free new memory block if it isn't free*/
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
/* allocate the new block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{return (NULL);
}
/*normal case */
for (i = 0; i < old_size && i < new_size; i++)
{/* (char *) because ptr is void */
/*also we could define: char *tempo = ptr */
new_ptr[i] = *((char *) ptr + i);
}
/* free ptr as it already reallocated*/
/* to new block */
free(ptr);
return (new_ptr);
}
