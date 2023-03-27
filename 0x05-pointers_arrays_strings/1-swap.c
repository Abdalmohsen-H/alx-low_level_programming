#include "main.h"
/**
 * swap_int - swaps two input integrs values
 * @a: first integer pointer parameter
 * @b: second integer pointer parameter
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int y;
	
	y = *a;
	*a = *b;
	*b = y;

}
