#include "main.h"
/**
 * flip_bits - returns number of bits required
 * to flip one number to equal another number.
 * @n: first input number.
 * @m: second input number.
 *
 * Return: the number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{/* XOR the two input numbers to get difference in bits */
	unsigned long int xor_result = n ^ m;
	unsigned int flip_bits_count = 0;
	/* Count number of set bits (1's) in XOR result */
	/* by looping result & checking the least significant bit */
	/*(the most right bit)*/
	while (xor_result != 0)
	{/* increament count by adding the least significant bit */
		/*(the most right) if it equal to 1, the & operation will*/
		/* equal 1 so the count increamented by 1*/
		flip_bits_count += xor_result & 1;
		/* shift one bit to right to check the least significant bit*/
		/*(the most right bit ) in next loop iteration*/
		xor_result = xor_result >> 1;
	}
	/* return bits required to be flipped*/
	return (flip_bits_count);
}
