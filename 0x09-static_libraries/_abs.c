#include "main.h"
/**
 * _abs - function prints the absolute value abs
 * @n: is int for the input number
 * Return: absolute value
 *
 */
int _abs(int n)
{
	int y;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		y = -1 * n;
		return (y);
	}
}
