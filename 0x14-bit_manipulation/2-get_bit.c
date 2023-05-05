#include "main.h"
/**
 * get_bit - get bit at given index
 * @n: input decimal number
 * @index:index from left starting from 0
 *
 * Return: value of bit at matching index,
 * else -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask = 1;
	unsigned int counter = 0;

	/* Loop through all the bits of input number*/
	while (bitmask > 0)
	{
		if (index == counter)
		{/* Check if the bit is set in imput number */
			if ((n & bitmask))
			{
				/*printf("n & bitmask: %lu", n & bitmask);*/
				return (1);
			}
			else
			{
				/*printf("n & bitmask: %lu", n & bitmask);*/
				return (0);
			}
		}
		/*Shift mask one bit to the left as index from left*/
		bitmask = bitmask << 1;
		counter++;
	}
	return (-1); /*index out of range*/
}
