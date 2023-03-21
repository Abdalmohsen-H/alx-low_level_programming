#include "main.h"
/**
 * print_sign - prints the sign of a number and 1 or 0 o -1
 * @n: is int for the input number
 * Return: 1 if is n +ve, -1 if n -ve , 0 otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
