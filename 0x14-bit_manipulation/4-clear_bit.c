/**
 * clear_bit - set bit at given index to 0
 * @n: input decimal number
 * @index:index from left starting from 0
 *
 * Return: 1 if setting the bit successed,
 * else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1, temp = 0;
	unsigned int counter = 0;

	/* Loop through all the bits of input number*/
	while (bitmask > 0)
	{
		if (index == counter)
		{
			temp = (*n & (~bitmask));
			if (!(temp & bitmask))
			{
				/*printf("n & bitmask: %lu", n & bitmask);*/
				*n = temp;
				return (1);
			}
			else
			{
				/*printf("n & bitmask: %lu", n & bitmask);*/
				return (-1);/*clearing failed*/
			}
		}
		/*Shift mask one bit to the left as index from left*/
		bitmask = bitmask << 1;
		counter++;
	}
	return (-1); /*index out of range*/
}
