#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - func pointer takes
 * input from array of inputs
 * @array: in put array
 * @size: array size
 * @action: function pointer that takes
 * one input at time
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && size && action)
for (i = 0; i < (int) size; i++)
{action(array[i]);
}
}
