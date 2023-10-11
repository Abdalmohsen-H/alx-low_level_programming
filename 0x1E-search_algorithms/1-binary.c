#include "search_algos.h"
/**
 * binary_search - use binary search to find
 * element in array
 * @array : pointer to 1st element of array
 * @size: size of array=sizeof(array)/sizeof(array[0])
 * @value: search this value in the given array
 * Return: index of first match of element, else -1
 */
int binary_search(int *array, size_t size, int value)
{size_t lftidx = 0, rgtidx = size - 1;
	size_t idx, mid;

	if (array != NULL)
	{
		while (lftidx <= rgtidx)
		{
			mid = (rgtidx + lftidx) / 2;
			/* print every iteration array */
			printf("Searching in array:");
			for (idx = lftidx; idx < rgtidx; idx++)
			{
				printf("%d, ", array[idx]);
			}
			printf("%d\n", array[idx]);

			if (array[mid] == value)
			{
				return (mid);
			}
			else if (array[mid] < value)
			{
				lftidx = mid + 1;
			}
			else /* array[mid] > value */
			{
				rgtidx = mid -1;
			}
		}
	}
	return (-1);
}
