#include "search_algos.h"
/**
 * linear_search - use linear search to find
 * element in array
 * @array : pointer to 1st element of array
 * @size: size of array=sizeof(array)/sizeof(array[0])
 * @value: search this value in the given array
 * Return: index of first match of element, else -1
 */
int linear_search(int *array, size_t size, int value)
{size_t idx;

	if (array != NULL)
	{	
		for (idx = 0; idx < size; idx++)
		{printf("Value checked array[%ld] = [%d]\n", idx,  array[idx]);
			/*printf("Value checked array[%ld] = [%d]\n", idx,  *(array + idx));*/
			if (*(array + idx) == value)
			{
				return (idx);
			}
		}
	}
	return (-1);
}
