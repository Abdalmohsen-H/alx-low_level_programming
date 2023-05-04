#include "main.h"
/**
 * print_binary - conert decimal to binary and print
 * no division allowed or any function
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	/* must be one to avoid infinte looping below*/
	unsigned long int largestPowerOfTwo = 1;
	unsigned long int bitmask = 1;

	/* If the input is zero, print a single zero and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((largestPowerOfTwo * 2) <= n)
	{
		largestPowerOfTwo *= 2;
	}
	bitmask = largestPowerOfTwo;
	/* Loop through all the bits of input number*/
	while (bitmask > 0)
	{
		/* Check if the bit is set in imput number */
		if ((n & bitmask))
			_putchar('1');
		else
			_putchar('0');
		/* Shift the mask one bit to the right */
		bitmask = bitmask >> 1;
	}
}
