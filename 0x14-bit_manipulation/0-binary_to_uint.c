#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int (decimal)
 * @b: input in binary
 * Return: converted Decimal unsigned int,
 * else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_res = 0;
	unsigned int power = strlen(b) - 1;

	if (b == NULL)
	{return (0);
	}
	while (*b != '\0')
	{
		if (*b == '1')
		{
			decimal_res = decimal_res + (unsigned int) pow(2, power);
			/*printf("\ndec %u when power is %d\n",decimal_res, power );*/
		} 
		else if (*b != '0')
		{/* Handle invalid character*/
			/*putchar(*b);*/
			return (0);
		}
		b++;
		power--;
	}
	/*another solution: while (*b != '\0') {*/
	/*   if (*b == '0') {*/
	/*    ul = res * 2;*/
	/*} else if (*b == '1') {*/
	/*  res = res * 2 + 1;}*/
	return (decimal_res);
}
