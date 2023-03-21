#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @d: is int for the input number
 * Return: last digit
 *
 */
int print_last_digit(int d)
{
	int y;
	int n;

	n = d % 10;
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
