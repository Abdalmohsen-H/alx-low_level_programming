#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int (decimal)
 * @b: input in binary
 * Return: converted Decimal unsigned int,
 * else 0
 * there are 2ways to convert but one works just fine
 * this one is explained at end of description.
 * because c only have pow function from math.h
 * and it needs handling any error while compiling
 *
 * decimal converted to binary by we dividing
 * decimal number by 2 repeatedly until we get 0,
 * and we keep track of the remainders to get the binary digits.
 * we are reversing the process now to return back to decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_res = 0;

	/* Check if input string is NULL */
	if (b == NULL)
	{
		return (0);
	}
	/* Loop input string till end*/
	while (*b != '\0')
	{
		/* If current char is '0', shift left by 1 bit */
		if (*b == '0')
		{
			decimal_res = decimal_res * 2;
		}
		/* If current char is '1', shift left by 1 bit and add 1 */
		else if (*b == '1')
		{
			decimal_res = (decimal_res * 2) + 1;
		}
		/* If current char is not '0' or '1', input is invalid */
		else
		{
			return (0);
		}
		/* Move to next char in input string */
		b++;
	}
	/* Return decimal equivalent of binary input */
	return (decimal_res);
}
